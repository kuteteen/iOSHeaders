//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMDCameraRemoteStreamProtocol.h"

@class HMDCameraNetworkConfig, IDSSession, NSNumber;

@protocol HMDCameraRemoteStreamSenderProtocol <HMDCameraRemoteStreamProtocol>
@property(readonly, nonatomic) NSNumber *mtu;
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(HMDCameraNetworkConfig *)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(HMDCameraNetworkConfig *)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)openRelaySession;

@optional
- (void)startPacketRelayWithIDSDeviceSession:(IDSSession *)arg1 cameraVideoSSRC:(unsigned int)arg2 cameraAudioSSRC:(unsigned int)arg3;
@end

