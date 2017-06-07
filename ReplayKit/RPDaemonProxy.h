//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReplayKit/NSXPCConnectionDelegate-Protocol.h>
#import <ReplayKit/RPClientProtocol-Protocol.h>
#import <ReplayKit/RPDaemonProtocol-Protocol.h>

@class NSString, NSXPCConnection;

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol>
{
    NSXPCConnection *_connection;
}

+ (id)daemonProxy;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (oneway void)updateBroadcastServiceInfo:(id)arg1;
- (oneway void)stopRecordingWithError:(id)arg1 movieURL:(id)arg2;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
- (oneway void)setMicrophoneEnabled:(_Bool)arg1;
- (oneway void)discardRecordingWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)clientDidResignActiveWithBundleID:(id)arg1;
- (oneway void)clientDidBecomeActiveWithBundleID:(id)arg1;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;
- (oneway void)pauseRecording;
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (oneway void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)startRecordingWindowLayerContextIDs:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 broadcast:(_Bool)arg5 systemRecording:(_Bool)arg6 withHandler:(CDUnknownBlockType)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

