//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, _UIFeedbackGeneratorConfiguration;
@protocol OS_dispatch_source, UICoordinateSpace;

@interface UIFeedbackGenerator : NSObject
{
    long long _styleActivationCount[3];
    long long _autoDeactivationCount[3];
    NSObject<OS_dispatch_source> *_autoDeactivateTimer;
    NSMutableDictionary *_preparationTimers;
    CDUnknownBlockType _feedbackWarmingBlock;
    double _currentDelay;
    NSSet *_usedFeedbacks;
    _Bool _hasMutableFeedbackKeyPaths;
    long long _activationCount;
    long long _externalActivationCount;
    id <UICoordinateSpace> _coordinateSpace;
    _UIFeedbackGeneratorConfiguration *_configuration;
    NSSet *_engines;
}

+ (id)_defaultCoordinateSpace;
+ (Class)_configurationClass;
+ (void)_setRunningTests:(_Bool)arg1;
+ (void)_resetPreparationTimeouts;
+ (void)_setPreparationTimeout:(double)arg1 forStyle:(long long)arg2;
+ (void)_resetAutoDeactivateTimeout;
+ (void)_setAutoDeactivateTimeout:(double)arg1;
+ (id)behaviorWithCoordinateSpace:(id)arg1;
+ (id)behaviorWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
@property(readonly, nonatomic, getter=_hasMutableFeedbackKeyPaths) _Bool hasMutableFeedbackKeyPaths; // @synthesize hasMutableFeedbackKeyPaths=_hasMutableFeedbackKeyPaths;
@property(readonly, nonatomic) NSSet *engines; // @synthesize engines=_engines;
@property(retain, nonatomic, getter=_configuration, setter=_setConfiguration:) _UIFeedbackGeneratorConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(nonatomic) long long externalActivationCount; // @synthesize externalActivationCount=_externalActivationCount;
@property(nonatomic) long long activationCount; // @synthesize activationCount=_activationCount;
- (void).cxx_destruct;
- (long long)_outputMode;
- (void)_setOutputMode:(long long)arg1;
@property(readonly, nonatomic) NSString *_stats_key;
- (void)_playFeedback:(id)arg1 withMinimumIntervalPassed:(double)arg2 since:(double *)arg3 prefersRegularPace:(_Bool)arg4;
- (void)_playFeedback:(id)arg1;
- (void)performFeedbackWithDelay:(double)arg1 insideBlock:(CDUnknownBlockType)arg2;
- (void)_clientDidUpdateGeneratorWithSelector:(SEL)arg1;
- (void)_autoDeactivate;
- (void)_stopAutoDeactivateTimer;
- (void)_resetAutoDeactivationTimeout;
- (void)_setupAutoDeactivateTimer;
@property(readonly, nonatomic, getter=_autoDeactivationTimeout) double autoDeactivationTimeout;
- (void)_forceDeactivationForStyle:(long long)arg1;
- (void)_deactivated;
- (void)__deactivateWithStyle:(long long)arg1;
- (void)_deactivateWithStyle:(long long)arg1;
- (void)deactivate;
- (void)_stopFeedbackWarming;
- (void)_startFeedbackWarming;
- (void)_scheduleFeedbackWarming;
- (void)_activated;
- (void)_setupEnginesIfNeeded;
- (void)__activateWithStyle:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_activateWithStyle:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)activateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setup;
- (double)_preparationTimeoutForStyle:(long long)arg1;
- (void)_stopPreparationForAllStyles;
- (void)_stopPreparationForStyle:(long long)arg1;
- (void)_updatePreparationTimer:(id)arg1 withTimeout:(double)arg2;
- (void)_prepareWithStyle:(long long)arg1;
- (void)_setPreparationTimer:(id)arg1 forStyle:(long long)arg2;
- (id)_preparationTimerForStyle:(long long)arg1;
- (void)prepare;
@property(readonly, nonatomic, getter=_isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=_isAutoDeactivated) _Bool autoDeactivated;
- (_Bool)isActive;
@property(readonly, nonatomic, getter=_effectiveCoordinateSpace) id <UICoordinateSpace> effectiveCoordinateSpace;
- (id)description;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
- (id)initWithCoordinateSpace:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
@property(nonatomic, getter=_isMuted, setter=_setMuted:) _Bool muted;
- (void)_stats_playedFeedback;
- (void)_stats_prepared;
- (void)_stats_activationTimedOut;
- (void)_stats_activationDidChangeTo:(_Bool)arg1;
- (id)_playCountStatistics;
- (id)_preparationCountStatistics;
- (id)_activationTimeOutCountStatistics;
- (id)_activationDurationStatistics;
- (id)_activationCountStatistics;
- (id)_statsSuffix;

@end

