//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PCInterfaceMonitorDelegate.h"

@class CUTWeakReference, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSRunLoop, NSString, PCPersistentTimer;

@interface PCConnectionManager : NSObject <PCInterfaceMonitorDelegate>
{
    int _connectionClass;
    id <PCConnectionManagerDelegate> _delegate;
    NSString *_serviceIdentifier;
    NSString *_duetIdentifier;
    int _prefsStyle;
    int _onlyAllowedStyle;
    _Bool _onlyAllowedStyleSet;
    long long _interfaceIdentifier;
    unsigned long long _guidancePriority;
    NSRunLoop *_delegateRunLoop;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_log> *_logObject;
    id <PCGrowthAlgorithm> _wwanGrowthAlgorithm;
    id <PCGrowthAlgorithm> _wifiGrowthAlgorithm;
    id <PCGrowthAlgorithm> _lastScheduledGrowthAlgorithm;
    PCPersistentTimer *_intervalTimer;
    PCPersistentTimer *_reconnectWakeTimer;
    PCPersistentTimer *_delayTimer;
    unsigned int _powerAssertionID;
    double _onTimeKeepAliveTime;
    double _lastResumeTime;
    double _lastStopTime;
    double _lastStartTime;
    double _lastReachableTime;
    double _lastReconnectTime;
    double _lastScheduledIntervalTime;
    double _timerGuidance;
    double _keepAliveGracePeriod;
    double _lastElapsedInterval;
    _Bool _minimumIntervalFallbackEnabled;
    _Bool _operatorMinimumIntervalFallbackAllowed;
    unsigned int _reconnectIteration;
    int _timerGuidanceToken;
    int _pushIsConnectedToken;
    int _prefsChangedToken;
    double _defaultPollingInterval;
    double _pollingIntervalOverride;
    _Bool _pollingIntervalOverrideSet;
    _Bool _hasStarted;
    _Bool _isRunning;
    _Bool _inCallback;
    _Bool _isInReconnectMode;
    _Bool _reconnectWithKeepAliveDelay;
    _Bool _forceManualWhenRoaming;
    _Bool _enableNonCellularConnections;
    _Bool _isReachable;
    _Bool _disableEarlyFire;
    _Bool _alwaysWantsInterfaceChangeCallbacks;
    int _lastProcessedAction;
    _Bool _deviceUnderGoodCondition;
    int _currentGrowthStage;
    id _duetContextRegistration;
    _Bool _powerOptimizationsForExpensiveNetworkingDisabled;
    CUTWeakReference *_weakConnectionManager;
    double _nonCellularEarlyFireConstantInterval;
}

+ (_Bool)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2;
+ (id)_keepAliveCachePath;
+ (id)intervalCacheDictionaries;
+ (Class)growthAlgorithmClass;
@property(nonatomic) _Bool powerOptimizationsForExpensiveNetworkingDisabled; // @synthesize powerOptimizationsForExpensiveNetworkingDisabled=_powerOptimizationsForExpensiveNetworkingDisabled;
@property(nonatomic) _Bool alwaysWantsInterfaceChangeCallbacks; // @synthesize alwaysWantsInterfaceChangeCallbacks=_alwaysWantsInterfaceChangeCallbacks;
@property(nonatomic) double nonCellularEarlyFireConstantInterval; // @synthesize nonCellularEarlyFireConstantInterval=_nonCellularEarlyFireConstantInterval;
@property(readonly, nonatomic) int lastProcessedAction; // @synthesize lastProcessedAction=_lastProcessedAction;
@property(nonatomic) long long interfaceIdentifier; // @synthesize interfaceIdentifier=_interfaceIdentifier;
@property(nonatomic) double keepAliveGracePeriod; // @synthesize keepAliveGracePeriod=_keepAliveGracePeriod;
- (void).cxx_destruct;
- (id)_stringForEvent:(int)arg1;
- (id)_stringForAction:(int)arg1;
- (id)_stringForStyle:(int)arg1;
- (id)_getCachedWWANKeepAliveInterval;
- (void)_saveWWANKeepAliveInterval;
- (void)_releasePowerAssertion;
- (void)_takePowerAssertionWithTimeout:(double)arg1;
- (id)persistentInterfaceManager;
- (void)_adjustInterfaceAssertions;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerInHomeCountryStatusChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)_setTimerGuidance:(double)arg1;
- (void)_pauseTimers;
- (void)_clearTimersReleasingPowerAssertion:(_Bool)arg1;
- (void)_clearTimers;
- (void)_calloutWithEvent:(int)arg1 context:(id)arg2;
- (void)_callDelegateWithEventAndContext:(id)arg1;
- (void)_delayTimerFired;
- (void)_intervalTimerFired;
- (_Bool)_hasBudgetRemaining;
- (void)_setupKeepAliveForReconnect;
- (void)_setupTimerForPollForAdjustment:(_Bool)arg1;
- (void)_adjustPollTimerIfNecessary;
- (void)_setupTimerForPushWithKeepAliveInterval:(double)arg1;
- (void)_adjustMinimumIntervalFallback;
- (void)setOperatorMinimumIntervalFallbackAllowed:(_Bool)arg1;
- (_Bool)operatorMinimumIntervalFallbackAllowed;
@property(nonatomic) _Bool minimumIntervalFallbackEnabled; // @synthesize minimumIntervalFallbackEnabled=_minimumIntervalFallbackEnabled;
@property(nonatomic) _Bool disableEarlyFire;
- (void)setEnableNonCellularConnections:(_Bool)arg1;
- (_Bool)shouldClientScheduleReconnectDueToFailure;
- (void)cancelPollingIntervalOverride;
- (void)setPollingIntervalOverride:(double)arg1;
@property(readonly, nonatomic) double pollingInterval;
- (_Bool)_isPushConnected;
- (void)_setMaximumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2;
@property double maximumKeepAliveInterval;
@property(nonatomic) double minimumKeepAliveInterval;
@property(readonly, nonatomic) double currentKeepAliveInterval;
@property(readonly, nonatomic) unsigned long long countOfGrowthActions;
@property(readonly, nonatomic) _Bool isRunning;
- (void)stopAndResetManager;
- (void)stopManager;
- (void)_resolveStateWithAction:(int)arg1;
- (void)_validateActionForCurrentStyle:(int)arg1;
- (void)resumeManagerWithAction:(int)arg1 forceGrow:(_Bool)arg2;
- (void)resumeManagerWithAction:(int)arg1;
- (void)startManager;
@property(readonly, nonatomic) int currentGrowthStage;
- (id)_currentGrowthAlgorithm;
- (id)_growthAlgorithmOnInterface:(long long)arg1;
- (void)setOnlyAllowedStyle:(int)arg1;
- (int)currentStyle;
- (void)_processDeviceConditionChanges;
- (void)_handleDeviceConditionChangeCallback;
- (void)_deregisterForDeviceConditionsNotifications;
- (void)_registerForDeviceConditionsNotifications;
- (void)_loadPreferencesGeneratingEvent:(_Bool)arg1;
- (void)_preferencesChanged;
- (void)dealloc;
@property(copy, nonatomic) NSString *duetIdentifier;
@property(nonatomic) __weak id <PCConnectionManagerDelegate> delegate;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3;
- (id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 serviceIdentifier:(id)arg4;
- (id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 serviceIdentifier:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

