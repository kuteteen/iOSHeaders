//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUQuickControlViewController.h>

#import "HUQuickControlInteractionCoordinatorDelegate.h"

@class HFControlItem, HUQuickControlInteractionCoordinator, HUQuickControlViewProfile, NAValueThrottler, NSString, _HUQuickControlSingleControlHostView;

@interface HUQuickControlSingleControlViewController : HUQuickControlViewController <HUQuickControlInteractionCoordinatorDelegate>
{
    _Bool _writesInProgressOrPossible;
    _Bool _hasWrittenAnyNewValues;
    HUQuickControlInteractionCoordinator *_interactionCoordinator;
    id _modelValue;
    NAValueThrottler *_valueWriteThrottler;
    unsigned long long _inFlightWriteCount;
    HUQuickControlViewProfile *_viewProfile;
    double _verticalDirectionalControlStretchFactor;
    double _horizontalControlCompressionFactor;
}

+ (Class)controlItemClass;
+ (id)controlItemPredicate;
@property(nonatomic) double horizontalControlCompressionFactor; // @synthesize horizontalControlCompressionFactor=_horizontalControlCompressionFactor;
@property(nonatomic) double verticalDirectionalControlStretchFactor; // @synthesize verticalDirectionalControlStretchFactor=_verticalDirectionalControlStretchFactor;
@property(retain, nonatomic) HUQuickControlViewProfile *viewProfile; // @synthesize viewProfile=_viewProfile;
@property(nonatomic) _Bool hasWrittenAnyNewValues; // @synthesize hasWrittenAnyNewValues=_hasWrittenAnyNewValues;
@property(nonatomic) unsigned long long inFlightWriteCount; // @synthesize inFlightWriteCount=_inFlightWriteCount;
@property(readonly, nonatomic) NAValueThrottler *valueWriteThrottler; // @synthesize valueWriteThrottler=_valueWriteThrottler;
@property(nonatomic, getter=areWritesInProgressOrPossible) _Bool writesInProgressOrPossible; // @synthesize writesInProgressOrPossible=_writesInProgressOrPossible;
@property(readonly, nonatomic) id modelValue; // @synthesize modelValue=_modelValue;
@property(readonly, nonatomic) HUQuickControlInteractionCoordinator *interactionCoordinator; // @synthesize interactionCoordinator=_interactionCoordinator;
- (void).cxx_destruct;
- (void)interactionCoordinator:(id)arg1 updateControlVerticalStretchFactor:(double)arg2;
- (void)interactionCoordinator:(id)arg1 updateControlHorizontalCompressionFactor:(double)arg2;
- (void)hideAuxiliaryViewForInteractionCoordinator:(id)arg1;
- (void)interactionCoordinator:(id)arg1 showAuxiliaryView:(id)arg2;
- (void)interactionCoordinatorWantsDismissal:(id)arg1;
- (_Bool)hasModelValueChangedForInteractionCoordinator:(id)arg1;
- (void)interactionCoordinator:(id)arg1 interactionStateDidChange:(_Bool)arg2;
- (void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (void)modelValueDidChange;
- (id)overrideSecondaryStatusText;
- (id)overrideStatusText;
- (id)controlToViewValueTransformer;
- (id)createViewProfile;
- (id)createInteractionCoordinator;
- (void)viewDidLayoutSubviews;
- (void)_updateControlTransform;
- (void)_updateViewProfileForCurrentItemState;
- (void)_updateTitle;
- (void)_updateWriteState;
- (void)_writeModelControlValue:(id)arg1;
- (void)_updateValueFromControlItem;
- (void)_setModelValue:(id)arg1 writeValue:(_Bool)arg2;
- (void)invalidateViewProfile;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)isUserInteractionEnabled;
- (void)setControlSize:(unsigned long long)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)overrideValueForCharacteristic:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)setPreferredFrameLayoutGuide:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(readonly, nonatomic) HFControlItem *controlItem;
- (id)initWithControlItem:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) _HUQuickControlSingleControlHostView *view; // @dynamic view;

@end

