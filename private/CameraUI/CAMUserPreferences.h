//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMCaptureConfiguration, CAMConflictingControlConfiguration, NSDate, NSUserDefaults;

@interface CAMUserPreferences : NSObject
{
    _Bool _didResetTorchMode;
    _Bool _shouldShowGridView;
    _Bool _QRBannersEnabledInSettings;
    _Bool _forceEnableQRBanners;
    _Bool _shouldCaptureHDREV0;
    _Bool _shouldUseModernHDRBehavior;
    _Bool _didAcknowledgePortraitModeDescription;
    _Bool _preserveEffectFilter;
    _Bool _preserveCaptureMode;
    _Bool _preserveLivePhoto;
    _Bool _shouldDisableCameraSwitchingDuringVideoRecording;
    _Bool _lockAsShutterEnabled;
    _Bool _shouldDelayRemotePersistence;
    _Bool _capturesOnTouchDown;
    _Bool _burstFollowsEncoderSettings;
    _Bool __preferHEVCWhenAvailable;
    CAMCaptureConfiguration *_captureConfiguration;
    CAMConflictingControlConfiguration *_conflictingControlConfiguration;
    long long _videoConfiguration;
    long long _slomoConfiguration;
    long long _previewViewAspectMode;
    long long _photoModeLastCapturedEffectFilterType;
    long long _squareModeLastCapturedEffectFilterType;
    long long _portraitModeLastCapturedEffectFilterType;
    NSDate *_resetTimeoutDate;
    double _burstDelayAfterTouchDownCapture;
    long long _overriddenBackCaptureInterval;
    long long _overriddenFrontCaptureInterval;
    NSUserDefaults *__underlyingUserDefaults;
    double __resetTimeoutOverride;
}

+ (long long)defaultLightingTypeForMode:(long long)arg1;
+ (long long)defaultFilterTypeForMode:(long long)arg1;
+ (id)_defaultCaptureConfiguration;
+ (id)preferences;
+ (_Bool)_fallBackToCameraDefaultsForBundleIdentifier:(id)arg1;
@property(readonly, nonatomic) double _resetTimeoutOverride; // @synthesize _resetTimeoutOverride=__resetTimeoutOverride;
@property(readonly, nonatomic) _Bool _preferHEVCWhenAvailable; // @synthesize _preferHEVCWhenAvailable=__preferHEVCWhenAvailable;
@property(retain, nonatomic, getter=_underlyingUserDefaults, setter=_setUnderlyingUserDefaults:) NSUserDefaults *_underlyingUserDefaults; // @synthesize _underlyingUserDefaults=__underlyingUserDefaults;
@property(readonly, nonatomic) long long overriddenFrontCaptureInterval; // @synthesize overriddenFrontCaptureInterval=_overriddenFrontCaptureInterval;
@property(readonly, nonatomic) long long overriddenBackCaptureInterval; // @synthesize overriddenBackCaptureInterval=_overriddenBackCaptureInterval;
@property(readonly, nonatomic) _Bool burstFollowsEncoderSettings; // @synthesize burstFollowsEncoderSettings=_burstFollowsEncoderSettings;
@property(readonly, nonatomic) double burstDelayAfterTouchDownCapture; // @synthesize burstDelayAfterTouchDownCapture=_burstDelayAfterTouchDownCapture;
@property(readonly, nonatomic) _Bool capturesOnTouchDown; // @synthesize capturesOnTouchDown=_capturesOnTouchDown;
@property(readonly, nonatomic) _Bool shouldDelayRemotePersistence; // @synthesize shouldDelayRemotePersistence=_shouldDelayRemotePersistence;
@property(readonly, nonatomic, getter=isLockAsShutterEnabled) _Bool lockAsShutterEnabled; // @synthesize lockAsShutterEnabled=_lockAsShutterEnabled;
@property(readonly, nonatomic) _Bool shouldDisableCameraSwitchingDuringVideoRecording; // @synthesize shouldDisableCameraSwitchingDuringVideoRecording=_shouldDisableCameraSwitchingDuringVideoRecording;
@property(readonly, nonatomic) _Bool preserveLivePhoto; // @synthesize preserveLivePhoto=_preserveLivePhoto;
@property(readonly, nonatomic) _Bool preserveCaptureMode; // @synthesize preserveCaptureMode=_preserveCaptureMode;
@property(readonly, nonatomic) _Bool preserveEffectFilter; // @synthesize preserveEffectFilter=_preserveEffectFilter;
@property(retain, nonatomic, setter=_setResetTimeoutDate:) NSDate *resetTimeoutDate; // @synthesize resetTimeoutDate=_resetTimeoutDate;
@property(nonatomic) long long portraitModeLastCapturedEffectFilterType; // @synthesize portraitModeLastCapturedEffectFilterType=_portraitModeLastCapturedEffectFilterType;
@property(nonatomic) long long squareModeLastCapturedEffectFilterType; // @synthesize squareModeLastCapturedEffectFilterType=_squareModeLastCapturedEffectFilterType;
@property(nonatomic) long long photoModeLastCapturedEffectFilterType; // @synthesize photoModeLastCapturedEffectFilterType=_photoModeLastCapturedEffectFilterType;
@property(nonatomic) long long previewViewAspectMode; // @synthesize previewViewAspectMode=_previewViewAspectMode;
@property(readonly, nonatomic) long long slomoConfiguration; // @synthesize slomoConfiguration=_slomoConfiguration;
@property(readonly, nonatomic) long long videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(nonatomic) _Bool didAcknowledgePortraitModeDescription; // @synthesize didAcknowledgePortraitModeDescription=_didAcknowledgePortraitModeDescription;
@property(readonly, nonatomic) _Bool shouldUseModernHDRBehavior; // @synthesize shouldUseModernHDRBehavior=_shouldUseModernHDRBehavior;
@property(readonly, nonatomic) _Bool shouldCaptureHDREV0; // @synthesize shouldCaptureHDREV0=_shouldCaptureHDREV0;
@property(nonatomic) _Bool forceEnableQRBanners; // @synthesize forceEnableQRBanners=_forceEnableQRBanners;
@property(readonly, nonatomic) _Bool QRBannersEnabledInSettings; // @synthesize QRBannersEnabledInSettings=_QRBannersEnabledInSettings;
@property(readonly, nonatomic) _Bool shouldShowGridView; // @synthesize shouldShowGridView=_shouldShowGridView;
@property(retain, nonatomic) CAMConflictingControlConfiguration *conflictingControlConfiguration; // @synthesize conflictingControlConfiguration=_conflictingControlConfiguration;
@property(retain, nonatomic) CAMCaptureConfiguration *captureConfiguration; // @synthesize captureConfiguration=_captureConfiguration;
@property(nonatomic, setter=_setDidResetTorchMode:) _Bool didResetTorchMode; // @synthesize didResetTorchMode=_didResetTorchMode;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long photoEncodingBehavior;
- (long long)videoEncodingBehaviorForConfiguration:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldShowQRBanners;
- (_Bool)shouldResetCaptureConfiguration;
- (void)writePreferences;
- (_Bool)readPreferencesWithLaunchOptions:(id)arg1 emulationMode:(long long)arg2 callActive:(_Bool)arg3;
- (long long)_sanitizeLightingType:(long long)arg1 forMode:(long long)arg2;
- (long long)_sanitizeEffectFilterType:(long long)arg1 forMode:(long long)arg2;
- (id)filterTypesForMode:(long long)arg1;

@end

