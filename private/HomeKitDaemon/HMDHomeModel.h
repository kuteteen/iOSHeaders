//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class HMDHomeKitVersion, NSData, NSNumber, NSString;

@interface HMDHomeModel : HMDBackingStoreModelObject
{
}

+ (id)properties;

// Remaining properties
@property(retain, nonatomic) NSNumber *automaticSoftwareUpdateEnabled; // @dynamic automaticSoftwareUpdateEnabled;
@property(retain, nonatomic) NSString *defaultRoomUUID; // @dynamic defaultRoomUUID;
@property(retain, nonatomic) NSData *homeLocationData; // @dynamic homeLocationData;
@property(retain, nonatomic) NSString *mediaPassword; // @dynamic mediaPassword;
@property(retain, nonatomic) NSNumber *mediaPeerToPeerEnabled; // @dynamic mediaPeerToPeerEnabled;
@property(retain, nonatomic) NSNumber *minimumMediaUserPrivilege; // @dynamic minimumMediaUserPrivilege;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *ownerName; // @dynamic ownerName;
@property(retain, nonatomic) NSData *ownerPublicKey; // @dynamic ownerPublicKey;
@property(retain, nonatomic) NSString *ownerUUID; // @dynamic ownerUUID;
@property(retain, nonatomic) NSString *ownerUserID; // @dynamic ownerUserID;
@property(retain, nonatomic) NSNumber *presenceAuthorizationStatus; // @dynamic presenceAuthorizationStatus;
@property(retain, nonatomic) NSNumber *presenceComputeStatus; // @dynamic presenceComputeStatus;
@property(retain, nonatomic) NSString *primaryResidentUUID; // @dynamic primaryResidentUUID;
@property(retain, nonatomic) HMDHomeKitVersion *sharedHomeSourceVersion; // @dynamic sharedHomeSourceVersion;

@end

