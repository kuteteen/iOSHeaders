//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDHomeMessageReceiver.h"
#import "HMFDumpState.h"
#import "HMFLogging.h"
#import "HMFTimerDelegate.h"
#import "NSSecureCoding.h"

@class HMDMediaEndpoint, HMDMediaSessionState, HMFMessageDispatcher, HMFTimer, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDMediaSession : HMFObject <HMFTimerDelegate, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding>
{
    HMFMessageDispatcher *_msgDispatcher;
    NSMutableSet *_mediaProfiles;
    _Bool _connecting;
    _Bool _currentAccessorySession;
    NSString *_sessionIdentifier;
    HMDMediaEndpoint *_endpoint;
    HMDMediaSessionState *_state;
    NSString *_logID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid;
    NSMutableArray *_pendingBlocks;
    NSMutableArray *_setPlaybackStateCompletionHandlers;
    HMFTimer *_setPlaybackStateTimer;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)sessionForCurrentAccessory:(id)arg1;
@property(retain, nonatomic) HMFTimer *setPlaybackStateTimer; // @synthesize setPlaybackStateTimer=_setPlaybackStateTimer;
@property(retain, nonatomic) NSMutableArray *setPlaybackStateCompletionHandlers; // @synthesize setPlaybackStateCompletionHandlers=_setPlaybackStateCompletionHandlers;
@property(retain, nonatomic) NSMutableArray *pendingBlocks; // @synthesize pendingBlocks=_pendingBlocks;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(nonatomic, getter=isCurrentAccessorySession) _Bool currentAccessorySession; // @synthesize currentAccessorySession=_currentAccessorySession;
@property(nonatomic, getter=isConnecting) _Bool connecting; // @synthesize connecting=_connecting;
@property(retain, nonatomic) HMDMediaSessionState *state; // @synthesize state=_state;
@property(retain, nonatomic) HMDMediaEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMediaProfile:(id)arg1;
- (void)addMediaProfile:(id)arg1;
@property(readonly, nonatomic) NSSet *mediaProfiles;
- (void)updateEndpoint:(id)arg1;
- (void)registerForSessionUpdates:(_Bool)arg1;
- (void)_handleMediaUpdateMuted:(id)arg1;
- (void)_handleMediaUpdateVolume:(id)arg1;
- (void)_handleMediaSessionSetAudioControl:(id)arg1;
- (void)handleMediaSessionSetAudioControl:(id)arg1;
- (void)_notifyClientsOfUpdatedVolume:(id)arg1 muted:(id)arg2 inResponseToMessage:(id)arg3;
- (void)handleSetPlayback:(id)arg1;
- (void)_handleSetPlayback:(id)arg1;
- (void)_setPlaybackState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invokePendingSetPlaybackStateBlocksOfError:(id)arg1;
- (void)_notifyPendingBlocksOfError:(id)arg1;
- (void)_addPendingBlock:(CDUnknownBlockType)arg1 externalDevice:(void *)arg2;
- (void)updateWithResponse:(id)arg1;
- (void)_notifyClientsOfPlaybackStateUpdateWithError:(id)arg1 inResponseToMessage:(id)arg2;
- (void)_registerForSessionUpdates:(_Bool)arg1;
- (void)mediaPlaybackStateChanged:(id)arg1;
- (void)handleRefreshPlayback:(id)arg1;
- (void)_handleGetPlaybackState:(id)arg1;
- (void)_getPlaybackStateWithCompletion:(CDUnknownBlockType)arg1;
- (void *)_getExternalDevice;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)dumpState;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)logIdentifier;
- (void *)getOrigin;
- (void)dealloc;
- (id)_initWithMediaProfiles:(id)arg1 state:(id)arg2;
- (id)initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;
- (id)_initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

