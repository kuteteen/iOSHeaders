//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUQuickControlInteractionCoordinator.h>

#import "HUQuickControlSliderGestureTransformerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class HUDisplayLinkApplier, HUElasticApplier, HUQuickControlSliderGestureTransformer, HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile>, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface HUQuickControlElasticSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlSliderGestureTransformerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _userInteractionActive;
    _Bool _hasSecondaryValue;
    _Bool _firstTouchDown;
    HUQuickControlSliderGestureTransformer *_gestureTransformer;
    UILongPressGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    HUElasticApplier *_primaryValueSmoothingApplier;
    HUElasticApplier *_secondaryValueSmoothingApplier;
    HUDisplayLinkApplier *_controlVerticalStretchingApplier;
    HUElasticApplier *_controlHorizontalCompressionApplier;
    double _activeGestureValue;
    unsigned long long _activeGestureValueType;
    HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *_viewProfile;
    CDStruct_ef18196a _modelValue;
}

@property(nonatomic, getter=isFirstTouchDown) _Bool firstTouchDown; // @synthesize firstTouchDown=_firstTouchDown;
@property(retain, nonatomic) HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *viewProfile; // @synthesize viewProfile=_viewProfile;
@property(nonatomic) CDStruct_c3b9c2ee modelValue; // @synthesize modelValue=_modelValue;
@property(nonatomic) unsigned long long activeGestureValueType; // @synthesize activeGestureValueType=_activeGestureValueType;
@property(nonatomic) double activeGestureValue; // @synthesize activeGestureValue=_activeGestureValue;
@property(retain, nonatomic) HUElasticApplier *controlHorizontalCompressionApplier; // @synthesize controlHorizontalCompressionApplier=_controlHorizontalCompressionApplier;
@property(retain, nonatomic) HUDisplayLinkApplier *controlVerticalStretchingApplier; // @synthesize controlVerticalStretchingApplier=_controlVerticalStretchingApplier;
@property(retain, nonatomic) HUElasticApplier *secondaryValueSmoothingApplier; // @synthesize secondaryValueSmoothingApplier=_secondaryValueSmoothingApplier;
@property(retain, nonatomic) HUElasticApplier *primaryValueSmoothingApplier; // @synthesize primaryValueSmoothingApplier=_primaryValueSmoothingApplier;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) HUQuickControlSliderGestureTransformer *gestureTransformer; // @synthesize gestureTransformer=_gestureTransformer;
@property(nonatomic) _Bool hasSecondaryValue; // @synthesize hasSecondaryValue=_hasSecondaryValue;
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)gestureDidEndForGestureTransformer:(id)arg1;
- (void)gestureTransformer:(id)arg1 sliderValueDidChange:(double)arg2;
- (void)_updatePropertiesForControlValueSmoothingApplier:(id)arg1 ofType:(unsigned long long)arg2;
- (void)_setupStretchingAppliers;
- (id)_setupValueApplierForValueType:(unsigned long long)arg1;
- (void)_setupAllValueAppliersIfNecessary;
- (id)_allAppliers;
- (double)_rubberBandedStretchProgress;
- (double)_boundedValueForValue:(double)arg1 valueType:(unsigned long long)arg2 rubberBand:(_Bool)arg3;
- (double)_rubberBandedValueForValue:(double)arg1 valueType:(unsigned long long)arg2;
- (CDStruct_c3b9c2ee)_boundedRangeForRange:(CDStruct_c3b9c2ee)arg1;
- (unsigned long long)_findClosestValueFromTouchLocation:(struct CGPoint)arg1;
- (double)_sliderValueForLocation:(struct CGPoint)arg1;
- (double)_roundedValueForValue:(double)arg1;
- (CDStruct_c3b9c2ee)_roundedRangeForRange:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)_clippedRangeForRange:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)_rawViewValueRange;
- (void)_beginReceivingTouchesWithGestureRecognizer:(id)arg1 firstTouchDown:(_Bool)arg2;
- (void)_handleControlTapGesture:(id)arg1;
- (void)_handleControlPanGesture:(id)arg1;
- (void)_updateModelValue:(CDStruct_c3b9c2ee)arg1 notifyDelegate:(_Bool)arg2;
- (void)_updateControlViewSecondaryValue:(double)arg1;
- (void)_updateControlViewPrimaryValue:(double)arg1;
- (void)_updateControlViewValueOfType:(unsigned long long)arg1 withValue:(double)arg2;
- (void)setViewVisible:(_Bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

