//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_HKXPCExportable.h"

@class HKPluginProxyProvider, NSObject<OS_dispatch_queue>, NSString;

@interface ASClient : NSObject <_HKXPCExportable>
{
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <ASServerInterface> _serverProxy;
    HKPluginProxyProvider *_pluginProxyProvider;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)_clientQueueSuccessCompletion:(CDUnknownBlockType)arg1;
- (void)_remoteProxy:(CDUnknownBlockType)arg1;
- (void)consolidateRelationshipEventsForFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)clearFriendListWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudKitAccountStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushFakeActivityDataToAllFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushActivityDataToAllFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMuteEnabled:(_Bool)arg1 forFriendWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setActivityDataVisible:(_Bool)arg1 toFriendWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

