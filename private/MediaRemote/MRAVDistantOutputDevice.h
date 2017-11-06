//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRAVOutputDevice.h>

#import "NSSecureCoding.h"

@class MRAVOutputDeviceSourceInfo, NSDictionary, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding>
{
    _MRAVOutputDeviceDescriptorProtobuf *_protobuf;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSDictionary *_modelSpecificInfo;
}

+ (_Bool)supportsSecureCoding;
- (id)sourceInfo;
- (_Bool)requiresAuthorization;
- (_Bool)supportsExternalScreen;
- (_Bool)isLocalDevice;
- (_Bool)hasBatteryLevel;
- (float)batteryLevel;
- (id)modelSpecificInfo;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (_Bool)isGroupable;
- (_Bool)isGroupLeader;
- (_Bool)isRemoteControllable;
- (_Bool)canAccessRemoteAssets;
- (id)MACAddress;
- (id)groupID;
- (id)modelID;
- (id)uid;
- (id)name;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1;

@end

