//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ReplayKit/RPBroadcastHandler.h>

#import "RPExtensionContextDelegate.h"

@class NSString;

@interface RPBroadcastSampleHandler : RPBroadcastHandler <RPExtensionContextDelegate>
{
    id <RPBroadcastDaemonProtocol> _daemonProxy;
}

@property(retain, nonatomic) id <RPBroadcastDaemonProtocol> daemonProxy; // @synthesize daemonProxy=_daemonProxy;
- (void).cxx_destruct;
- (void)_setupListenerWithEndpoint:(id)arg1;
- (void)processPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct AudioBufferList *)_audioBufferListFromData:(id)arg1;
- (void)_processPayloadWithAudioSample:(id)arg1 type:(long long)arg2;
- (void)_processPayloadWithVideoSample:(id)arg1;
- (void)_processPayload:(id)arg1;
- (void)extensionContext:(id)arg1 setEndpoint:(id)arg2;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)finishBroadcastWithError:(id)arg1;
- (void)updateBroadcastURL:(id)arg1;
- (void)updateServiceInfo:(id)arg1;
- (void)broadcastAnnotatedWithApplicationInfo:(id)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)broadcastPaused;
- (void)broadcastResumed;
- (void)broadcastFinished;
- (void)broadcastStartedWithSetupInfo:(id)arg1;
- (id)videoQueue;
- (id)audioQueue;
- (id)group;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

