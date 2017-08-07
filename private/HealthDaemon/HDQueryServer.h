//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HKQueryServerInterface-Protocol.h>

@class HDProfile, HDXPCClient, HKObjectType, HKQuantityType, HKQueryServerConfiguration, HKSampleType, NSDictionary, NSString, NSUUID, _HKFilter;
@protocol HDQueryServerDelegate, HKQueryClientInterface><NSXPCProxyCreating, OS_dispatch_queue;

@interface HDQueryServer : NSObject <HDDatabaseProtectedDataObserver, HKQueryServerInterface, HDDataObserver>
{
    _Bool _didEndActivationTransaction;
    _Bool _observingData;
    NSDictionary *_baseDataEntityEncodingOptions;
    HKQueryServerConfiguration *_configuration;
    CDUnknownBlockType _queryDidFinishHandler;
    int _shouldFinish;
    int _shouldPause;
    NSObject<OS_dispatch_queue> *_unitTestQueryQueue;
    NSUUID *_queryUUID;
    _HKFilter *_filter;
    id <HKQueryClientInterface><NSXPCProxyCreating> _clientProxy;
    HDXPCClient *_client;
    HDProfile *_profile;
    id <HDQueryServerDelegate> _delegate;
    long long _queryState;
    double _collectionInterval;
    HKObjectType *_objectType;
    CDUnknownBlockType _unitTest_queryServerSetShouldPauseHandler;
    CDUnknownBlockType _unitTest_queryServerWillChangeStateHandler;
    NSObject<OS_dispatch_queue> *_queryQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(copy, nonatomic) CDUnknownBlockType unitTest_queryServerWillChangeStateHandler; // @synthesize unitTest_queryServerWillChangeStateHandler=_unitTest_queryServerWillChangeStateHandler;
@property(copy, nonatomic) CDUnknownBlockType unitTest_queryServerSetShouldPauseHandler; // @synthesize unitTest_queryServerSetShouldPauseHandler=_unitTest_queryServerSetShouldPauseHandler;
@property(readonly, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
@property(nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property(readonly, nonatomic) long long queryState; // @synthesize queryState=_queryState;
@property(readonly, nonatomic) __weak id <HDQueryServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HDXPCClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) id <HKQueryClientInterface><NSXPCProxyCreating> clientProxy; // @synthesize clientProxy=_clientProxy;
@property(readonly, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property(readonly, copy, nonatomic) NSUUID *queryUUID; // @synthesize queryUUID=_queryUUID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)_queryStateString;
- (id)diagnosticDescription;
- (id)_predicateString;
- (void)_currentWorkoutDidChange:(id)arg1;
- (id)_collectionObserverState;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (_Bool)_queue_validateConfiguration:(id *)arg1;
- (void)_queue_endObservingDataTypes;
- (void)_queue_beginObservingDataTypes;
- (void)_queue_stop;
- (void)_queue_start;
- (_Bool)_shouldObserveOnPause;
- (_Bool)_shouldObserveAllSampleTypes;
- (id)_sampleTypeToObserveForUpdates;
- (_Bool)_shouldListenForUpdates;
- (id)requiredEntitlements;
- (id)newDataEntityEnumerator;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id *)arg2;
- (CDUnknownBlockType)sampleAuthorizationFilter;
- (void)onQueue:(CDUnknownBlockType)arg1;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) _Bool clientHasActiveWorkout;
@property(readonly) _Bool clientIsInForeground;
- (void)setShouldPause:(_Bool)arg1;
@property(readonly, nonatomic) HKQuantityType *quantityType;
@property(readonly, nonatomic) HKSampleType *sampleType;
- (void)remote_deactivateServer;
- (void)clientStateChanged;
- (void)_queue_stopDataCollection;
- (void)_queue_startDataCollection;
- (void)_queue_setQueryState:(long long)arg1;
- (void)_queue_transitionToSuspendedState:(long long)arg1;
- (void)_queue_transitionToPaused;
- (void)_queue_transitionToFinished;
- (void)_queue_transitionToRunning;
- (_Bool)_shouldSuspendQuery;
- (_Bool)_shouldStopProcessingQuery;
- (void)resumeServer;
- (void)_pauseServerValidate:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pauseServerValidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseServer;
- (void)deactivateServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_startQueryIfNecessary;
- (void)_scheduleStartQuery;
- (void)_queue_closeActivationTransactionIfNecessary;
- (void)setQueryDidFinishHandler:(CDUnknownBlockType)arg1;
- (void)activateServerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_activationTransactionString;
- (void)dealloc;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)filteredSamplesForClientWithSamples:(id)arg1;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

