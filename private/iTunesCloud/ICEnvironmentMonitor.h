//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, NWPathEvaluator;

@interface ICEnvironmentMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_observers;
    struct __CTServerConnection *_telephonyServerConnectionRef;
    NWPathEvaluator *_networkPathEvaluator;
    _Bool _isCharging;
    _Bool _isRemoteServerLikelyReachable;
    _Bool _isWiFiActive;
    _Bool _currentNetworkLinkHighQuality;
    NSString *_telephonyOperatorName;
    NSString *_telephonyRegistrationStatus;
    NSString *_telephonyStatusIndicator;
    long long _networkType;
    long long _lastKnownNetworkType;
}

+ (id)sharedMonitor;
@property(readonly, nonatomic) long long lastKnownNetworkType; // @synthesize lastKnownNetworkType=_lastKnownNetworkType;
@property(readonly, nonatomic) long long networkType; // @synthesize networkType=_networkType;
@property(readonly, nonatomic, getter=isCurrentNetworkLinkHighQuality) _Bool currentNetworkLinkHighQuality; // @synthesize currentNetworkLinkHighQuality=_currentNetworkLinkHighQuality;
@property(readonly, nonatomic, getter=isWiFiActive) _Bool wiFiActive; // @synthesize wiFiActive=_isWiFiActive;
@property(readonly, copy, nonatomic) NSString *telephonyStatusIndicator; // @synthesize telephonyStatusIndicator=_telephonyStatusIndicator;
@property(readonly, copy, nonatomic) NSString *telephonyRegistrationStatus; // @synthesize telephonyRegistrationStatus=_telephonyRegistrationStatus;
@property(readonly, copy, nonatomic) NSString *telephonyOperatorName; // @synthesize telephonyOperatorName=_telephonyOperatorName;
@property(readonly, nonatomic, getter=isRemoteServerLikelyReachable) _Bool remoteServerLikelyReachable; // @synthesize remoteServerLikelyReachable=_isRemoteServerLikelyReachable;
@property(readonly, nonatomic, getter=isCharging) _Bool charging; // @synthesize charging=_isCharging;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handleCTServerConnectionNotification:(id)arg1 userInfo:(id)arg2;
- (void)_handleApplicationDidEnterForegroundNotification:(id)arg1;
- (void)_onQueue_updateTelephonyStateAndNotifyObservers:(_Bool)arg1;
- (long long)_networkTypeFromTelephonyStatusIndicator:(id)arg1;
- (long long)_currentNetworkType;
- (void)_onQueue_updateNetworkReachabilityAndNotifyObservers:(_Bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

