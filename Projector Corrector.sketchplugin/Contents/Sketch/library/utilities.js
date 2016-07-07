var com = com || {};

com.gino = {
	overlayColor   : '#FF0000',
	overlayAlpha   : 0.1,
	overlayPadding : 0,
	overlayName    : 'PCoverlay',
	context        : undefined,
	document       : undefined,
	selection      : undefined,
	page           : undefined,
	artboard       : undefined,
	current        : undefined,

  init: function(context){
      log("starting init");
      this.context = context;
      this.document = context.document;
      this.selection = context.selection;
      this.page = this.document.currentPage();
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


// Helper Functions
com.gino.extend({
	// add a color and alpha fill to a shape
	addFillToShape: function(shape, color, alpha) {
		log('addFillToShape – START');
		// Check for existing fill and add
		var fill = shape.style().addStylePartOfType(0);
		// add color to fill
		fill.color = MSColor.colorWithSVGString(color).colorWithAlpha(alpha);
		log('addFillToShape – END');
	},

	// get artboard bounds of a page
	getArtboardBounds: function() {
		log('getArtboardBounds – START');
		var pageBounds = MSLayerGroup.groupBoundsForLayers( this.page.artboards() );
		
		return NSMakeRect(
			+pageBounds.origin.x    - (pageBounds.size.width  * this.overlayPadding / 2),
			+pageBounds.origin.y    - (pageBounds.size.height * this.overlayPadding / 2),
			+pageBounds.size.width  * (1 + this.overlayPadding),
			+pageBounds.size.height * (1 + this.overlayPadding)
		);
		log('getArtboardBounds – END');
	}

});


// Create Shapes
com.gino.extend({
	makeRectangle: function() {
		log('makeRectangle – START');

		var rectShape = MSRectangleShape.alloc().initWithFrame( this.getArtboardBounds() );
				
		// make layer
		var shapeGroup = MSShapeGroup.shapeWithPath(rectShape);
				shapeGroup.isLocked = true;
				shapeGroup.name = this.overlayName;
		
		this.addFillToShape(shapeGroup, this.overlayColor, this.overlayAlpha);
		this.page.addLayers([shapeGroup]);
	}

});
