//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSSymbolMaster.h"

@interface MSSymbolMaster : _MSSymbolMaster
{
    BOOL _isInvalidatingSymbolInstances;
}

- (BOOL)shouldResizeToFitAfterDrag;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (id)parentSymbol;
- (unsigned long long)traits;
- (id)rootForNameUniquing;
- (id)convertToSymbol;
- (id)ancestorIDsForLayerNamed:(id)arg1 skip:(id)arg2;
- (id)ancestorIDsForLayerNamed:(id)arg1;
- (BOOL)isSafeToDelete;
- (void)multiplyBy:(double)arg1;
- (void)removeFromParentAndDetachAllInstances;
- (void)detachAllInstances;
- (BOOL)ensureSymbolIDUniqueInDocument:(id)arg1;
- (void)applyOverrides:(id)arg1;
- (BOOL)hasInstances;
- (id)allInstances;
- (id)newSymbolInstance;
- (void)moveChildrenToIdenticalPositionAfterResizeFromRect:(struct CGRect)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)hasSliceIcon;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (BOOL)canSnapSizeToLayer:(id)arg1;
- (BOOL)canSnapToLayer:(id)arg1;

@end

