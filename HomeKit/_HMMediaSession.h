//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>

@class NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue, _HMMediaSessionDelegate;

@interface _HMMediaSession : NSObject <HMFMessageReceiver, HMObjectMerge>
{
    long long _playbackState;
    _HMContext *_context;
    NSUUID *_uniqueIdentifier;
    NSUUID *_uuid;
    id <_HMMediaSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(nonatomic) __weak id <_HMMediaSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_handleSessionPlaybackUpdated:(id)arg1;
- (void)_notifyDelegateOfUpdatedPlaybackState:(long long)arg1;
- (void)setPlaybackState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)delegateCaller;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)setPlaybackState:(long long)arg1;
@property(readonly) long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
- (void)_registerNotificationHandlers;
- (id)initWithUUID:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

