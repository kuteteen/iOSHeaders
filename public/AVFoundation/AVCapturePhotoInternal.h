//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVApplePortraitMetadata, AVCameraCalibrationData, AVCaptureBracketedStillImageSettings, AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, AVDepthData, NSDictionary, NSString;

@interface AVCapturePhotoInternal : NSObject
{
    CDStruct_1b6d18a9 timestamp;
    void *photoSurface;
    unsigned long long photoSurfaceSize;
    struct __CVBuffer *photoPixelBuffer;
    struct __CVBuffer *previewPixelBuffer;
    struct __CVBuffer *embeddedThumbnailSourcePixelBuffer;
    NSDictionary *embeddedThumbnailPhotoFormat;
    NSDictionary *metadata;
    AVCameraCalibrationData *cameraCalibrationData;
    AVCaptureResolvedPhotoSettings *resolvedSettings;
    AVCapturePhotoSettings *unresolvedSettings;
    AVDepthData *depthData;
    _Bool didTryToDecodeDepthData;
    _Bool isRawPhoto;
    AVCaptureBracketedStillImageSettings *bracketSettings;
    unsigned long long sequenceCount;
    unsigned long long photoCount;
    NSString *sourceDeviceType;
    unsigned int photoProcessingFlags;
    AVApplePortraitMetadata *portraitMetadata;
}

@end
