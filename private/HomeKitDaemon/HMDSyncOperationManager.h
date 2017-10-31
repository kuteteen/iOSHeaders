//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFTimerDelegate.h"

@class HMDHomeManager, HMDSyncOperationQueue, HMFExponentialBackoffTimer, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface HMDSyncOperationManager : HMFObject <HMFTimerDelegate>
{
    _Bool _pauseQueue;
    _Bool _syncLoopDialogDisplayed;
    HMDHomeManager *_homeManager;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMDSyncOperationQueue *_cloudPushOperations;
    NSMutableArray *_cloudVerifyAccountOperations;
    HMDSyncOperationQueue *_cloudFetchOperations;
    NSMutableArray *_cloudZonePushOperations;
    NSMutableDictionary *_cloudZonePushOperationsMap;
    NSMutableArray *_cloudZoneFetchOperations;
    NSMutableDictionary *_cloudZoneFetchOperationsMap;
    NSMutableArray *_cloudCancelPauseOperations;
    long long _pauseCloudPushLevel;
    HMFExponentialBackoffTimer *_cloudPushDelayTimer;
}

@property(nonatomic, getter=wasSyncLoopDialogDisplayed) _Bool syncLoopDialogDisplayed; // @synthesize syncLoopDialogDisplayed=_syncLoopDialogDisplayed;
@property(retain, nonatomic) HMFExponentialBackoffTimer *cloudPushDelayTimer; // @synthesize cloudPushDelayTimer=_cloudPushDelayTimer;
@property(nonatomic) long long pauseCloudPushLevel; // @synthesize pauseCloudPushLevel=_pauseCloudPushLevel;
@property(nonatomic) _Bool pauseQueue; // @synthesize pauseQueue=_pauseQueue;
@property(retain, nonatomic) NSMutableArray *cloudCancelPauseOperations; // @synthesize cloudCancelPauseOperations=_cloudCancelPauseOperations;
@property(retain, nonatomic) NSMutableDictionary *cloudZoneFetchOperationsMap; // @synthesize cloudZoneFetchOperationsMap=_cloudZoneFetchOperationsMap;
@property(retain, nonatomic) NSMutableArray *cloudZoneFetchOperations; // @synthesize cloudZoneFetchOperations=_cloudZoneFetchOperations;
@property(retain, nonatomic) NSMutableDictionary *cloudZonePushOperationsMap; // @synthesize cloudZonePushOperationsMap=_cloudZonePushOperationsMap;
@property(retain, nonatomic) NSMutableArray *cloudZonePushOperations; // @synthesize cloudZonePushOperations=_cloudZonePushOperations;
@property(retain, nonatomic) HMDSyncOperationQueue *cloudFetchOperations; // @synthesize cloudFetchOperations=_cloudFetchOperations;
@property(retain, nonatomic) NSMutableArray *cloudVerifyAccountOperations; // @synthesize cloudVerifyAccountOperations=_cloudVerifyAccountOperations;
@property(retain, nonatomic) HMDSyncOperationQueue *cloudPushOperations; // @synthesize cloudPushOperations=_cloudPushOperations;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)resetCloudPushTimer:(id)arg1;
- (void)killCloudPushAndResume;
- (void)resumeCloudPush;
- (void)pauseCloudPush;
- (void)kick;
- (void)resume;
- (void)pause;
- (void)_handleCancelledOperations:(id)arg1;
- (void)_handleNextOperation;
- (id)dequeueNextOperation;
- (void)cancelOperations;
- (long long)_cloudZoneFetchOperationsCountTotal;
- (long long)_cloudZonePushOperationsCountTotal;
- (void)pauseAndWaitForCurrentOperationCompletion:(CDUnknownBlockType)arg1;
- (void)addOperation:(id)arg1 withDelay:(double)arg2;
- (void)addOperation:(id)arg1;
- (void)_reportPossibleSyncLoop;
- (id)dumpState;
@property(readonly, copy) NSString *description;
- (id)initWithClientQueue:(id)arg1 homeManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

