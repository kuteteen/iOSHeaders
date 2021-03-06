//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class AVOutputContext, MRAVInputStream, MRAVOutputStream, NSArray, NSError, NSObject<OS_dispatch_queue>, _MRDeviceInfoMessageProtobuf;

__attribute__((visibility("hidden")))
@interface MRAVOutputContextTransport : MRExternalDeviceTransport
{
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_serialQueue;
    AVOutputContext *_outputContext;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSError *_error;
    MRAVInputStream *_inputStream;
    MRAVOutputStream *_outputStream;
    _Bool _useSystemAuthenticationPrompt;
    NSArray *_outputDevices;
}

@property(readonly, nonatomic) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
- (void).cxx_destruct;
- (id)_onQueue_createRemoteControlContextWithID:(id)arg1;
- (void)_destroyRemoteControlContext;
- (void)_unregisterNotificationsForOutputContext:(id)arg1;
- (void)_registerNotificationsForOutputContext:(id)arg1;
- (void)_onQueue_resetStreams;
- (void)_onQueue_initializeOutputContext;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (_Bool)requiresCustomPairing;
- (void)reset;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2;
- (id)error;
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;
- (_Bool)shouldUseSystemAuthenticationPrompt;
- (long long)port;
- (id)hostname;
- (id)name;
- (id)deviceInfo;
- (id)description;
- (void)dealloc;
- (id)initWithOutputDevices:(id)arg1;

@end

