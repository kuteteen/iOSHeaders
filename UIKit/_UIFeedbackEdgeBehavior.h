//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFeedbackGenerator.h>

#import <UIKit/UIFeedbackGeneratorUserInteractionDriven-Protocol.h>

@class _UIFeedback, _UIFeedbackEdgeBehaviorConfiguration, _UIFeedbackEngine;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIFeedbackEdgeBehavior : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
{
    _UIFeedbackEngine *_feedbackEngine;
    _Bool _playedOvershotThresholdFeedback;
    _Bool _closeToEdge;
    double _distance;
    long long _axis;
    double _extentBeyondDistance;
    double _closeToEdgeUpdateTime;
    double _value;
    double _previousValue;
    long long _lastState;
    double _lastValueUpdateTime;
    double _previousValueUpdateTime;
    double _velocity;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
    long long _state;
}

+ (id)edgeBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2;
+ (id)behaviorWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
+ (id)edgeBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
+ (Class)_configurationClass;
@property(nonatomic, getter=_state, setter=_setState:) long long state; // @synthesize state=_state;
@property(retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // @synthesize playingContinuousFeedback=_playingContinuousFeedback;
@property(nonatomic, getter=_velocity, setter=_setVelocity:) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic, getter=_previousValueUpdateTime, setter=_setPreviousValueUpdateTime:) double previousValueUpdateTime; // @synthesize previousValueUpdateTime=_previousValueUpdateTime;
@property(nonatomic, getter=_lastValueUpdateTime, setter=_setLastValueUpdateTime:) double lastValueUpdateTime; // @synthesize lastValueUpdateTime=_lastValueUpdateTime;
@property(nonatomic, getter=_lastState, setter=_setLastState:) long long lastState; // @synthesize lastState=_lastState;
@property(nonatomic, getter=_previousValue, setter=_setPreviousValue:) double previousValue; // @synthesize previousValue=_previousValue;
@property(nonatomic, getter=_value, setter=_setValue:) double value; // @synthesize value=_value;
@property(nonatomic, getter=_closeToEdgeUpdateTime, setter=_setCloseToEdgeUpdateTime:) double closeToEdgeUpdateTime; // @synthesize closeToEdgeUpdateTime=_closeToEdgeUpdateTime;
@property(nonatomic, getter=_isCloseToEdge, setter=_setCloseToEdge:) _Bool closeToEdge; // @synthesize closeToEdge=_closeToEdge;
@property(nonatomic) double extentBeyondDistance; // @synthesize extentBeyondDistance=_extentBeyondDistance;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (void).cxx_destruct;
- (id)_stats_key;
- (void)_positionUpdated:(double)arg1 withVelocity:(double)arg2;
- (void)positionUpdated:(double)arg1;
@property(readonly, nonatomic, getter=_percentBeyondDistance) float percentBeyondDistance;
@property(readonly, nonatomic, getter=_isOvershot) _Bool overshot;
- (_Bool)_valueIsOvershot:(double)arg1;
@property(readonly, nonatomic, getter=_effectiveDistance) double effectiveDistance;
- (void)_updateCloseToEdge;
- (void)_animationEnded;
- (void)_animationStartedUsingTimeout:(_Bool)arg1;
- (void)_animationStarted;
- (void)_deactivate;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;
- (void)_cancelStopAnimatingTimeout;
- (void)_stopAnimatingWithTimeout:(double)arg1;
@property(readonly, nonatomic, getter=_edgeConfiguration) _UIFeedbackEdgeBehaviorConfiguration *edgeConfiguration;

@end

