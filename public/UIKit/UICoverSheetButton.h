//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIClickInteractionDelegate.h"
#import "_UIInteractiveHighlighting.h"

@class NSArray, NSString, UIClickInteraction, UIColor, UIImage, UIImageView, UIView, UIVisualEffectView;

@interface UICoverSheetButton : UIControl <UIClickInteractionDelegate, _UIInteractiveHighlighting>
{
    UIView *_containerView;
    UIImageView *_contentView;
    UIVisualEffectView *_backgroundEffectView;
    NSArray *_backgroundEffects;
    NSArray *_selectedBackgroundEffects;
    UIView *_backgroundHighlightView;
    UIClickInteraction *_clickInteraction;
    _Bool _interactive;
    double _interactiveHighlightMagnitude;
    _Bool _didActivateDuringInteraction;
    double _maxForceDuringInteraction;
    _Bool _pronounced;
    _Bool _prefersDarkUserInterfaceStyle;
    UIImage *_image;
    UIImage *_selectedImage;
    UIColor *_selectedTintColor;
    NSString *_localizedAccessoryTitle;
    NSString *_statisticsIdentifier;
    struct UIEdgeInsets _edgeInsets;
}

@property(copy, nonatomic) NSString *statisticsIdentifier; // @synthesize statisticsIdentifier=_statisticsIdentifier;
@property(copy, nonatomic) NSString *localizedAccessoryTitle; // @synthesize localizedAccessoryTitle=_localizedAccessoryTitle;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) _Bool prefersDarkUserInterfaceStyle; // @synthesize prefersDarkUserInterfaceStyle=_prefersDarkUserInterfaceStyle;
@property(retain, nonatomic) UIColor *selectedTintColor; // @synthesize selectedTintColor=_selectedTintColor;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic, getter=isPronounced) _Bool pronounced; // @synthesize pronounced=_pronounced;
- (void).cxx_destruct;
- (id)_maxForceStatWithActivation:(_Bool)arg1;
- (id)_firstActivationDurationStat;
- (id)_interactionDurationStat;
- (id)_interactionCountStatWithActivation:(_Bool)arg1;
- (id)_backgroundEffectsWithBrightness:(double)arg1;
- (void)layoutIfNeededAnimated;
- (void)_highlightForInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(_Bool)arg3;
- (void)clickInteractionDidEnd:(id)arg1;
- (void)clickInteraction:(id)arg1 didObserveForce:(double)arg2;
- (_Bool)clickInteractionShouldInvokeAction:(id)arg1;
- (void)clickInteractionDidBegin:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic, getter=isLatching) _Bool latching;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

