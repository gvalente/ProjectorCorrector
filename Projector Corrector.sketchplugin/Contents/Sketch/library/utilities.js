var com = com || {};

com.gino = {
	overlayColor   : '#000000',
	overlayAlpha   : 0.1,
    overlayOffset  : 0.02,
	overlayPadding : 0,
	overlayName    : 'ProjectorCorrector',
	context        : undefined,
	document       : undefined,
	selection      : undefined,
	page           : undefined,
    pages          : undefined,
	artboard       : undefined,
	current        : undefined,

    init: function(context){
        this.context = context;
        this.document = context.document;
        this.selection = context.selection;
        this.page = this.document.currentPage();
        this.pages = this.document.pages();
        this.artboard = this.page.currentArtboard();
        this.current = this.artboard || this.page;
    },
    extend: function( options, target ){
        var target = target || this;

        for ( var key in options ){
            target[key] = options[key];
        }
        return target;
    },
    is: function(layer, theClass){
        if(!layer) return false;
        var klass = [layer class];
        return klass === theClass;
    },
    isIntersect: function(lf, tf){
        return !(
            lf.maxX <= tf.x ||
            lf.x >= tf.maxX ||
            lf.y >= tf.maxY ||
            lf.maxY <= tf.y
        );
    },
    getFrame: function(layer) {
        var rect = layer.absoluteRect();
        return {
            x: Math.round(rect.x()),
            y: Math.round(rect.y()),
            width: Math.round(rect.width()),
            height: Math.round(rect.height()),
            maxX: Math.round(rect.x() + rect.width()),
            maxY: Math.round(rect.y() + rect.height())
        };
    },
    getDistance: function(frame, target){
        var tf = target || this.getFrame(this.current);

        return [
            ( frame.y - tf.y ),
            ( (tf.x + tf.width) - frame.maxX ),
            ( (tf.y + tf.height) - frame.maxY ),
            ( frame.x - tf.x )
        ];
    },
    addLayer: function(type, container){
        var container = container || this.current;
        return container.addLayerOfType(type);
    },
    addGroup: function(container){
        var container = container || this.current;
        return this.addLayer("group", container);
    },
    addShape: function(container){
        var container = container || this.current;
        return this.addLayer("rectangle", container);
    },
    addText: function(container){
        var container = container || this.current;
        return this.addLayer("text", container);
    },
    removeLayer: function(layer){
        var container = layer.parentGroup();
        if (container) container.removeLayer(layer);
    },
    message: function(message){
        this.document.showMessage(message);
    }
};


// Find
com.gino.extend({
    find: function(name, container, isArray, field){
        var field = field || "name";
        var predicate = NSPredicate.predicateWithFormat("(" + field + " != NULL) && (" + field + " == %@)", name);
        var container = container || this.current;
        var items;
        
        if(isArray){
            items = container;
        }
        else{
            items = container.children();
        }

        var queryResult = items.filteredArrayUsingPredicate(predicate);

        if (queryResult.count()==1){
            return queryResult[0];
        } else if (queryResult.count()>0){
            return queryResult;
        } else {
            return false;
        }
    }
});


// Helper Functions
com.gino.extend({

    // cleaner iteration function
    iterateObjects: function(collection, iterator) {
        for (var i = 0; i < collection.count(); i++) {
            var object = collection.objectAtIndex(i);
            var returnValue = iterator(object, i, collection);
            if (returnValue === false) {
                break;
            }
        }
    },

    // add a color and alpha fill to a shape
	addFillToShape: function(shape, color, alpha) {
        var alpha = alpha || 1;

        // Check for existing fill and add
		var fill = shape.style().addStylePartOfType(0);

		// add color to fill
		fill.color = MSColor.colorWithSVGString(color).colorWithAlpha(alpha);
	},

	// get artboard bounds of a page
	getArtboardBounds: function(page) {
        var pageBounds = MSLayerGroup.groupBoundsForLayers(page);
		
		return NSMakeRect(
			+pageBounds.origin.x    - ( pageBounds.size.width  * this.overlayPadding / 2 ),
			+pageBounds.origin.y    - ( pageBounds.size.height * this.overlayPadding / 2 ),
			+pageBounds.size.width  * ( 1 + this.overlayPadding ),
			+pageBounds.size.height * ( 1 + this.overlayPadding )
		);
	},


    // check if PCoverlay is present on any page
    overlayExists: function(container) {
        var container = container || this.pages;
        
        // Single Page
        if( container instanceof MSPage ) {
            return this.find( this.overlayName, container );
        }
        // Multiple Pages
        for( var i = 0; i < container.count(); i++ ) {
            if( this.find(this.overlayName, container[i]) ) return true;
        }

        return false;
    },
    getOverlay: function(container) {
        var container = container || this.page;
        return this.find( this.overlayName, container );
    }
});


// Overlay
com.gino.extend({
    createOverlay: function(page) {
        var rectShape = MSRectangleShape.alloc().initWithFrame( this.getArtboardBounds( page.artboards() ) );

        var overlay = MSShapeGroup.shapeWithPath(rectShape);
            overlay.isLocked = true;
            overlay.name = this.overlayName;
            overlay.style().contextSettings().opacity = this.overlayAlpha;
        
        this.addFillToShape( overlay, this.overlayColor );
        return [overlay];
    },
	addOverlay: function() {
        this.iterateObjects(this.pages, function(childPage) {
            childPage.addLayers( com.gino.createOverlay(childPage) );
        });

        // for( var i = 0; i < this.pages.count(); i++ ) {
        //     //TODO: Skip if no artboards on page
        //     this.pages[i].addLayers( this.createOverlay( this.pages[i] ) );
        // }
	},
    removeOverlay: function() {
        for( var i = 0; i < this.pages.count(); i++ ) {
            this.removeLayer( this.find(this.overlayName, this.pages[i]) );
        }
    },
    // check for existence of overlay and either add or remove
    toggleOverlay: function() {
        if( !this.overlayExists() ) {
            this.addOverlay();
        } else {
            this.removeOverlay();
        }
    },
    // Offset overlay alpha based on operator
    offsetOverlayAlpha: function(op) {
        if( !this.overlayExists() ) return;

        // Check new opacity and whether it is between 0 and 1
        var operators = {
            '+': function(overlay, opacityChange) {
                    var newOpacity = (overlay.style().contextSettings().opacity() + opacityChange).toFixed(2);
                    return (newOpacity <= 1) ? newOpacity : false;
            },
            '-': function(overlay, opacityChange) {
                    var newOpacity = (overlay.style().contextSettings().opacity() - opacityChange).toFixed(2);
                    return (newOpacity >= 0) ? newOpacity : false;
            }
        }

        for( var i = 0; i < this.pages.count(); i++ ) {
            var overlay = this.getOverlay( this.pages[i] );

            var newOpacity = operators[op](overlay, this.overlayOffset);
            if(newOpacity) { overlay.style().contextSettings().opacity = newOpacity; }
        }
    }
});
