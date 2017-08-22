//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDHomeInvitation.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>

@class HMDUser, NSArray, NSString, NSUUID;

@interface HMDOutgoingHomeInvitation : HMDHomeInvitation <HMDBackingStoreObjectProtocol>
{
    _Bool _responseReceived;
    NSArray *_operationIdentifiers;
    NSUUID *_uuid;
    HMDUser *_user;
    NSString *_inviteeDestinationAddress;
    NSUUID *_messageIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(nonatomic) _Bool responseReceived; // @synthesize responseReceived=_responseReceived;
@property(retain, nonatomic) NSString *inviteeDestinationAddress; // @synthesize inviteeDestinationAddress=_inviteeDestinationAddress;
@property(retain, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionOutgoingInvitiationUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)processUserManagementOperationIdentifiers:(id)arg1;
- (void)updateUserManagementOperations:(id)arg1;
@property(retain, nonatomic) NSArray *operationIdentifiers; // @synthesize operationIdentifiers=_operationIdentifiers;
@property(readonly, nonatomic) NSArray *operations;
- (void)updateInvitationState:(long long)arg1;
- (_Bool)refreshDisplayName;
- (void)updateUser:(id)arg1;
- (id)describeWithFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *accessoryInvitationsInformation;
- (void)cancel;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (id)initWithUUID:(id)arg1 invitee:(id)arg2 invitationState:(long long)arg3 forHome:(id)arg4 expiryDate:(id)arg5 messageIdentifier:(id)arg6;
- (id)initWithInvitee:(id)arg1 invitationState:(long long)arg2 forHome:(id)arg3 expiryDate:(id)arg4 messageIdentifier:(id)arg5;

@end

