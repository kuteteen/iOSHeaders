//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUScrubberSettings : PXSettings
{
    _Bool _usePreviewScrubberMargins;
    _Bool _useTrianglePositionIndicator;
    _Bool _useSmoothingAnimation;
    _Bool _dynamicSeekTolerance;
    unsigned long long _previewInteractiveLoupeBehavior;
    unsigned long long _interactiveLoupeBehavior;
    double _tapAnimationDuration;
    double _smoothingAnimationDuration;
    double _settleAnimationDuration;
    double _settleRequiredDecelerationDistance;
    double _decelerationTargetExpansionDistance;
    double _verticalMargin;
    double _topOutset;
    double _slitAspectRatio;
    double _maxAspectRatio;
    double _interItemSpacing;
    double _interSectionSpacing;
    double _minVideoDuration;
    double _baseVideoWidth;
    double _filmstripAspectRatio;
    long long _defaultPlaybackIndicator;
    long long _initialPlaybackIndicator;
    long long _scrubbingPlaybackIndicator;
    long long _chromeShownPlaybackIndicator;
    long long _playingPlaybackIndicator;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) long long playingPlaybackIndicator; // @synthesize playingPlaybackIndicator=_playingPlaybackIndicator;
@property(nonatomic) long long chromeShownPlaybackIndicator; // @synthesize chromeShownPlaybackIndicator=_chromeShownPlaybackIndicator;
@property(nonatomic) long long scrubbingPlaybackIndicator; // @synthesize scrubbingPlaybackIndicator=_scrubbingPlaybackIndicator;
@property(nonatomic) long long initialPlaybackIndicator; // @synthesize initialPlaybackIndicator=_initialPlaybackIndicator;
@property(nonatomic) long long defaultPlaybackIndicator; // @synthesize defaultPlaybackIndicator=_defaultPlaybackIndicator;
@property(nonatomic) _Bool dynamicSeekTolerance; // @synthesize dynamicSeekTolerance=_dynamicSeekTolerance;
@property(nonatomic) double filmstripAspectRatio; // @synthesize filmstripAspectRatio=_filmstripAspectRatio;
@property(nonatomic) double baseVideoWidth; // @synthesize baseVideoWidth=_baseVideoWidth;
@property(nonatomic) double minVideoDuration; // @synthesize minVideoDuration=_minVideoDuration;
@property(nonatomic) _Bool useSmoothingAnimation; // @synthesize useSmoothingAnimation=_useSmoothingAnimation;
@property(nonatomic) double interSectionSpacing; // @synthesize interSectionSpacing=_interSectionSpacing;
@property(nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) double maxAspectRatio; // @synthesize maxAspectRatio=_maxAspectRatio;
@property(nonatomic) double slitAspectRatio; // @synthesize slitAspectRatio=_slitAspectRatio;
@property(nonatomic) double topOutset; // @synthesize topOutset=_topOutset;
@property(nonatomic) double verticalMargin; // @synthesize verticalMargin=_verticalMargin;
@property(nonatomic) double decelerationTargetExpansionDistance; // @synthesize decelerationTargetExpansionDistance=_decelerationTargetExpansionDistance;
@property(nonatomic) double settleRequiredDecelerationDistance; // @synthesize settleRequiredDecelerationDistance=_settleRequiredDecelerationDistance;
@property(nonatomic) double settleAnimationDuration; // @synthesize settleAnimationDuration=_settleAnimationDuration;
@property(nonatomic) double smoothingAnimationDuration; // @synthesize smoothingAnimationDuration=_smoothingAnimationDuration;
@property(nonatomic) double tapAnimationDuration; // @synthesize tapAnimationDuration=_tapAnimationDuration;
@property(nonatomic) unsigned long long interactiveLoupeBehavior; // @synthesize interactiveLoupeBehavior=_interactiveLoupeBehavior;
@property(nonatomic) _Bool useTrianglePositionIndicator; // @synthesize useTrianglePositionIndicator=_useTrianglePositionIndicator;
@property(nonatomic) _Bool usePreviewScrubberMargins; // @synthesize usePreviewScrubberMargins=_usePreviewScrubberMargins;
@property(nonatomic) unsigned long long previewInteractiveLoupeBehavior; // @synthesize previewInteractiveLoupeBehavior=_previewInteractiveLoupeBehavior;
- (void)setDefaultValues;
- (id)parentSettings;

@end

