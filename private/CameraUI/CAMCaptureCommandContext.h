//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceFormat, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureMovieFileOutput, AVCapturePhotoOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, AVCaptureVideoThumbnailOutput, CAMCaptureEngine, CAMPanoramaConfiguration, CAMPanoramaOutput, NSString;
@protocol AVCaptureFileOutputRecordingDelegate, AVCapturePhotoCaptureDelegate;

@interface CAMCaptureCommandContext : NSObject
{
    AVCaptureSession *_currentCaptureSession;
    AVCaptureDevice *_currentVideoDevice;
    AVCaptureDeviceFormat *_currentVideoDeviceFormat;
    AVCaptureDeviceFormat *_currentDepthDataFormat;
    NSString *_currentVideoDevicePreset;
    AVCaptureDeviceInput *_currentVideoDeviceInput;
    AVCaptureDevice *_currentAudioDevice;
    AVCaptureDeviceInput *_currentAudioDeviceInput;
    AVCapturePhotoOutput *_currentStillImageOutput;
    AVCaptureMovieFileOutput *_currentMovieFileOutput;
    CAMPanoramaOutput *_currentPanoramaOutput;
    AVCaptureMetadataOutput *_currentMetadataOutput;
    AVCaptureVideoDataOutput *_currentEffectsPreviewOutput;
    AVCaptureVideoThumbnailOutput *_currentVideoThumbnailOutput;
    AVCaptureVideoPreviewLayer *_currentVideoPreviewLayer;
    CAMCaptureEngine *__captureEngine;
}

@property(readonly, nonatomic) __weak CAMCaptureEngine *_captureEngine; // @synthesize _captureEngine=__captureEngine;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *currentVideoPreviewLayer; // @synthesize currentVideoPreviewLayer=_currentVideoPreviewLayer;
@property(retain, nonatomic) AVCaptureVideoThumbnailOutput *currentVideoThumbnailOutput; // @synthesize currentVideoThumbnailOutput=_currentVideoThumbnailOutput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *currentEffectsPreviewOutput; // @synthesize currentEffectsPreviewOutput=_currentEffectsPreviewOutput;
@property(retain, nonatomic) AVCaptureMetadataOutput *currentMetadataOutput; // @synthesize currentMetadataOutput=_currentMetadataOutput;
@property(retain, nonatomic) CAMPanoramaOutput *currentPanoramaOutput; // @synthesize currentPanoramaOutput=_currentPanoramaOutput;
@property(retain, nonatomic) AVCaptureMovieFileOutput *currentMovieFileOutput; // @synthesize currentMovieFileOutput=_currentMovieFileOutput;
@property(retain, nonatomic) AVCapturePhotoOutput *currentStillImageOutput; // @synthesize currentStillImageOutput=_currentStillImageOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *currentAudioDeviceInput; // @synthesize currentAudioDeviceInput=_currentAudioDeviceInput;
@property(retain, nonatomic) AVCaptureDevice *currentAudioDevice; // @synthesize currentAudioDevice=_currentAudioDevice;
@property(retain, nonatomic) AVCaptureDeviceInput *currentVideoDeviceInput; // @synthesize currentVideoDeviceInput=_currentVideoDeviceInput;
@property(retain, nonatomic) NSString *currentVideoDevicePreset; // @synthesize currentVideoDevicePreset=_currentVideoDevicePreset;
@property(retain, nonatomic) AVCaptureDeviceFormat *currentDepthDataFormat; // @synthesize currentDepthDataFormat=_currentDepthDataFormat;
@property(retain, nonatomic) AVCaptureDeviceFormat *currentVideoDeviceFormat; // @synthesize currentVideoDeviceFormat=_currentVideoDeviceFormat;
@property(retain, nonatomic) AVCaptureDevice *currentVideoDevice; // @synthesize currentVideoDevice=_currentVideoDevice;
@property(retain, nonatomic) AVCaptureSession *currentCaptureSession; // @synthesize currentCaptureSession=_currentCaptureSession;
- (void).cxx_destruct;
- (id)metadataOutputForMode:(long long)arg1;
- (id)outputsForMode:(long long)arg1 shouldUseThumbnailOutputForFilters:(_Bool)arg2;
- (id)primaryOutputForMode:(long long)arg1;
- (id)audioDeviceInput;
- (id)videoDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long *)arg4;
- (id)_captureEngineDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long *)arg4;
- (void)clear;
- (void)stopPanoramaCapture;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
@property(readonly, nonatomic) CAMPanoramaConfiguration *currentPanoramaConfiguration;
@property(readonly, nonatomic) __weak id <AVCaptureFileOutputRecordingDelegate> currentRecordingDelegate;
- (void)registerVideoCaptureRequest:(id)arg1;
@property(readonly, nonatomic) __weak id <AVCapturePhotoCaptureDelegate> currentStillImageDelegate;
- (void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2;
- (id)initWithCaptureEngine:(id)arg1;

@end

