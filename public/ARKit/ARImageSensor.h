//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARSensor.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class ARImageSensorSettings, AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureSession, AVCaptureVideoDataOutput, NSObject<OS_dispatch_queue>, NSString;

@interface ARImageSensor : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, ARSensor>
{
    _Bool _previouslyRunning;
    id <AVCaptureVideoDataOutputSampleBufferDelegate> _previousOutputDelegate;
    NSObject<OS_dispatch_queue> *_previousOutputCallbackQueue;
    NSObject<OS_dispatch_queue> *_captureQueue;
    _Bool _running;
    _Bool _interrupted;
    float _defaultLensPosition;
    id <ARSensorDelegate> _delegate;
    ARImageSensorSettings *_settings;
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    AVCaptureVideoDataOutput *_videoOutput;
    unsigned long long _powerUsage;
    long long _captureFramesPerSecond;
    long long _renderFramesPerSecond;
}

+ (float)defaultLensPosition;
+ (double)closestFrameRateIn:(id)arg1 target:(double)arg2 preferHigher:(_Bool)arg3;
@property _Bool interrupted; // @synthesize interrupted=_interrupted;
@property _Bool running; // @synthesize running=_running;
@property long long renderFramesPerSecond; // @synthesize renderFramesPerSecond=_renderFramesPerSecond;
@property long long captureFramesPerSecond; // @synthesize captureFramesPerSecond=_captureFramesPerSecond;
@property float defaultLensPosition; // @synthesize defaultLensPosition=_defaultLensPosition;
@property(nonatomic) unsigned long long powerUsage; // @synthesize powerUsage=_powerUsage;
@property(readonly, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(readonly, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(readonly, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(readonly, nonatomic) ARImageSensorSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captureSessionStateChanged:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)enableAutoFocusForDevice:(id)arg1;
- (void)_configureCameraFocusForDevice:(id)arg1;
- (void)_configureCameraWhiteBalanceForDevice:(id)arg1;
- (void)_configureCameraExposureForDevice:(id)arg1;
- (_Bool)_validateCameraAuthorization;
- (id)configureCaptureDevice;
- (id)configureCaptureSession;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stop;
- (void)start;
- (unsigned long long)providedDataTypes;
- (void)reconfigure:(id)arg1;
- (_Bool)canReconfigure:(id)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)init;
- (long long)preferredRenderFrameRateForPowerUsage:(unsigned long long)arg1 devicePosition:(long long)arg2;
- (double)preferredCaptureFrameRateForPowerUsage:(unsigned long long)arg1 devicePosition:(long long)arg2;
- (void)_adjustForPowerUsage;
- (id)_createAudioInput:(id *)arg1;
@property(retain, nonatomic) AVCaptureAudioDataOutput *audioOutput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

