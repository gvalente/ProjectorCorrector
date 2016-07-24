//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MSInspectorChildController.h"
#import "NSDraggingDestination.h"

@class MSDuplicateOffsetTracker, MSEventHandlerManager, NSString, NSViewController<MSInspectorChildController>;

@interface MSEventHandler : NSViewController <NSDraggingDestination, MSInspectorChildController>
{
    BOOL didDrag;
    struct CGPoint mouseAtTimeOfMenu;
    MSEventHandlerManager *_manager;
    id <MSBasicDelegate> _delegate;
    MSDuplicateOffsetTracker *_offsetTracker;
    NSString *_pressedKeys;
    struct CGPoint _viewCoordinateMouse;
}

+ (id)eventHandlerWithManager:(id)arg1;
@property(nonatomic) struct CGPoint viewCoordinateMouse; // @synthesize viewCoordinateMouse=_viewCoordinateMouse;
@property(copy, nonatomic) NSString *pressedKeys; // @synthesize pressedKeys=_pressedKeys;
@property(retain, nonatomic) MSDuplicateOffsetTracker *offsetTracker; // @synthesize offsetTracker=_offsetTracker;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MSEventHandlerManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)views;
- (BOOL)shouldHideExportBar;
- (void)prepareForDisplay;
- (BOOL)scrollEventShouldExitHandler:(id)arg1;
- (BOOL)allowsSwitchToInsertAction;
- (BOOL)shouldFitToPixelBounds;
- (double)nudgeDistanceForFlags:(unsigned long long)arg1;
- (BOOL)canDuplicate;
- (void)refreshRulers;
- (BOOL)inspectorShouldShowBlendingProperties;
- (BOOL)inspectorShouldShowLayerSpecificProperties;
- (BOOL)inspectorShouldShowPositions;
- (BOOL)inspectorShouldShowSharedStyles;
@property(readonly, nonatomic) NSViewController<MSInspectorChildController> *inspectorViewController;
- (unsigned long long)inspectorLocation;
- (id)view;
- (id)nibName;
- (void)layerPositionPossiblyChanged;
- (void)willResignFirstResponder;
- (struct CGPoint)centerPointForZooming;
- (void)visitArtboardForInstance:(id)arg1;
- (void)editLayer:(id)arg1;
- (void)mouseExited;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (BOOL)handlesHandToolItself;
- (struct CGRect)rulerGuidesRectAroundMouse:(struct CGPoint)arg1;
- (id)horizontalRulerGuidesForGridAlign:(struct CGPoint)arg1;
- (id)verticalRulerGuidesForGridAlign:(struct CGPoint)arg1;
- (struct CGPoint)alignMouseToGrid:(struct CGPoint)arg1;
- (void)currentPageDidChange;
- (void)layerRulerOriginChanged;
- (void)selectionDidChangeTo:(id)arg1;
- (void)zoomValueDidChange;
- (void)zoomValueWillChangeTo:(double)arg1;
- (double)zoomValue;
- (struct CGPoint)mouseInScreenCoordinates;
- (struct CGPoint)convertPointFromScreenCoordinates:(struct CGPoint)arg1 inGroup:(id)arg2;
- (id)dragDropHintForDropOnPoint:(struct CGPoint)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)imageName;
- (id)toolbarIdentifier;
- (BOOL)shouldDrawLayerSelection;
- (id)selectedLayersA;
- (id)selectedLayers;
- (struct CGRect)selectedRect;
- (void)changeColor:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (id)defaultCursor;
- (void)drawHandles;
- (void)windowDidResize:(id)arg1;
- (BOOL)arrowKeyIsPressed:(unsigned short)arg1;
- (BOOL)escapeKeyIsPressed:(unsigned short)arg1;
- (BOOL)enterKeyIsPressed:(unsigned short)arg1;
- (BOOL)deleteKeyIsPressed:(unsigned short)arg1;
- (id)lastEvent;
- (id)valueForUndefinedKey:(id)arg1;
- (void)delete:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)focusOnMainWindow;
- (id)duplicateLayer:(id)arg1 toIndex:(unsigned long long)arg2 offset:(struct CGSize)arg3;
- (id)duplicateSelectedLayersInGroup:(id)arg1 withOffset:(struct CGSize)arg2;
- (id)duplicateSelectedLayersWithOffset:(struct CGSize)arg1;
- (struct CGPoint)currentMousePointInCanvasCoordinates;
- (void)pasteHere:(id)arg1;
- (void)pasteOverSelection:(id)arg1;
- (void)paste:(id)arg1;
- (id)layersToCopy;
- (void)copy:(id)arg1;
- (void)doCut:(id)arg1;
- (void)cut:(id)arg1;
- (id)pastingViewPort;
- (void)readFromPasteboard:(id)arg1;
- (id)currentPage;
- (void)writeLayers:(id)arg1 toPasteboard:(id)arg2;
- (void)flagsChanged:(id)arg1;
- (struct CGPoint)zoomPoint:(struct CGPoint)arg1;
- (id)menuForEvent:(id)arg1;
- (void)returnToDefaultHandlerByClickingOutside;
- (void)returnToDefaultHandler;
- (void)didMoveThroughHistory:(id)arg1;
- (void)willMoveThroughHistory:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)handlerWillLoseFocus;
- (void)selectToolbarItemWithIdentifier:(id)arg1;
- (void)handlerGotFocus;
- (id)handlerName;
- (void)keyUp:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)refreshOverlay;
- (void)prepareGraphicsStateForGroup:(id)arg1 drawingBlock:(CDUnknownBlockType)arg2;
- (void)drawGuidesAndMeasurementsInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (void)viewDidScroll:(id)arg1;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)rightMouseDown:(id)arg1;
- (BOOL)mouseMovedEvent:(id)arg1;
- (BOOL)mouseUpEvent:(id)arg1;
- (BOOL)mouseDraggedEvent:(id)arg1;
- (BOOL)mouseDownEvent:(id)arg1;
- (struct CGPoint)convertAbsolutePointFromMouseLocationInWindow:(struct CGPoint)arg1;
- (struct CGPoint)convertAbsolutePointFromEvent:(id)arg1;
- (struct CGPoint)adjustPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
@property(nonatomic) struct CGPoint scrollOrigin; // @dynamic scrollOrigin;
- (id)parentForInsertingLayer:(id)arg1;
- (id)currentGroup;
- (struct CGPoint)adjustPoint:(struct CGPoint)arg1;
- (void)refreshOverlayOfViews;
- (id)document;
- (id)drawView;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (void)drawMeasurementsLabelAtMouseForString:(id)arg1;
- (void)drawMeasurementsLabelAtMouseForRotation:(long long)arg1;
- (void)drawMeasurementsLabelAtMouseForSize:(struct CGSize)arg1;
- (void)refreshMeasurementsLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
