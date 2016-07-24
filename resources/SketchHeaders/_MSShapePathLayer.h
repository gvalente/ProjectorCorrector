//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSLayer.h"

@class MSShapePath;

@interface _MSShapePathLayer : MSLayer
{
    BOOL _edited;
    long long _booleanOperation;
    MSShapePath *_path;
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
- (void)setPrimitivePath:(id)arg1;
- (id)primitivePath;
- (void)setPrimitiveEdited:(BOOL)arg1;
- (BOOL)primitiveEdited;
- (void)setPrimitiveBooleanOperation:(long long)arg1;
- (long long)primitiveBooleanOperation;
@property(retain, nonatomic) MSShapePath *path; // @synthesize path=_path;
- (id)pathGeneric;
@property(nonatomic) BOOL edited; // @synthesize edited=_edited;
@property(nonatomic) long long booleanOperation; // @synthesize booleanOperation=_booleanOperation;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end
