//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActionSheet, UIColor, UIImageView, UIPopoverBackgroundView, UIPopoverController;

__attribute__((visibility("hidden")))
@interface _UIPopoverView : UIView
{
    UIView *_contentView;
    UIPopoverBackgroundView *_backgroundView;
    Class _backgroundViewClass;
    UIImageView *_toolbarShine;
    _Bool _showsBackgroundComponentHighlights;
    _Bool _showsBackgroundViewHighlight;
    _Bool _showsContentViewHighlight;
    _Bool _chromeHidden;
    UIActionSheet *_presentedActionSheet;
    UIPopoverController *_popoverController;
}

+ (id)popoverViewContainingView:(id)arg1;
@property(nonatomic) _Bool chromeHidden; // @synthesize chromeHidden=_chromeHidden;
@property(nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIActionSheet *presentedActionSheet; // @synthesize presentedActionSheet=_presentedActionSheet;
@property(nonatomic) _Bool showsContentViewHighlight; // @synthesize showsContentViewHighlight=_showsContentViewHighlight;
@property(nonatomic) _Bool showsBackgroundViewHighlight; // @synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight;
@property(nonatomic) _Bool showsBackgroundComponentHighlights; // @synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights;
- (void).cxx_destruct;
- (void)prepareForAnimatedTransitioningWithCoordinator:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_hideArrow;
- (void)_showArrow;
- (void)_setCornerRadius:(double)arg1;
- (void)_setFrame:(struct CGRect)arg1 arrowOffset:(double)arg2;
- (void)setUseToolbarShine:(_Bool)arg1;
@property(copy, nonatomic) UIColor *arrowBackgroundColor;
@property(copy, nonatomic) UIColor *popoverBackgroundColor;
@property(nonatomic) long long backgroundStyle;
@property(nonatomic) unsigned long long arrowDirection;
@property(nonatomic) double arrowOffset;
- (_Bool)_backgroundNeedsSeperateBlending;
- (void)_updateContentBlendingColor;
- (_Bool)_allowsCustomizationOfContent;
- (void)_setPopoverContentView:(id)arg1;
- (struct CGRect)_snapshotBounds;
- (id)toolbarShine;
- (id)standardChromeView;
- (id)backgroundView;
- (id)contentView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect)arg1;
- (int)_style;
- (void)layoutSubviews;
- (void)_layoutToolbarShine;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2;

@end

