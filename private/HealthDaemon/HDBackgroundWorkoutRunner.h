//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDProcessStateObserver.h"

@class BKSProcessAssertion, CLInUseAssertion, HDProfile, HDXPCClient, NSObject<OS_dispatch_queue>, NSString;

@interface HDBackgroundWorkoutRunner : NSObject <HDProcessStateObserver>
{
    HDXPCClient *_client;
    HDProfile *_profile;
    BKSProcessAssertion *_assertion;
    CLInUseAssertion *_coreLocationAssertion;
    _Bool _shouldAcquireCLAssertion;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_queue_releaseCLInUseAssertion;
- (void)_queue_releaseBackgroundRunningAssertion;
- (void)_queue_releaseAssertion;
- (void)_queue_acquireCLInUseAssertion;
- (void)_queue_acquireBackgroundRunningAssertion;
- (void)_queue_takeAssertion;
- (_Bool)_queue_hasBackgroundPermission;
- (void)processDidEnterForeground:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithServer:(id)arg1 profile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

