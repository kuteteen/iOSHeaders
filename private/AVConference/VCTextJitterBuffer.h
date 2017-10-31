//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface VCTextJitterBuffer : NSObject
{
    struct tagVCTextJitterBufferConfiguration _configuration;
    _Bool _resetRequested;
    id _delegate;
    struct JitterPreloadQueue_t *_preloadQueue;
    struct JitterQueue_t *_jitterQueue;
    NSObject<OS_dispatch_source> *_heartbeat;
    unsigned int _lastSequenceNumber;
    _Bool _firstFrameReceived;
}

- (void)heartbeat;
- (void)stopHeartbeat;
- (_Bool)startHeartbeat;
- (void)jitterQueuePushPacket:(struct tagAudioPacket *)arg1;
- (void)enqueuePacket:(struct tagAudioPacket *)arg1;
- (void)stop;
- (_Bool)start;
- (void)releaseTextFrame:(struct tagAudioFrame *)arg1;
- (struct tagAudioFrame *)allocTextFrame;
- (void)releaseTextPacket:(struct tagAudioPacket *)arg1;
- (struct tagAudioPacket *)allocTextPacket;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithConfiguration:(struct tagVCTextJitterBufferConfiguration *)arg1;

@end

