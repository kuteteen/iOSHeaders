//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAMCaptureCapabilities : NSObject
{
    _Bool _backCameraSupported;
    _Bool _frontCameraSupported;
    _Bool _backFlashSupported;
    _Bool _frontFlashSupported;
    _Bool _backTorchSupported;
    _Bool _frontTorchSupported;
    _Bool _backHDRSupported;
    _Bool _backAutomaticHDRSupported;
    _Bool _backHDROnSupported;
    _Bool _frontHDRSupported;
    _Bool _frontAutomaticHDRSupported;
    _Bool _frontHDROnSupported;
    _Bool _previewSupportedDuringHDR;
    _Bool _modernHDRSupported;
    _Bool _backIrisSupported;
    _Bool _frontIrisSupported;
    _Bool _liveFilteringSupported;
    _Bool _portraitEffectsSupported;
    _Bool _naturalLightingAppliedToOriginal;
    _Bool _backBurstSupported;
    _Bool _frontBurstSupported;
    _Bool _squareModeSupported;
    _Bool _videoSupported;
    _Bool _stillDuringVideoSupported;
    _Bool _back4k24VideoSupported;
    _Bool _front4k24VideoSupported;
    _Bool _back4k30VideoSupported;
    _Bool _front4k30VideoSupported;
    _Bool _back4k60VideoSupported;
    _Bool _front4k60VideoSupported;
    _Bool _HEVCEncodingSupported;
    _Bool _backSlomoSupported;
    _Bool _frontSlomoSupported;
    _Bool _back720p240Supported;
    _Bool _front720p240Supported;
    _Bool _back1080p120Supported;
    _Bool _front1080p120Supported;
    _Bool _back1080p240Supported;
    _Bool _front1080p240Supported;
    _Bool _backPanoramaSupported;
    _Bool _frontPanoramaSupported;
    _Bool _backTimelapseSupported;
    _Bool _frontTimelapseSupported;
    _Bool _backPortraitModeSupported;
    _Bool _frontPortraitModeSupported;
    _Bool _backTorchPatternSupported;
    _Bool _frontTorchPatternSupported;
    _Bool _pipelinedStillImageProcessingSupported;
    _Bool _hasSystemTelephonyOfAnyKind;
    _Bool _forceTouchSupported;
    _Bool _splitScreenSupported;
    _Bool _backTelephotoSupported;
    _Bool _frontTelephotoSupported;
    _Bool _backDualSupported;
    _Bool _frontDualSupported;
    _Bool _backPearlSupported;
    _Bool _frontPearlSupported;
    _Bool _backDepthSupported;
    _Bool _frontDepthSupported;
    _Bool _messagesApplication;
    _Bool _photoBoothApplication;
    _Bool _internalInstall;
    _Bool _lockButtonAppropriateForShutter;
    _Bool _lowEndHardware;
    _Bool _allowHaptics;
    _Bool _allowHapticsOnConfigurationTaps;
    _Bool _topBarInvertedForModernPhone;
    _Bool _cameraApplication;
    _Bool _hasFilteringEntitlement;
    long long _maximumRecordedFileSize;
    long long _back720pMaxFPS;
    long long _front720pMaxFPS;
    long long _back1080pMaxFPS;
    long long _front1080pMaxFPS;
    double __backPhotoModeMaximumZoomFactor;
    double __frontPhotoModeMaximumZoomFactor;
    double __backVideoModeMaximumZoomFactor;
    double __frontVideoModeMaximumZoomFactor;
    double __backDualPhotoModeMaximumZoomFactor;
    double __backDualVideoModeMaximumZoomFactor;
    double __frontDualPhotoModeMaximumZoomFactor;
    double __frontDualVideoModeMaximumZoomFactor;
    double __backDualCameraSwitchOverZoomFactor;
    double __frontDualCameraSwitchOverZoomFactor;
    double __backCaptureInterval;
    double __frontCaptureInterval;
}

+ (id)capabilities;
@property(readonly, nonatomic) _Bool hasFilteringEntitlement; // @synthesize hasFilteringEntitlement=_hasFilteringEntitlement;
@property(readonly, nonatomic, getter=isCameraApplication) _Bool cameraApplication; // @synthesize cameraApplication=_cameraApplication;
@property(readonly, nonatomic, getter=isTopBarInvertedForModernPhone) _Bool topBarInvertedForModernPhone; // @synthesize topBarInvertedForModernPhone=_topBarInvertedForModernPhone;
@property(readonly, nonatomic) double _frontCaptureInterval; // @synthesize _frontCaptureInterval=__frontCaptureInterval;
@property(readonly, nonatomic) double _backCaptureInterval; // @synthesize _backCaptureInterval=__backCaptureInterval;
@property(readonly, nonatomic) double _frontDualCameraSwitchOverZoomFactor; // @synthesize _frontDualCameraSwitchOverZoomFactor=__frontDualCameraSwitchOverZoomFactor;
@property(readonly, nonatomic) double _backDualCameraSwitchOverZoomFactor; // @synthesize _backDualCameraSwitchOverZoomFactor=__backDualCameraSwitchOverZoomFactor;
@property(readonly, nonatomic) double _frontDualVideoModeMaximumZoomFactor; // @synthesize _frontDualVideoModeMaximumZoomFactor=__frontDualVideoModeMaximumZoomFactor;
@property(readonly, nonatomic) double _frontDualPhotoModeMaximumZoomFactor; // @synthesize _frontDualPhotoModeMaximumZoomFactor=__frontDualPhotoModeMaximumZoomFactor;
@property(readonly, nonatomic) double _backDualVideoModeMaximumZoomFactor; // @synthesize _backDualVideoModeMaximumZoomFactor=__backDualVideoModeMaximumZoomFactor;
@property(readonly, nonatomic) double _backDualPhotoModeMaximumZoomFactor; // @synthesize _backDualPhotoModeMaximumZoomFactor=__backDualPhotoModeMaximumZoomFactor;
@property(readonly, nonatomic) double _frontVideoModeMaximumZoomFactor; // @synthesize _frontVideoModeMaximumZoomFactor=__frontVideoModeMaximumZoomFactor;
@property(readonly, nonatomic) double _backVideoModeMaximumZoomFactor; // @synthesize _backVideoModeMaximumZoomFactor=__backVideoModeMaximumZoomFactor;
@property(readonly, nonatomic) double _frontPhotoModeMaximumZoomFactor; // @synthesize _frontPhotoModeMaximumZoomFactor=__frontPhotoModeMaximumZoomFactor;
@property(readonly, nonatomic) double _backPhotoModeMaximumZoomFactor; // @synthesize _backPhotoModeMaximumZoomFactor=__backPhotoModeMaximumZoomFactor;
@property(readonly, nonatomic) _Bool allowHapticsOnConfigurationTaps; // @synthesize allowHapticsOnConfigurationTaps=_allowHapticsOnConfigurationTaps;
@property(readonly, nonatomic) _Bool allowHaptics; // @synthesize allowHaptics=_allowHaptics;
@property(readonly, nonatomic, getter=isLowEndHardware) _Bool lowEndHardware; // @synthesize lowEndHardware=_lowEndHardware;
@property(readonly, nonatomic, getter=isLockButtonAppropriateForShutter) _Bool lockButtonAppropriateForShutter; // @synthesize lockButtonAppropriateForShutter=_lockButtonAppropriateForShutter;
@property(readonly, nonatomic, getter=isInternalInstall) _Bool internalInstall; // @synthesize internalInstall=_internalInstall;
@property(readonly, nonatomic, getter=isPhotoBoothApplication) _Bool photoBoothApplication; // @synthesize photoBoothApplication=_photoBoothApplication;
@property(readonly, nonatomic, getter=isMessagesApplication) _Bool messagesApplication; // @synthesize messagesApplication=_messagesApplication;
@property(readonly, nonatomic, getter=isFrontDepthSupported) _Bool frontDepthSupported; // @synthesize frontDepthSupported=_frontDepthSupported;
@property(readonly, nonatomic, getter=isBackDepthSupported) _Bool backDepthSupported; // @synthesize backDepthSupported=_backDepthSupported;
@property(readonly, nonatomic, getter=isFrontPearlSupported) _Bool frontPearlSupported; // @synthesize frontPearlSupported=_frontPearlSupported;
@property(readonly, nonatomic, getter=isBackPearlSupported) _Bool backPearlSupported; // @synthesize backPearlSupported=_backPearlSupported;
@property(readonly, nonatomic, getter=isFrontDualSupported) _Bool frontDualSupported; // @synthesize frontDualSupported=_frontDualSupported;
@property(readonly, nonatomic, getter=isBackDualSupported) _Bool backDualSupported; // @synthesize backDualSupported=_backDualSupported;
@property(readonly, nonatomic, getter=isFrontTelephotoSupported) _Bool frontTelephotoSupported; // @synthesize frontTelephotoSupported=_frontTelephotoSupported;
@property(readonly, nonatomic, getter=isBackTelephotoSupported) _Bool backTelephotoSupported; // @synthesize backTelephotoSupported=_backTelephotoSupported;
@property(readonly, nonatomic, getter=isSplitScreenSupported) _Bool splitScreenSupported; // @synthesize splitScreenSupported=_splitScreenSupported;
@property(readonly, nonatomic, getter=isForceTouchSupported) _Bool forceTouchSupported; // @synthesize forceTouchSupported=_forceTouchSupported;
@property(readonly, nonatomic) _Bool hasSystemTelephonyOfAnyKind; // @synthesize hasSystemTelephonyOfAnyKind=_hasSystemTelephonyOfAnyKind;
@property(readonly, nonatomic, getter=isPipelinedStillImageProcessingSupported) _Bool pipelinedStillImageProcessingSupported; // @synthesize pipelinedStillImageProcessingSupported=_pipelinedStillImageProcessingSupported;
@property(readonly, nonatomic, getter=isFrontTorchPatternSupported) _Bool frontTorchPatternSupported; // @synthesize frontTorchPatternSupported=_frontTorchPatternSupported;
@property(readonly, nonatomic, getter=isBackTorchPatternSupported) _Bool backTorchPatternSupported; // @synthesize backTorchPatternSupported=_backTorchPatternSupported;
@property(readonly, nonatomic, getter=isFrontPortraitModeSupported) _Bool frontPortraitModeSupported; // @synthesize frontPortraitModeSupported=_frontPortraitModeSupported;
@property(readonly, nonatomic, getter=isBackPortraitModeSupported) _Bool backPortraitModeSupported; // @synthesize backPortraitModeSupported=_backPortraitModeSupported;
@property(readonly, nonatomic, getter=isFrontTimelapseSupported) _Bool frontTimelapseSupported; // @synthesize frontTimelapseSupported=_frontTimelapseSupported;
@property(readonly, nonatomic, getter=isBackTimelapseSupported) _Bool backTimelapseSupported; // @synthesize backTimelapseSupported=_backTimelapseSupported;
@property(readonly, nonatomic, getter=isFrontPanoramaSupported) _Bool frontPanoramaSupported; // @synthesize frontPanoramaSupported=_frontPanoramaSupported;
@property(readonly, nonatomic, getter=isBackPanoramaSupported) _Bool backPanoramaSupported; // @synthesize backPanoramaSupported=_backPanoramaSupported;
@property(readonly, nonatomic, getter=isFront1080p240Supported) _Bool front1080p240Supported; // @synthesize front1080p240Supported=_front1080p240Supported;
@property(readonly, nonatomic, getter=isBack1080p240Supported) _Bool back1080p240Supported; // @synthesize back1080p240Supported=_back1080p240Supported;
@property(readonly, nonatomic, getter=isFront1080p120Supported) _Bool front1080p120Supported; // @synthesize front1080p120Supported=_front1080p120Supported;
@property(readonly, nonatomic, getter=isBack1080p120Supported) _Bool back1080p120Supported; // @synthesize back1080p120Supported=_back1080p120Supported;
@property(readonly, nonatomic, getter=isFront720p240Supported) _Bool front720p240Supported; // @synthesize front720p240Supported=_front720p240Supported;
@property(readonly, nonatomic, getter=isBack720p240Supported) _Bool back720p240Supported; // @synthesize back720p240Supported=_back720p240Supported;
@property(readonly, nonatomic, getter=isFrontSlomoSupported) _Bool frontSlomoSupported; // @synthesize frontSlomoSupported=_frontSlomoSupported;
@property(readonly, nonatomic, getter=isBackSlomoSupported) _Bool backSlomoSupported; // @synthesize backSlomoSupported=_backSlomoSupported;
@property(readonly, nonatomic, getter=isHEVCEncodingSupported) _Bool HEVCEncodingSupported; // @synthesize HEVCEncodingSupported=_HEVCEncodingSupported;
@property(readonly, nonatomic, getter=isFront4k60VideoSupported) _Bool front4k60VideoSupported; // @synthesize front4k60VideoSupported=_front4k60VideoSupported;
@property(readonly, nonatomic, getter=isBack4k60VideoSupported) _Bool back4k60VideoSupported; // @synthesize back4k60VideoSupported=_back4k60VideoSupported;
@property(readonly, nonatomic, getter=isFront4k30VideoSupported) _Bool front4k30VideoSupported; // @synthesize front4k30VideoSupported=_front4k30VideoSupported;
@property(readonly, nonatomic, getter=isBack4k30VideoSupported) _Bool back4k30VideoSupported; // @synthesize back4k30VideoSupported=_back4k30VideoSupported;
@property(readonly, nonatomic, getter=isFront4k24VideoSupported) _Bool front4k24VideoSupported; // @synthesize front4k24VideoSupported=_front4k24VideoSupported;
@property(readonly, nonatomic, getter=isBack4k24VideoSupported) _Bool back4k24VideoSupported; // @synthesize back4k24VideoSupported=_back4k24VideoSupported;
@property(readonly, nonatomic) long long front1080pMaxFPS; // @synthesize front1080pMaxFPS=_front1080pMaxFPS;
@property(readonly, nonatomic) long long back1080pMaxFPS; // @synthesize back1080pMaxFPS=_back1080pMaxFPS;
@property(readonly, nonatomic) long long front720pMaxFPS; // @synthesize front720pMaxFPS=_front720pMaxFPS;
@property(readonly, nonatomic) long long back720pMaxFPS; // @synthesize back720pMaxFPS=_back720pMaxFPS;
@property(readonly, nonatomic) long long maximumRecordedFileSize; // @synthesize maximumRecordedFileSize=_maximumRecordedFileSize;
@property(readonly, nonatomic, getter=isStillDuringVideoSupported) _Bool stillDuringVideoSupported; // @synthesize stillDuringVideoSupported=_stillDuringVideoSupported;
@property(readonly, nonatomic, getter=isVideoSupported) _Bool videoSupported; // @synthesize videoSupported=_videoSupported;
@property(readonly, nonatomic, getter=isSquareModeSupported) _Bool squareModeSupported; // @synthesize squareModeSupported=_squareModeSupported;
@property(readonly, nonatomic, getter=isFrontBurstSupported) _Bool frontBurstSupported; // @synthesize frontBurstSupported=_frontBurstSupported;
@property(readonly, nonatomic, getter=isBackBurstSupported) _Bool backBurstSupported; // @synthesize backBurstSupported=_backBurstSupported;
@property(readonly, nonatomic, getter=isNaturalLightingAppliedToOriginal) _Bool naturalLightingAppliedToOriginal; // @synthesize naturalLightingAppliedToOriginal=_naturalLightingAppliedToOriginal;
@property(readonly, nonatomic, getter=arePortraitEffectsSupported) _Bool portraitEffectsSupported; // @synthesize portraitEffectsSupported=_portraitEffectsSupported;
@property(readonly, nonatomic, getter=isLiveFilteringSupported) _Bool liveFilteringSupported; // @synthesize liveFilteringSupported=_liveFilteringSupported;
@property(readonly, nonatomic, getter=isFrontIrisSupported) _Bool frontIrisSupported; // @synthesize frontIrisSupported=_frontIrisSupported;
@property(readonly, nonatomic, getter=isBackIrisSupported) _Bool backIrisSupported; // @synthesize backIrisSupported=_backIrisSupported;
@property(readonly, nonatomic, getter=isModernHDRSupported) _Bool modernHDRSupported; // @synthesize modernHDRSupported=_modernHDRSupported;
@property(readonly, nonatomic, getter=isPreviewDuringHDRSupported) _Bool previewSupportedDuringHDR; // @synthesize previewSupportedDuringHDR=_previewSupportedDuringHDR;
@property(readonly, nonatomic, getter=isFrontHDROnSupported) _Bool frontHDROnSupported; // @synthesize frontHDROnSupported=_frontHDROnSupported;
@property(readonly, nonatomic, getter=isFrontAutomaticHDRSupported) _Bool frontAutomaticHDRSupported; // @synthesize frontAutomaticHDRSupported=_frontAutomaticHDRSupported;
@property(readonly, nonatomic, getter=isFrontHDRSupported) _Bool frontHDRSupported; // @synthesize frontHDRSupported=_frontHDRSupported;
@property(readonly, nonatomic, getter=isBackHDROnSupported) _Bool backHDROnSupported; // @synthesize backHDROnSupported=_backHDROnSupported;
@property(readonly, nonatomic, getter=isBackAutomaticHDRSupported) _Bool backAutomaticHDRSupported; // @synthesize backAutomaticHDRSupported=_backAutomaticHDRSupported;
@property(readonly, nonatomic, getter=isBackHDRSupported) _Bool backHDRSupported; // @synthesize backHDRSupported=_backHDRSupported;
@property(readonly, nonatomic, getter=isFrontTorchSupported) _Bool frontTorchSupported; // @synthesize frontTorchSupported=_frontTorchSupported;
@property(readonly, nonatomic, getter=isBackTorchSupported) _Bool backTorchSupported; // @synthesize backTorchSupported=_backTorchSupported;
@property(readonly, nonatomic, getter=isFrontFlashSupported) _Bool frontFlashSupported; // @synthesize frontFlashSupported=_frontFlashSupported;
@property(readonly, nonatomic, getter=isBackFlashSupported) _Bool backFlashSupported; // @synthesize backFlashSupported=_backFlashSupported;
@property(readonly, nonatomic, getter=isFrontCameraSupported) _Bool frontCameraSupported; // @synthesize frontCameraSupported=_frontCameraSupported;
@property(readonly, nonatomic, getter=isBackCameraSupported) _Bool backCameraSupported; // @synthesize backCameraSupported=_backCameraSupported;
- (double)maximumZoomFactorForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3;
- (_Bool)isZoomAllowedForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3;
- (_Bool)shouldUseDepthForMode:(long long)arg1 device:(long long)arg2;
- (_Bool)isDepthSupportedForMode:(long long)arg1 devicePosition:(long long)arg2;
- (_Bool)isDepthSupportedForDevicePosition:(long long)arg1;
- (_Bool)shouldUsePearlForMode:(long long)arg1 device:(long long)arg2;
- (_Bool)isPearlSupportedForMode:(long long)arg1 devicePosition:(long long)arg2;
- (_Bool)isPearlSupportedForDevicePosition:(long long)arg1;
- (double)dualCameraSwitchOverZoomFactorForDevicePosition:(long long)arg1;
- (_Bool)shouldUseDualForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3;
- (_Bool)isDualSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 videoConfiguration:(long long)arg3;
- (_Bool)isDualSupportedForDevicePosition:(long long)arg1;
- (_Bool)shouldAllowTelephotoToggleForMode:(long long)arg1 devicePosition:(long long)arg2 videoConfiguration:(long long)arg3;
- (_Bool)isTelephotoSupportedForDevicePosition:(long long)arg1;
- (_Bool)isFlashOrTorchSupportedForMode:(long long)arg1 device:(long long)arg2;
- (_Bool)isTorchPatternSupportedForDevice:(long long)arg1;
- (_Bool)isPortraitModeSupportedForDevice:(long long)arg1;
- (_Bool)isTimelapseSupportedForDevice:(long long)arg1;
- (_Bool)isPanoramaSupportedForDevice:(long long)arg1;
- (_Bool)is1080p240SupportedForDevice:(long long)arg1;
- (_Bool)is1080p120SupportedForDevice:(long long)arg1;
- (_Bool)is720p240SupportedForDevice:(long long)arg1;
- (_Bool)isSlomoSupportedForDevice:(long long)arg1;
- (_Bool)isSupportedVideoConfiguration:(long long)arg1 forMode:(long long)arg2 device:(long long)arg3 encodingBehavior:(long long)arg4;
- (_Bool)isSupportedMode:(long long)arg1 withDevice:(long long)arg2;
- (_Bool)is4k60VideoSupportedForDevice:(long long)arg1;
- (_Bool)is4k30VideoSupportedForDevice:(long long)arg1;
- (_Bool)is4k24VideoSupportedForDevice:(long long)arg1;
- (long long)maximumBurstLength;
- (_Bool)_supportsModernHDR;
- (_Bool)_is2017iPhone;
- (double)captureIntervalForDevice:(long long)arg1;
- (_Bool)isBurstSupportedForDevice:(long long)arg1;
- (_Bool)isHDROnSupportedForDevice:(long long)arg1;
- (_Bool)isAutomaticHDRSupportedForDevice:(long long)arg1;
- (_Bool)isIrisSupportedForDevice:(long long)arg1;
- (_Bool)isHDRSupportedForMode:(long long)arg1 device:(long long)arg2;
- (_Bool)isHDRSupportedForDevice:(long long)arg1;
- (_Bool)isTorchSupportedForDevice:(long long)arg1;
- (_Bool)isFlashSupportedForDevice:(long long)arg1;
- (_Bool)isCameraSupportedForDevice:(long long)arg1;
- (_Bool)invertTopBarForLayoutStyle:(long long)arg1;
- (id)init;

@end

