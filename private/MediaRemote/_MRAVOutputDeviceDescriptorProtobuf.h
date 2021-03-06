//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString, _MRAVOutputDeviceSourceInfoProtobuf;

@interface _MRAVOutputDeviceDescriptorProtobuf : PBCodable <NSCopying>
{
    float _batteryLevel;
    int _deviceSubType;
    int _deviceType;
    NSString *_groupID;
    NSString *_logicalDeviceID;
    NSData *_macAddress;
    NSString *_modelID;
    NSData *_modelSpecificInfoData;
    NSString *_name;
    _MRAVOutputDeviceSourceInfoProtobuf *_sourceInfo;
    NSString *_uniqueIdentifier;
    _Bool _canAccessRemoteAssets;
    _Bool _canRelayCommunicationChannel;
    _Bool _isDeviceGroupable;
    _Bool _isGroupLeader;
    _Bool _isGroupable;
    _Bool _isLocalDevice;
    _Bool _isRemoteControllable;
    _Bool _requiresAuthorization;
    _Bool _shouldForceRemoteControlabillity;
    _Bool _supportsExternalScreen;
    struct {
        unsigned int batteryLevel:1;
        unsigned int deviceSubType:1;
        unsigned int deviceType:1;
        unsigned int canAccessRemoteAssets:1;
        unsigned int canRelayCommunicationChannel:1;
        unsigned int isDeviceGroupable:1;
        unsigned int isGroupLeader:1;
        unsigned int isGroupable:1;
        unsigned int isLocalDevice:1;
        unsigned int isRemoteControllable:1;
        unsigned int requiresAuthorization:1;
        unsigned int shouldForceRemoteControlabillity:1;
        unsigned int supportsExternalScreen:1;
    } _has;
}

@property(retain, nonatomic) NSString *logicalDeviceID; // @synthesize logicalDeviceID=_logicalDeviceID;
@property(nonatomic) _Bool canRelayCommunicationChannel; // @synthesize canRelayCommunicationChannel=_canRelayCommunicationChannel;
@property(nonatomic) _Bool isDeviceGroupable; // @synthesize isDeviceGroupable=_isDeviceGroupable;
@property(retain, nonatomic) _MRAVOutputDeviceSourceInfoProtobuf *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(nonatomic) _Bool shouldForceRemoteControlabillity; // @synthesize shouldForceRemoteControlabillity=_shouldForceRemoteControlabillity;
@property(nonatomic) _Bool requiresAuthorization; // @synthesize requiresAuthorization=_requiresAuthorization;
@property(nonatomic) _Bool supportsExternalScreen; // @synthesize supportsExternalScreen=_supportsExternalScreen;
@property(nonatomic) _Bool isLocalDevice; // @synthesize isLocalDevice=_isLocalDevice;
@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(retain, nonatomic) NSData *modelSpecificInfoData; // @synthesize modelSpecificInfoData=_modelSpecificInfoData;
@property(nonatomic) int deviceSubType; // @synthesize deviceSubType=_deviceSubType;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) _Bool isGroupable; // @synthesize isGroupable=_isGroupable;
@property(nonatomic) _Bool isGroupLeader; // @synthesize isGroupLeader=_isGroupLeader;
@property(nonatomic) _Bool isRemoteControllable; // @synthesize isRemoteControllable=_isRemoteControllable;
@property(nonatomic) _Bool canAccessRemoteAssets; // @synthesize canAccessRemoteAssets=_canAccessRemoteAssets;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(retain, nonatomic) NSString *modelID; // @synthesize modelID=_modelID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLogicalDeviceID;
@property(nonatomic) _Bool hasCanRelayCommunicationChannel;
@property(nonatomic) _Bool hasIsDeviceGroupable;
@property(readonly, nonatomic) _Bool hasSourceInfo;
@property(nonatomic) _Bool hasShouldForceRemoteControlabillity;
@property(nonatomic) _Bool hasRequiresAuthorization;
@property(nonatomic) _Bool hasSupportsExternalScreen;
@property(nonatomic) _Bool hasIsLocalDevice;
@property(nonatomic) _Bool hasBatteryLevel;
@property(readonly, nonatomic) _Bool hasModelSpecificInfoData;
@property(nonatomic) _Bool hasDeviceSubType;
@property(nonatomic) _Bool hasDeviceType;
@property(nonatomic) _Bool hasIsGroupable;
@property(nonatomic) _Bool hasIsGroupLeader;
@property(nonatomic) _Bool hasIsRemoteControllable;
@property(nonatomic) _Bool hasCanAccessRemoteAssets;
@property(readonly, nonatomic) _Bool hasMacAddress;
@property(readonly, nonatomic) _Bool hasModelID;
@property(readonly, nonatomic) _Bool hasGroupID;
@property(readonly, nonatomic) _Bool hasUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasName;

@end

