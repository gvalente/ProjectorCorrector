//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MSFrequentColorTracker : NSObject
{
    NSMutableDictionary *_colorDict;
}

@property(retain, nonatomic) NSMutableDictionary *colorDict; // @synthesize colorDict=_colorDict;
- (void).cxx_destruct;
- (id)frequentColors;
- (void)registerColors:(id)arg1 fromSource:(id)arg2;
- (void)registerColor:(id)arg1 fromSource:(id)arg2;
- (id)init;

@end
