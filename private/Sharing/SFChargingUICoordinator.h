//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Sharing/SFXPCClient.h>

@class NSDate, NSObject<OS_dispatch_source>;

@interface SFChargingUICoordinator : SFXPCClient
{
    NSDate *_syncMaxDate;
    NSDate *_syncRequestDate;
    NSObject<OS_dispatch_source> *_syncTimer;
    CDUnknownBlockType _syncUIHandler;
    long long _defaultDuration;
}

@property(nonatomic) long long defaultDuration; // @synthesize defaultDuration=_defaultDuration;
- (void).cxx_destruct;
- (void)onqueue_connectionInvalidated;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionEstablished;
- (_Bool)shouldEscapeXpcTryCatch;
- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)machServiceName;
- (void)sendUICoordinationDate:(id)arg1;
- (void)_requestToDismissUIHandler:(CDUnknownBlockType)arg1;
- (void)requestToDismissUIHandler:(CDUnknownBlockType)arg1;
- (void)_sendUISyncDate:(id)arg1;
- (void)sendUISyncDateDirect:(id)arg1;
- (void)sendUISyncDate:(id)arg1;
- (void)_syncTimerInvalidateSync;
- (void)_syncTimerRestartSyncWithTimeout:(double)arg1;
- (void)_syncHandleShowUIDate:(id)arg1;
- (void)_requestToShowUIWithHandler:(CDUnknownBlockType)arg1;
- (void)requestToShowUIWithHandler:(CDUnknownBlockType)arg1;

@end

