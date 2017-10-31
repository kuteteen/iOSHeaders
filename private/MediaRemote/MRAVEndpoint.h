//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRAVOutputDevice, MRExternalDevice, NSArray, NSString, _MRAVEndpointDescriptorProtobuf;

__attribute__((visibility("hidden")))
@interface MRAVEndpoint : NSObject
{
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}

+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void)_connectToExternalDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg1 removingDevices:(id)arg2 settingDevices:(id)arg3 replyQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)_volumeControlModeForOutputDevice:(id)arg1;
- (unsigned long long)_volumeControlMode;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getOutputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isVolumeControlAvailableForOutputDevice:(id)arg1;
- (void)setVolume:(float)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVolumeWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)containsOutputDevice:(id)arg1;
@property(readonly, nonatomic) NSString *shortDescription;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property(readonly, nonatomic, getter=isLocalEndpoint) _Bool localEndpoint;
@property(readonly, nonatomic) MRAVOutputDevice *designatedGroupLeader;
@property(readonly, nonatomic) MRExternalDevice *externalDevice;
@property(readonly, nonatomic) NSArray *outputDevices;
@property(readonly, nonatomic) _MRAVEndpointDescriptorProtobuf *descriptor;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)_init;

@end

