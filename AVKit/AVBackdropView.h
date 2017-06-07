//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVView.h>

@class AVStackView, NSArray, UIView, UIVisualEffectView;

@interface AVBackdropView : AVView
{
    NSArray *_temporaryArrangedSubviews;
    _Bool _drawsAsCircle;
    long long _axis;
    UIView *_targetViewForSecondaryMaterialOverlay;
    AVStackView *_contentView;
    UIVisualEffectView *_visualEffectView;
    UIView *_secondaryMaterialOverlayView;
    NSArray *_secondaryMaterialOverlayViewConstraints;
}

+ (id)secondaryMaterialOverlayView;
+ (void)configureView:(id)arg1 withBackgroundFillOfColor:(id)arg2 opacity:(double)arg3 filter:(id)arg4;
+ (void)configureView:(id)arg1 forTintEffectWithColor:(id)arg2 filterType:(id)arg3;
+ (void)applyLoadedTrackTintToView:(id)arg1;
+ (void)applyCompletedTrackTintToView:(id)arg1;
+ (void)applyBaseTrackTintToView:(id)arg1;
+ (void)applySecondaryGlyphTintToView:(id)arg1;
+ (void)applyPrimaryGlyphTintToView:(id)arg1;
@property(retain, nonatomic) NSArray *secondaryMaterialOverlayViewConstraints; // @synthesize secondaryMaterialOverlayViewConstraints=_secondaryMaterialOverlayViewConstraints;
@property(retain, nonatomic) UIView *secondaryMaterialOverlayView; // @synthesize secondaryMaterialOverlayView=_secondaryMaterialOverlayView;
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(readonly, nonatomic) AVStackView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *targetViewForSecondaryMaterialOverlay; // @synthesize targetViewForSecondaryMaterialOverlay=_targetViewForSecondaryMaterialOverlay;
@property(nonatomic) _Bool drawsAsCircle; // @synthesize drawsAsCircle=_drawsAsCircle;
@property(readonly, nonatomic) long long axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (void)_ensureContentView;
- (void)layoutSubviews;
- (void)updateConstraints;
@property(nonatomic) struct UIEdgeInsets contentLayoutMargins;
- (void)setCustomSpacing:(double)arg1 afterViews:(id)arg2;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)setArrangedSubviews:(id)arg1 axis:(long long)arg2;
- (id)initWithArrangedSubviews:(id)arg1;

@end

