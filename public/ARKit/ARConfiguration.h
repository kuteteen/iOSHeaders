//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class ARImageSensorSettings, ARVideoFormat, AVCaptureSession, NSArray;

@interface ARConfiguration : NSObject <NSCopying>
{
    ARVideoFormat *_videoFormat;
    _Bool _providesAudioData;
    _Bool _autoFocusEnabled;
    _Bool _mirroredFrameOutput;
    long long _worldAlignment;
    NSArray *_customSensors;
    unsigned long long _lightEstimation;
    long long _latencyFrameCount;
    unsigned long long _frameDebugOptions;
    long long _cameraPosition;
    AVCaptureSession *_captureSession;
}

+ (id)replayConfigurationWithConfiguration:(id)arg1 replaySensor:(id)arg2 replayingResultDataClasses:(id)arg3;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id *)arg2 fileURL:(id)arg3;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id *)arg2;
+ (id)supportedVideoFormats;
+ (_Bool)isSupported;
@property(nonatomic) _Bool mirroredFrameOutput; // @synthesize mirroredFrameOutput=_mirroredFrameOutput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(nonatomic) unsigned long long frameDebugOptions; // @synthesize frameDebugOptions=_frameDebugOptions;
@property(nonatomic) long long latencyFrameCount; // @synthesize latencyFrameCount=_latencyFrameCount;
@property(nonatomic) unsigned long long lightEstimation; // @synthesize lightEstimation=_lightEstimation;
@property(retain, nonatomic) NSArray *customSensors; // @synthesize customSensors=_customSensors;
@property(nonatomic, getter=isAutoFocusEnabled) _Bool autoFocusEnabled; // @synthesize autoFocusEnabled=_autoFocusEnabled;
@property(nonatomic) _Bool providesAudioData; // @synthesize providesAudioData=_providesAudioData;
@property(nonatomic) long long worldAlignment; // @synthesize worldAlignment=_worldAlignment;
@property(retain, nonatomic) ARVideoFormat *videoFormat; // @synthesize videoFormat=_videoFormat;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)_descriptionWithoutBrackets;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)renderingTechnique;
- (id)techniques;
- (long long)latencyFrameCountAdjustedForReplay;
- (id)deviceModel;
@property(nonatomic, getter=isLightEstimationEnabled) _Bool lightEstimationEnabled;
@property(readonly, nonatomic) ARImageSensorSettings *imageSensorSettings;
- (id)initPrivate;
- (id)init;

@end

