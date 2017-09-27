//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUPowerSource, CUPowerSourceMonitor, NSMutableDictionary, NSObject<OS_dispatch_queue>, SBUISound;

@interface SFChargingCenterClient : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _visualInformationRequestHandler;
    CDUnknownBlockType _requestHandler;
    SBUISound *_chimeSound;
    CUPowerSourceMonitor *_monitor;
    NSMutableDictionary *_powerSourcesInUI;
    CUPowerSource *_mePowerSource;
}

+ (id)keyPathsForValuesAffectingNumberOfDevicesCharging;
+ (id)keyPathsForValuesAffectingChargeLevel;
+ (id)keyPathsForValuesAffectingCharging;
@property(retain, nonatomic) CUPowerSource *mePowerSource; // @synthesize mePowerSource=_mePowerSource;
@property(retain, nonatomic) NSMutableDictionary *powerSourcesInUI; // @synthesize powerSourcesInUI=_powerSourcesInUI;
@property(retain, nonatomic) CUPowerSourceMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) SBUISound *chimeSound; // @synthesize chimeSound=_chimeSound;
@property(copy, nonatomic) CDUnknownBlockType requestHandler; // @synthesize requestHandler=_requestHandler;
@property(copy, nonatomic) CDUnknownBlockType visualInformationRequestHandler; // @synthesize visualInformationRequestHandler=_visualInformationRequestHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (id)dataRepresentationForInformationProvider:(id)arg1;
- (void)updateConfigurationContext:(id)arg1 withInformationProvider:(id)arg2;
- (void)updateConfigurationContext:(id)arg1 withKeyPowerSource:(id)arg2;
- (void)updateConfigurationContextWithAnyPowerSourceAsKey:(id)arg1;
- (void)updateConfigurationContextWithPowerSourcesData:(id)arg1;
- (void)playChime;
- (void)contextsForRemoteAlertActivationWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendPresentationRequestForPowerSource:(id)arg1 added:(_Bool)arg2 removed:(_Bool)arg3;
- (void)presentationRequestContextsForReason:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)removeNoLongerChargingPowerSource:(id)arg1 withChargingDate:(id)arg2;
- (void)addNewChargingPowerSource:(id)arg1;
- (void)evaluatePowerSource:(id)arg1 found:(_Bool)arg2 lost:(_Bool)arg3;
@property(readonly, nonatomic) long long numberOfDevicesCharging;
@property(readonly, nonatomic) double chargeLevel;
@property(readonly, nonatomic, getter=isCharging) _Bool charging;
- (void)onqueue_invalidate;
- (void)invalidate;
- (void)onqueue_activate;
- (void)activate;
- (void)dealloc;
- (void)setUpMonitor;
- (id)init;

@end

