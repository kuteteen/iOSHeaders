//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRAVDistantExternalDeviceMetadata.h>

@class MRSupportedProtocolMessages, NSString, _MRDeviceInfoMessageProtobuf;

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata
{
}

@property(nonatomic) _Bool usingSystemPairing; // @dynamic usingSystemPairing;
@property(nonatomic) _Bool paired; // @dynamic paired;
@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) MRSupportedProtocolMessages *supportedMessages; // @dynamic supportedMessages;
@property(nonatomic) long long hostPort; // @dynamic hostPort;
@property(copy, nonatomic) NSString *hostName; // @dynamic hostName;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

