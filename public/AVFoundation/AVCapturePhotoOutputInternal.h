//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCapturePhotoSettings, AVWeakReference, NSArray, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface AVCapturePhotoOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    long long lastSettingsUniqueID;
    NSArray *availablePhotoPixelFormatTypes;
    NSArray *availablePhotoCodecTypes;
    NSArray *availableRawPhotoPixelFormatTypes;
    NSArray *availablePhotoFileTypes;
    NSArray *availableRawPhotoFileTypes;
    _Bool stillImageStabilizationSupported;
    _Bool dualCameraFusionSupported;
    _Bool dualCameraDualPhotoDeliverySupported;
    _Bool dualCameraDualPhotoDeliveryEnabled;
    NSArray *supportedHDRModes;
    NSArray *supportedFlashModes;
    _Bool highResolutionCaptureEnabled;
    unsigned long long maxBracketedCapturePhotoCount;
    _Bool lensStabilizationDuringBracketedCaptureSupported;
    _Bool livePhotoCaptureSupported;
    _Bool livePhotoCaptureEnabled;
    _Bool livePhotoAutoTrimmingEnabled;
    NSArray *availableLivePhotoVideoCodecTypes;
    CDStruct_1b6d18a9 livePhotoMovieDuration;
    CDStruct_1b6d18a9 livePhotoMovieVideoFrameDuration;
    CDStruct_79c71658 livePhotoMovieDimensions;
    _Bool livePhotoCaptureSuspended;
    _Bool depthDataDeliverySupported;
    _Bool depthDataDeliveryEnabled;
    _Bool filterRenderingEnabled;
    _Bool imageOptimizationForOfflineVideoStabilizationSupported;
    _Bool optimizesImagesForOfflineVideoStabilization;
    _Bool livePhotoMovieProcessingSuspended;
    NSObject<OS_dispatch_queue> *sceneDetectionObserversDispatchQueue;
    int flashSceneObserverCount;
    int HDRSceneObserverCount;
    int stillImageStabilizationSceneObserverCount;
    _Bool isFlashScene;
    _Bool isHDRScene;
    _Bool isStillImageStabilizationScene;
    AVCapturePhotoSettings *photoSettingsForSceneMonitoring;
    struct OpaqueFigSimpleMutex *requestsLock;
    NSMutableArray *requests;
    NSMutableArray *prepareRequests;
    NSObject<OS_dispatch_queue> *beginEndIrisMovieCaptureHostTimeQueue;
    NSObject<OS_dispatch_group> *beginEndIrisMovieCaptureHostTimeDispatchGroup;
    NSString *sourceDeviceType;
}

@end

