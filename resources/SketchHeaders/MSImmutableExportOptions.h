//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableExportOptions.h"

#import "MSExportOptions.h"

@class NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableExportOptions : _MSImmutableExportOptions <MSExportOptions>
{
}

- (void)migratePropertiesFromV72OrEarlierWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSArray> exportFormatsGeneric; // @dynamic exportFormatsGeneric;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <MSArray> includedLayerIdsGeneric; // @dynamic includedLayerIdsGeneric;
@property(readonly, nonatomic) unsigned long long layerOptions;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) BOOL shouldTrim;
@property(readonly) Class superclass;

@end
