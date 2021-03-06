//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFLogging.h"
#import "HMFMessageReceiver.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMBulletinBoardNotificationServiceGroup, HMDelegateCaller, HMFMessageDispatcher, HMService, NSObject<OS_dispatch_queue>, NSPredicate, NSString, NSUUID;

@interface HMBulletinBoardNotification : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver, HMFLogging>
{
    _Bool _enabled;
    NSPredicate *_condition;
    HMBulletinBoardNotificationServiceGroup *_notificationServiceGroup;
    NSUUID *_uniqueIdentifier;
    NSUUID *_targetUUID;
    HMService *_service;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
    HMFMessageDispatcher *_msgDispatcher;
    NSString *_logID;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(readonly, copy, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) __weak HMService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_commitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)commitWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) HMBulletinBoardNotificationServiceGroup *notificationServiceGroup; // @synthesize notificationServiceGroup=_notificationServiceGroup;
- (void)_callBulletinBoardNotificationUpdatedDelegate;
@property(retain, nonatomic) NSPredicate *condition; // @synthesize condition=_condition;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_configureClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
- (void)_handleBulletinBoardNotificationUpdateNotification:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerNotificationHandlers;
- (id)logIdentifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

