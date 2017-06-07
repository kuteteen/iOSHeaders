//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInteractionProgress.h>

#import <UIKit/_UIForceLevelClassifierDelegate-Protocol.h>

@class NSObservation, NSString, _UIForceLevelClassifier, _UITouchForceObservable;

@interface UIPreviewForceInteractionProgress : UIInteractionProgress <_UIForceLevelClassifierDelegate>
{
    _UITouchForceObservable *_observable;
    long long _targetState;
    long long _minimumState;
    _Bool _updateMinimumStateWithTargetState;
    _UIForceLevelClassifier *_classifier;
    NSObservation *_classifierObservation;
    _Bool _enteredMinimumState;
    _Bool _didEnd;
    NSObservation *_progressObservation;
    NSObservation *_targetStateUpdateObservation;
    NSObservation *_gestureBeganObservation;
    _Bool _completesAtTargetState;
}

@property(nonatomic) _Bool completesAtTargetState; // @synthesize completesAtTargetState=_completesAtTargetState;
@property(nonatomic, setter=_setTargetState:) long long _targetState; // @synthesize _targetState;
- (void).cxx_destruct;
@property(nonatomic, setter=_setClassifierShouldRespectSystemGestureTouchFiltering:) _Bool _classifierShouldRespectSystemGestureTouchFiltering;
- (void)_forceLevelClassifierDidReset:(id)arg1;
- (void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2;
- (void)_gestureRecognizerBegan:(_Bool)arg1;
- (void)_installProgressObserver;
- (_Bool)enteredMinimumState;
- (_Bool)didEnd;
- (id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(_Bool)arg4;
- (id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3;
- (id)_initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(_Bool)arg4;
- (id)initWithGestureRecognizer:(id)arg1 minimumRequiredState:(long long)arg2;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3;
- (id)initWithView:(id)arg1 targetState:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

