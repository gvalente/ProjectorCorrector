//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStyleBasicFill.h"

@class MSImageData;

@interface _MSStyleFill : MSStyleBasicFill
{
    MSImageData *_image;
    long long _noiseIndex;
    double _noiseIntensity;
    long long _patternFillType;
    double _patternTileScale;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitivePatternTileScale:(double)arg1;
- (double)primitivePatternTileScale;
- (void)setPrimitivePatternFillType:(long long)arg1;
- (long long)primitivePatternFillType;
- (void)setPrimitiveNoiseIntensity:(double)arg1;
- (double)primitiveNoiseIntensity;
- (void)setPrimitiveNoiseIndex:(long long)arg1;
- (long long)primitiveNoiseIndex;
- (void)setPrimitiveImage:(id)arg1;
- (id)primitiveImage;
@property(nonatomic) double patternTileScale; // @synthesize patternTileScale=_patternTileScale;
@property(nonatomic) long long patternFillType; // @synthesize patternFillType=_patternFillType;
@property(nonatomic) double noiseIntensity; // @synthesize noiseIntensity=_noiseIntensity;
@property(nonatomic) long long noiseIndex; // @synthesize noiseIndex=_noiseIndex;
@property(retain, nonatomic) MSImageData *image; // @synthesize image=_image;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end
