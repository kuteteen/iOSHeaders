//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HUQuickControlControllableView.h"

@class HUQuickControlSliderValueOverlayView, HUQuickControlSliderViewProfile, NSLayoutConstraint, NSString;

@interface HUQuickControlSliderView : UIView <HUQuickControlControllableView>
{
    _Bool _showOffState;
    HUQuickControlSliderViewProfile *_profile;
    double _sliderValue;
    double _secondarySliderValue;
    double _rawSliderValue;
    UIView *_backgroundView;
    HUQuickControlSliderValueOverlayView *_valueOverlayView;
    NSLayoutConstraint *_overlayTopConstraint;
    NSLayoutConstraint *_aspectRatioConstraint;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint; // @synthesize aspectRatioConstraint=_aspectRatioConstraint;
@property(retain, nonatomic) NSLayoutConstraint *overlayTopConstraint; // @synthesize overlayTopConstraint=_overlayTopConstraint;
@property(retain, nonatomic) HUQuickControlSliderValueOverlayView *valueOverlayView; // @synthesize valueOverlayView=_valueOverlayView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double rawSliderValue; // @synthesize rawSliderValue=_rawSliderValue;
@property(nonatomic) _Bool showOffState; // @synthesize showOffState=_showOffState;
@property(nonatomic) double secondarySliderValue; // @synthesize secondarySliderValue=_secondarySliderValue;
@property(nonatomic) double sliderValue; // @synthesize sliderValue=_sliderValue;
@property(copy, nonatomic) HUQuickControlSliderViewProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
@property(retain, nonatomic) id secondaryValue;
@property(retain, nonatomic) id value;
- (void)_updateOffState;
- (void)layoutSubviews;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (CDStruct_c3b9c2ee)_permittedValueRange;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

