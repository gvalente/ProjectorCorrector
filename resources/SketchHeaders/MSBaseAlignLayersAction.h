//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDocumentAction.h"

#import "MSAltButtonTarget.h"

@class NSString;

@interface MSBaseAlignLayersAction : MSDocumentAction <MSAltButtonTarget>
{
}

- (void)doPerformAction:(id)arg1;
- (BOOL)altButtonCanShowAltImage:(id)arg1;
- (BOOL)selectionContainsNoArtboards;
- (BOOL)selectionContainsOnlyArtboards;
- (BOOL)validate;
- (void)alignVectorPointsToKey:(id)arg1;
- (BOOL)canAlignToArtboardInstead;
- (void)alignToKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

