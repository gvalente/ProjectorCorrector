var utils = {
	// ----- GLOBAL VARIABLES ----- //
	overlayColor   : '#FF0000',
	overlayAlpha   : 0.1,
	overlayPadding : 0.2,

	// ----- HELPER FUNCTIONS ----- //
	addFillToShape: function(shape, color, alpha) {
		log('addFillToShape – START');
		// Check for existing fill and add
		var fill = shape.style().addStylePartOfType(0);

		// add color to fill
		fill.color = MSColor.colorWithSVGString(color)
														.colorWithAlpha(alpha);
		log('addFillToShape – END');
	},

	
}