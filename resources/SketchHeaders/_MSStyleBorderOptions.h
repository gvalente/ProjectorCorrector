//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStylePart.h"

@class NSArray;

@interface _MSStyleBorderOptions : MSStylePart
{
    NSArray *_dashPattern;
    unsigned long long _lineCapStyle;
    unsigned long long _lineJoinStyle;
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
- (void)setPrimitiveLineJoinStyle:(unsigned long long)arg1;
- (unsigned long long)primitiveLineJoinStyle;
- (void)setPrimitiveLineCapStyle:(unsigned long long)arg1;
- (unsigned long long)primitiveLineCapStyle;
- (void)setPrimitiveDashPattern:(id)arg1;
- (id)primitiveDashPattern;
@property(nonatomic) unsigned long long lineJoinStyle; // @synthesize lineJoinStyle=_lineJoinStyle;
@property(nonatomic) unsigned long long lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property(copy, nonatomic) NSArray *dashPattern; // @synthesize dashPattern=_dashPattern;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end
