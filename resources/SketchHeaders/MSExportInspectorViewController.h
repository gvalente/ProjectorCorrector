//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStylePartInspectorViewController.h"

@class MSShareButtonHandler, NSArray, NSButton, NSView;

@interface MSExportInspectorViewController : MSStylePartInspectorViewController
{
    NSArray *_layers;
    NSView *_topFillerView;
    NSView *_bottomLabelView;
    NSView *_exportButtonView;
    NSView *_separatorView;
    NSView *_separatorView2;
    NSView *_bigExportLabel;
    NSButton *_addExportFormatButton;
    NSButton *_shareButton;
    NSButton *_exportButton;
    NSButton *_knifeButton;
    NSArray *_formatViewControllers;
    MSShareButtonHandler *_shareButtonHandler;
}

@property(retain, nonatomic) MSShareButtonHandler *shareButtonHandler; // @synthesize shareButtonHandler=_shareButtonHandler;
@property(copy, nonatomic) NSArray *formatViewControllers; // @synthesize formatViewControllers=_formatViewControllers;
@property(retain, nonatomic) NSButton *knifeButton; // @synthesize knifeButton=_knifeButton;
@property(retain, nonatomic) NSButton *exportButton; // @synthesize exportButton=_exportButton;
@property(retain, nonatomic) NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSButton *addExportFormatButton; // @synthesize addExportFormatButton=_addExportFormatButton;
@property(retain, nonatomic) NSView *bigExportLabel; // @synthesize bigExportLabel=_bigExportLabel;
@property(retain, nonatomic) NSView *separatorView2; // @synthesize separatorView2=_separatorView2;
@property(retain, nonatomic) NSView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) NSView *exportButtonView; // @synthesize exportButtonView=_exportButtonView;
@property(retain, nonatomic) NSView *bottomLabelView; // @synthesize bottomLabelView=_bottomLabelView;
@property(retain, nonatomic) NSView *topFillerView; // @synthesize topFillerView=_topFillerView;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForDisplay;
- (id)firstResponderIgnoringFieldEditor;
- (void)commitScaleFieldEditsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)exportSingleSlice:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)createSliceAction:(id)arg1;
- (id)document;
- (void)addExportFormat:(id)arg1;
- (BOOL)wantsSeparatorBetweenView:(id)arg1 andView:(id)arg2;
- (id)views;
- (id)view;
- (BOOL)hasEnabledStyle;
- (id)exportButtonDisplayName;
- (void)applyDisplayNameToExportButton;
- (void)prepare;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;

@end

