//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableTextStyle.h"

#import "MSTextStyle.h"

@class NSDictionary, NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableTextStyle : _MSImmutableTextStyle <MSTextStyle>
{
    NSDictionary *_decodedAttributes;
}

@property(copy, nonatomic) NSDictionary *decodedAttributes; // @synthesize decodedAttributes=_decodedAttributes;
- (void).cxx_destruct;
- (void)migratePropertiesFromV81OrEarlierWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *attributes;
- (id)treeAsDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *encodedAttributes;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly) Class superclass;

@end
