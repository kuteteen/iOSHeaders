//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TUVideoDeviceControllerProviderDelegate.h"

@class AVCaptureDevice, CALayer, NSArray, NSObject<OS_dispatch_queue>;

@interface TUVideoDeviceController : NSObject <TUVideoDeviceControllerProviderDelegate>
{
    _Bool _wantsPreview;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <TUVideoDeviceControllerProvider> _provider;
}

+ (int)_tuOrientationForVideoOrientation:(int)arg1;
+ (int)_videoOrientationForTUOrientation:(int)arg1;
@property(nonatomic) _Bool wantsPreview; // @synthesize wantsPreview=_wantsPreview;
@property(readonly, nonatomic) id <TUVideoDeviceControllerProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void).cxx_destruct;
- (void)captureDevicesChangedForProvider:(id)arg1;
- (void)didStopPreviewForProvider:(id)arg1;
- (void)provider:(id)arg1 didChangeLocalVideoAttributes:(id)arg2;
- (void)provider:(id)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg2;
- (void)didStartPreviewForProvider:(id)arg1;
- (void)provider:(id)arg1 cameraDidBecomeAvailableForUniqueID:(id)arg2;
- (void)provider:(id)arg1 didReceiveErrorFromCameraUniqueID:(id)arg2 error:(id)arg3;
- (void)setLocalPortraitAspectRatio:(struct CGSize)arg1 localLandscapeAspectRatio:(struct CGSize)arg2;
- (void)noteEndAnimationToPIP;
- (void)noteBeginAnimationToPIP;
- (void)noteEndAnimationToPreview;
- (void)noteBeginAnimationToPreview;
- (void)pausePreview;
- (void)stopPreview;
- (void)startPreview;
@property(retain, nonatomic) CALayer *localBackLayer;
@property(retain, nonatomic) CALayer *localFrontLayer;
@property(readonly, nonatomic, getter=isPreviewRunning) _Bool previewRunning;
@property(readonly, copy, nonatomic) NSArray *inputDevices;
@property(nonatomic) int currentVideoOrientation;
@property(retain, nonatomic) AVCaptureDevice *currentInputDevice;
- (id)debugDescription;
- (id)init;
- (id)initWithProvider:(id)arg1 serialQueue:(id)arg2;
- (id)initWithSerialQueue:(id)arg1;

@end

