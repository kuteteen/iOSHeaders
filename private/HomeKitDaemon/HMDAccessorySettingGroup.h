//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDBackingStoreObjectProtocol.h"
#import "HMFLogging.h"
#import "HMFMessageReceiver.h"
#import "NSSecureCoding.h"

@class HMDAccessory, HMDAccessorySettingGroupModel, HMFMessageDispatcher, NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDAccessorySettingGroup : HMFObject <HMFLogging, HMDBackingStoreObjectProtocol, HMFMessageReceiver, NSSecureCoding>
{
    NSMutableSet *_settings;
    NSMutableSet *_groups;
    NSUUID *_identifier;
    HMDAccessorySettingGroup *_group;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDAccessory *_accessory;
}

+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;
+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property __weak HMDAccessorySettingGroup *group; // @synthesize group=_group;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)remoteMessageDestination;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
@property(readonly) HMDAccessorySettingGroupModel *model;
@property(readonly, copy) NSArray *models;
- (id)mergeWithGroupMetadata:(id)arg1;
- (void)_relayRequestMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleRemovedGroupModel:(id)arg1 message:(id)arg2;
- (void)_handleRemoveGroup:(id)arg1;
- (void)removeGroup:(id)arg1;
- (void)handleAddedGroupModel:(id)arg1 message:(id)arg2;
- (void)_handleAddGroup:(id)arg1;
- (void)addGroup:(id)arg1;
- (id)groupWithIdentifier:(id)arg1;
@property(readonly, copy) NSArray *groups;
- (void)handleRemovedSettingModel:(id)arg1 message:(id)arg2;
- (void)_handleRemoveSetting:(id)arg1;
- (void)removeSetting:(id)arg1;
- (void)handleAddedSettingModel:(id)arg1 message:(id)arg2;
- (void)_handleAddSetting:(id)arg1;
- (void)addSetting:(id)arg1;
- (id)settingWithIdentifier:(id)arg1;
@property(readonly, copy) NSArray *settings;
@property(readonly) NSString *keyPath;
- (_Bool)_shouldAcceptMessage:(id)arg1;
- (void)registerForMessages;
- (void)configureWithAccessory:(id)arg1 messageDispatcher:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithName:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

