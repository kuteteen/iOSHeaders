//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDBaseClient.h>

#import "ASDJobManagerClient.h"
#import "NSXPCListenerDelegate.h"

@class ASDJobManagerOptions, NSArray, NSHashTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface ASDJobManager : ASDBaseClient <ASDJobManagerClient, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    NSArray *_jobs;
    int _launchNotificationToken;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    ASDJobManagerOptions *_options;
    NSMutableSet *_removedJobs;
    _Bool _useLaunchServicesProgress;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

- (void).cxx_destruct;
- (void)_willFinishJobs:(id)arg1;
- (void)_updateActiveIDs:(id)arg1;
- (_Bool)_shouldAutomaticallyReconnect;
- (void)_setupConnection;
- (void)_sendStatesUpdated:(id)arg1;
- (void)_sendProgressUpdated:(id)arg1;
- (void)_sendJobsCompleted:(id)arg1;
- (void)_sendJobsChanged:(id)arg1;
- (void)_registerManagerWithOptions:(id)arg1;
- (id)_mapAllJobsToIDs;
- (void)_invalidate;
- (void)_handleInvalidatedConnection:(id)arg1;
- (void)_handleInterruptedConnection:(id)arg1;
- (void)_getJobsWithIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_getJobsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_finishJobsWithIDs:(id)arg1;
- (void)_connectToDaemon;
- (void)_applyUpdates:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)didUpdateStates:(id)arg1;
- (void)didUpdateProgress:(id)arg1;
- (void)didCompleteJobs:(id)arg1 finalPhases:(id)arg2;
- (void)didCompleteJobs:(id)arg1;
- (void)didChangeJobs:(id)arg1;
- (void)resumeJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)pauseJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)getJobsWithIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getJobsUsingBlock:(CDUnknownBlockType)arg1;
- (void)finishJobs:(id)arg1;
- (void)cancelJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

