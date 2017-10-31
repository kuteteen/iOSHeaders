//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFMessageReceiver.h"

@class HMDAppleMediaAccessory, HMDHomeManager, NSHashTable, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDSoftwareUpdateManager : HMFObject <HMFMessageReceiver>
{
    HMDAppleMediaAccessory *_accessory;
    HMDHomeManager *_homeManager;
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSHashTable *_activeClients;
}

+ (_Bool)isSupported;
@property(readonly, nonatomic) NSHashTable *activeClients; // @synthesize activeClients=_activeClients;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)startUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAvailableUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateAvailableUpdate:(id)arg1;
- (void)_handleUpdateAvailableUpdate:(id)arg1;
- (void)_handleStop:(id)arg1;
- (void)_handleStart:(id)arg1;
- (_Bool)_shouldAcceptMessage:(id)arg1;
- (void)registerForMessages;
- (id)initWithHomeManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

