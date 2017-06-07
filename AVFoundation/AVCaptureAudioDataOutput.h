//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureAudioDataOutputInternal, NSObject;
@protocol AVCaptureAudioDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureAudioDataOutput : AVCaptureOutput
{
    AVCaptureAudioDataOutputInternal *_internal;
}

+ (void)initialize;
- (_Bool)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (id)supportedAssetWriterOutputFileTypes;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

