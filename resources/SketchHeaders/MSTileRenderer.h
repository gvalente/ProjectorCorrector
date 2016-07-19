//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSImmutableDocumentData, MSImmutablePage, MSRenderingContext;

@interface MSTileRenderer : NSObject
{
    BOOL _shouldDrawPixelated;
    BOOL _drawDottedDirtyRect;
    BOOL _cancelled;
    MSImmutablePage *_immutablePage;
    MSImmutableDocumentData *_document;
    double _backingScale;
    id <MSRenderingContextCacheProvider> _cacheProvider;
    double _zoomValue;
    MSRenderingContext *_context;
    struct CGRect _tileRect;
    struct CGRect _dirtyRect;
}

@property(retain) MSRenderingContext *context; // @synthesize context=_context;
@property(nonatomic) struct CGRect dirtyRect; // @synthesize dirtyRect=_dirtyRect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> cacheProvider; // @synthesize cacheProvider=_cacheProvider;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) BOOL drawDottedDirtyRect; // @synthesize drawDottedDirtyRect=_drawDottedDirtyRect;
@property(nonatomic) BOOL shouldDrawPixelated; // @synthesize shouldDrawPixelated=_shouldDrawPixelated;
@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property(nonatomic) struct CGRect tileRect; // @synthesize tileRect=_tileRect;
@property(retain, nonatomic) MSImmutableDocumentData *document; // @synthesize document=_document;
@property(retain, nonatomic) MSImmutablePage *immutablePage; // @synthesize immutablePage=_immutablePage;
- (void).cxx_destruct;
- (void)prepareContext:(struct CGContext *)arg1;
- (id)contextWithCGContext:(struct CGContext *)arg1 colorSpace:(id)arg2;
- (void)cancel;
- (void)renderInContext:(struct CGContext *)arg1 colorSpace:(id)arg2 zoomValue:(double)arg3;
- (id)init;

@end

