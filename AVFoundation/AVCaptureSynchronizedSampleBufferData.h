//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData
{
    AVCaptureSynchronizedSampleBufferDataInternal *_internal;
}

@property(readonly) long long droppedReason;
@property(readonly) _Bool sampleBufferWasDropped;
@property(readonly) struct opaqueCMSampleBuffer *sampleBuffer;
- (void)dealloc;
- (id)_initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 sampleBufferWasDropped:(_Bool)arg2;

@end
