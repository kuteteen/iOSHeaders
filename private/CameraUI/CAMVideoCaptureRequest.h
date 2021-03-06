//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraUI/CAMCaptureRequest.h>

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>
{
    _Bool _timelapse;
    _Bool _shouldGenerateVideoPreviewImage;
    double _maximumRecordedDuration;
    long long _maximumRecordedFileSize;
    long long _remainingDiskUsageThreshold;
    id <CAMVideoCaptureRequestDelegate> _delegate;
    long long _captureVideoConfiguration;
    long long _torchMode;
}

@property(readonly, nonatomic) long long remainingDiskUsageThreshold; // @synthesize remainingDiskUsageThreshold=_remainingDiskUsageThreshold;
@property(readonly, nonatomic) long long maximumRecordedFileSize; // @synthesize maximumRecordedFileSize=_maximumRecordedFileSize;
@property(readonly, nonatomic) double maximumRecordedDuration; // @synthesize maximumRecordedDuration=_maximumRecordedDuration;
@property(readonly, nonatomic) _Bool shouldGenerateVideoPreviewImage; // @synthesize shouldGenerateVideoPreviewImage=_shouldGenerateVideoPreviewImage;
@property(readonly, nonatomic, getter=isTimelapse) _Bool timelapse; // @synthesize timelapse=_timelapse;
@property(readonly, nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(readonly, nonatomic) long long captureVideoConfiguration; // @synthesize captureVideoConfiguration=_captureVideoConfiguration;
@property(readonly, nonatomic) __weak id <CAMVideoCaptureRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 distinctPersistence:(_Bool)arg2;
- (id)init;

@end

