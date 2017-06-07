//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReplayKit/RPBroadcastHandler.h>

@class NSXPCConnection;
@protocol RPBroadcastDaemonProtocol;

@interface RPBroadcastSampleHandler : RPBroadcastHandler
{
    NSXPCConnection *_connection;
    id <RPBroadcastDaemonProtocol> _daemonProxy;
}

@property(retain, nonatomic) id <RPBroadcastDaemonProtocol> daemonProxy; // @synthesize daemonProxy=_daemonProxy;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)_setupListenerWithEndpoint:(id)arg1;
- (void)processPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct AudioBufferList *)_audioBufferListFromData:(id)arg1;
- (void)_processPayloadWithAudioSample:(id)arg1 type:(long long)arg2;
- (void)_processPayloadWithVideoSample:(id)arg1;
- (void)_processPayload:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)finishBroadcastWithError:(id)arg1;
- (void)updateServiceInfo:(id)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)broadcastPaused;
- (void)broadcastResumed;
- (void)broadcastFinished;
- (void)broadcastStartedWithSetupInfo:(id)arg1;
- (id)videoQueue;
- (id)audioQueue;

@end

