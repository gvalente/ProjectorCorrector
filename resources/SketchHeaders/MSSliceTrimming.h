//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSSliceTrimming : NSObject
{
}

+ (struct CGRect)simpleSafeRectForSlice:(id)arg1;
+ (struct CGRect)safeRectForSlice:(id)arg1;
+ (id)basicSliceFromLayer:(id)arg1;
+ (struct CGRect)_trimmedRectForSlice:(id)arg1;
+ (struct CGRect)rect:(struct CGRect)arg1 forLayer:(id)arg2;
+ (struct CGRect)trimmedRectForSlice:(id)arg1;
+ (void)trimSlice:(id)arg1 toFitLayers:(id)arg2;

@end
