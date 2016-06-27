//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSLayer.h"

@class MSColor;

@interface _MSSliceLayer : MSLayer
{
    BOOL _hasBackgroundColor;
    MSColor *_backgroundColor;
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
- (void)setPrimitiveBackgroundColor:(id)arg1;
- (id)primitiveBackgroundColor;
- (void)setPrimitiveHasBackgroundColor:(BOOL)arg1;
- (BOOL)primitiveHasBackgroundColor;
@property(retain, nonatomic) MSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)backgroundColorGeneric;
@property(nonatomic) BOOL hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

