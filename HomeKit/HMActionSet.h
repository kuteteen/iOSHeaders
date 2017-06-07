//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMApplicationData, HMDelegateCaller, HMFMessageDispatcher, HMHome, HMThreadSafeMutableArrayCollection, NSDate, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMActionSet : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData>
{
    _Bool _executionInProgress;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHome *_home;
    HMApplicationData *_applicationData;
    NSDate *_lastExecutionDate;
    NSString *_actionSetType;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
    HMFMessageDispatcher *_msgDispatcher;
    HMThreadSafeMutableArrayCollection *_currentActions;
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMThreadSafeMutableArrayCollection *currentActions; // @synthesize currentActions=_currentActions;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSString *actionSetType; // @synthesize actionSetType=_actionSetType;
@property(nonatomic) _Bool executionInProgress; // @synthesize executionInProgress=_executionInProgress;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerNotificationHandlers;
- (void)_handleActionSetExecutedNotification:(id)arg1;
- (void)_handleActionSetStartExecutionNotification:(id)arg1;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleActionSetRenamedNotification:(id)arg1;
- (void)_handleActionUpdatedNotification:(id)arg1;
- (void)_handleActionRemovedNotification:(id)arg1;
- (void)_handleActionAddedNotification:(id)arg1;
- (void)_updateAction:(id)arg1 changes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_invalidate;
- (void)_unconfigure;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (void)_removeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_lookupActionWithInfo:(id)arg1;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (void)setApplicationData:(id)arg1;
@property(readonly, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic, getter=isExecuting) _Bool executing;
@property(readonly, copy, nonatomic) NSSet *actions;
- (void)setLastExecutionDate:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *lastExecutionDate; // @synthesize lastExecutionDate=_lastExecutionDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

