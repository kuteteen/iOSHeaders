//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureMetadataInputInternal;

@interface AVCaptureMetadataInput : AVCaptureInput
{
    AVCaptureMetadataInputInternal *_internal;
}

+ (id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 clock:(struct OpaqueCMClock *)arg2;
- (_Bool)appendTimedMetadataGroup:(id)arg1 error:(id *)arg2;
- (id)sourceID;
- (struct OpaqueCMClock *)clock;
- (id)ports;
- (void)dealloc;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 clock:(struct OpaqueCMClock *)arg2;
- (id)init;

@end

