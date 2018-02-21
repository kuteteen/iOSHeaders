//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVPlayerViewControllerContentViewDelegate.h"
#import "AVRoutePickerViewDelegate.h"
#import "AVTransportControlsViewDelegate.h"
#import "_UIScrollViewScrollObserver.h"

@class AVKeyValueObservationController, AVPictureInPictureController, AVPlaybackControlsView, AVPlayerController, AVPlayerControllerTimeResolver, AVPlayerViewController, AVRouteDetectorCoordinator, AVTimeFormatter, AVVolumeController, NSString, NSTimer, UIAlertController, UIScrollView, UIViewPropertyAnimator;

@interface AVPlaybackControlsController : NSObject <AVTransportControlsViewDelegate, AVRoutePickerViewDelegate, _UIScrollViewScrollObserver, AVPlayerViewControllerContentViewDelegate>
{
    _Bool _playerViewControllerIsBeingTransitioned;
    _Bool _playerViewControllerIsPresentingFullScreen;
    _Bool _playerViewControllerIsPresentedFullScreen;
    _Bool _playerViewControllerHasInvalidViewControllerHierarchy;
    _Bool _entersFullScreenWhenPlaybackBegins;
    _Bool _canHideInteractiveContentOverlayView;
    _Bool _allowsEnteringFullScreen;
    _Bool _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
    _Bool _showsPictureInPictureButton;
    _Bool _showsPlaybackControls;
    _Bool _requiresLinearPlayback;
    _Bool _showsDoneButtonWhenFullScreen;
    _Bool _prefersAssetInspectionSuspended;
    _Bool _playingOnSecondScreen;
    _Bool _showsLoadingIndicator;
    _Bool _prefersVolumeSliderExpanded;
    _Bool _includesVideoGravityButton;
    _Bool _suspended;
    _Bool _needsTimeResolver;
    _Bool _coveringWindow;
    _Bool _descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen;
    _Bool _hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
    _Bool _multipleRoutesDetected;
    _Bool _resumingUpdates;
    _Bool _playbackSuspendedForScrubbing;
    _Bool _hasSeekableLiveStreamingContent;
    _Bool _scrubbingOrSeeking;
    _Bool _shouldIgnoreTimeResolverUpdates;
    AVKeyValueObservationController *_keyValueObservationController;
    AVPlayerController *_playerController;
    long long _preferredUnobscuredArea;
    AVPictureInPictureController *_pictureInPictureController;
    AVVolumeController *_volumeController;
    AVPlayerViewController *_playerViewController;
    AVPlaybackControlsView *_playbackControlsView;
    AVPlayerControllerTimeResolver *_timeResolver;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    UIAlertController *_routePickerAlertController;
    AVRouteDetectorCoordinator *_routeDetectorCoordinator;
    id _AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
    NSTimer *_loadingIndicatorTimer;
    UIViewPropertyAnimator *_collapseExpandSliderAnimator;
    UIScrollView *_containingScrollView;
    double _timeStampOfPreviousObservedScrollViewDidScroll;
    double _loadingIndicatorTimerDelay;
    long long _timeControlStatus;
    long long _videoGravityButtonType;
    NSString *_videoGravity;
    struct CGRect _playbackViewFrame;
}

+ (id)keyPathsForValuesAffectingPlayButtonsShowPauseGlyph;
+ (id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+ (id)keyPathsForValuesAffectingShowsSkipButtons;
+ (id)keyPathsForValuesAffectingSeekingEnabled;
+ (id)keyPathsForValuesAffectingMaximumTime;
+ (id)keyPathsForValuesAffectingMinimumTime;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingShowsMediaSelectionButton;
+ (id)keyPathsForValuesAffectingShouldEnterFullScreenWhenPlaybackBegins;
+ (id)keyPathsForValuesAffectingShowsTransportControls;
+ (id)keyPathsForValuesAffectingProminentPlayButtonCanShowPauseGlyph;
+ (id)keyPathsForValuesAffectingShowsProminentPlayButton;
+ (id)keyPathsForValuesAffectingShowsRoutePickerView;
+ (id)keyPathsForValuesAffectingIncludesFullScreenButton;
+ (id)keyPathsForValuesAffectingIncludesDoneButton;
+ (id)keyPathsForValuesAffectingFullScreen;
@property(nonatomic) struct CGRect playbackViewFrame; // @synthesize playbackViewFrame=_playbackViewFrame;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) long long videoGravityButtonType; // @synthesize videoGravityButtonType=_videoGravityButtonType;
@property(nonatomic) _Bool shouldIgnoreTimeResolverUpdates; // @synthesize shouldIgnoreTimeResolverUpdates=_shouldIgnoreTimeResolverUpdates;
@property(nonatomic, getter=isScrubbingOrSeeking) _Bool scrubbingOrSeeking; // @synthesize scrubbingOrSeeking=_scrubbingOrSeeking;
@property(nonatomic) _Bool hasSeekableLiveStreamingContent; // @synthesize hasSeekableLiveStreamingContent=_hasSeekableLiveStreamingContent;
@property(nonatomic) long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property(nonatomic, getter=isPlaybackSuspendedForScrubbing) _Bool playbackSuspendedForScrubbing; // @synthesize playbackSuspendedForScrubbing=_playbackSuspendedForScrubbing;
@property(nonatomic, getter=isResumingUpdates) _Bool resumingUpdates; // @synthesize resumingUpdates=_resumingUpdates;
@property(nonatomic) double loadingIndicatorTimerDelay; // @synthesize loadingIndicatorTimerDelay=_loadingIndicatorTimerDelay;
@property(nonatomic) _Bool multipleRoutesDetected; // @synthesize multipleRoutesDetected=_multipleRoutesDetected;
@property(nonatomic) _Bool hasPlaybackBegunSincePlayerControllerBecameReadyToPlay; // @synthesize hasPlaybackBegunSincePlayerControllerBecameReadyToPlay=_hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
@property(nonatomic) double timeStampOfPreviousObservedScrollViewDidScroll; // @synthesize timeStampOfPreviousObservedScrollViewDidScroll=_timeStampOfPreviousObservedScrollViewDidScroll;
@property(nonatomic, getter=isDescendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen) _Bool descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen; // @synthesize descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen=_descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen;
@property(nonatomic, getter=isCoveringWindow) _Bool coveringWindow; // @synthesize coveringWindow=_coveringWindow;
@property(nonatomic) _Bool needsTimeResolver; // @synthesize needsTimeResolver=_needsTimeResolver;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) _Bool includesVideoGravityButton; // @synthesize includesVideoGravityButton=_includesVideoGravityButton;
@property(nonatomic) _Bool prefersVolumeSliderExpanded; // @synthesize prefersVolumeSliderExpanded=_prefersVolumeSliderExpanded;
@property(nonatomic) _Bool showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property(nonatomic) __weak UIScrollView *containingScrollView; // @synthesize containingScrollView=_containingScrollView;
@property(nonatomic) __weak UIViewPropertyAnimator *collapseExpandSliderAnimator; // @synthesize collapseExpandSliderAnimator=_collapseExpandSliderAnimator;
@property(nonatomic) __weak NSTimer *loadingIndicatorTimer; // @synthesize loadingIndicatorTimer=_loadingIndicatorTimer;
@property(retain, nonatomic) id AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver; // @synthesize AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver=_AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
@property(retain, nonatomic) AVRouteDetectorCoordinator *routeDetectorCoordinator; // @synthesize routeDetectorCoordinator=_routeDetectorCoordinator;
@property(nonatomic) __weak UIAlertController *routePickerAlertController; // @synthesize routePickerAlertController=_routePickerAlertController;
@property(readonly, nonatomic) AVTimeFormatter *remainingTimeFormatter; // @synthesize remainingTimeFormatter=_remainingTimeFormatter;
@property(readonly, nonatomic) AVTimeFormatter *elapsedTimeFormatter; // @synthesize elapsedTimeFormatter=_elapsedTimeFormatter;
@property(retain, nonatomic) AVPlayerControllerTimeResolver *timeResolver; // @synthesize timeResolver=_timeResolver;
@property(retain, nonatomic) AVPlaybackControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property(readonly, nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
@property(nonatomic) _Bool prefersAssetInspectionSuspended; // @synthesize prefersAssetInspectionSuspended=_prefersAssetInspectionSuspended;
@property(readonly, nonatomic) AVVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) AVPictureInPictureController *pictureInPictureController; // @synthesize pictureInPictureController=_pictureInPictureController;
@property(nonatomic) _Bool showsDoneButtonWhenFullScreen; // @synthesize showsDoneButtonWhenFullScreen=_showsDoneButtonWhenFullScreen;
@property(nonatomic) _Bool requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property(nonatomic) _Bool showsPlaybackControls; // @synthesize showsPlaybackControls=_showsPlaybackControls;
@property(nonatomic) _Bool showsPictureInPictureButton; // @synthesize showsPictureInPictureButton=_showsPictureInPictureButton;
@property(nonatomic) _Bool inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused; // @synthesize inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused=_inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
@property(nonatomic) _Bool allowsEnteringFullScreen; // @synthesize allowsEnteringFullScreen=_allowsEnteringFullScreen;
@property(nonatomic) _Bool canHideInteractiveContentOverlayView; // @synthesize canHideInteractiveContentOverlayView=_canHideInteractiveContentOverlayView;
@property(nonatomic) long long preferredUnobscuredArea; // @synthesize preferredUnobscuredArea=_preferredUnobscuredArea;
@property(nonatomic) _Bool entersFullScreenWhenPlaybackBegins; // @synthesize entersFullScreenWhenPlaybackBegins=_entersFullScreenWhenPlaybackBegins;
@property(nonatomic) _Bool playerViewControllerHasInvalidViewControllerHierarchy; // @synthesize playerViewControllerHasInvalidViewControllerHierarchy=_playerViewControllerHasInvalidViewControllerHierarchy;
@property(nonatomic) _Bool playerViewControllerIsPresentedFullScreen; // @synthesize playerViewControllerIsPresentedFullScreen=_playerViewControllerIsPresentedFullScreen;
@property(nonatomic) _Bool playerViewControllerIsPresentingFullScreen; // @synthesize playerViewControllerIsPresentingFullScreen=_playerViewControllerIsPresentingFullScreen;
@property(nonatomic) _Bool playerViewControllerIsBeingTransitioned; // @synthesize playerViewControllerIsBeingTransitioned=_playerViewControllerIsBeingTransitioned;
@property(nonatomic) __weak AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (void)_updateSuspended;
- (void)_updateHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(_Bool)arg1 playing:(_Bool)arg2 userDidEndTappingProminentPlayButton:(_Bool)arg3;
- (void)_updateVideoGravityButtonType;
- (void)_updateScrubberAndTimeLabels;
- (void)_updateOrCreateTimeResolverIfNeeded;
- (void)_stopVisibilityControllerManagementOfViewVisibilityIfNeeded;
- (void)_startOrUpdateVisibilityControllerManagementOfViewVisibility;
- (void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
- (void)_seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)_observeBoolForKeyPath:(id)arg1 observationHandler:(CDUnknownBlockType)arg2;
- (void)_bindInclusionOfControlItems:(id)arg1 toKeyPath:(id)arg2;
- (void)_bindEnabledStateOfControls:(id)arg1 toKeyPath:(id)arg2;
@property(readonly, nonatomic) AVKeyValueObservationController *keyValueObservationController; // @synthesize keyValueObservationController=_keyValueObservationController;
- (void)skipButtonForcePressChanged:(id)arg1;
- (void)skipButtonLongPressEnded:(id)arg1;
- (void)skipButtonLongPressTriggered:(id)arg1;
- (void)skipButtonTouchUpInside:(id)arg1;
- (void)prominentPlayButtonTouchUpInside:(id)arg1;
- (void)_updateContainedInTrackingOrAnimatingScrollView;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)_updateVolumeSliderValueWithSystemVolume:(float)arg1 animated:(_Bool)arg2;
- (id)_volumeButtonMicaPackageState;
- (void)_updateVolumeButtonGlyph;
- (void)_showOrHideVolumeSlider;
- (_Bool)_prefersVolumeSliderExpandedAutomatically;
- (void)volumeButtonPanChanged:(id)arg1;
- (void)volumeButtonLongPressTriggered:(id)arg1;
- (void)volumeButtonTapTriggered:(id)arg1;
- (void)volumeSliderValueDidChange:(id)arg1;
- (void)handleCurrentRouteSupportsVolumeControlChanged:(id)arg1;
- (void)handleVolumeChange:(id)arg1;
- (void)transportControls:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidScrub:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
- (void)transportControlsNeedsLayoutIfNeeded:(id)arg1;
- (_Bool)playerViewControllerContentViewIsBeingTransitionedToOrFromFullScreen:(id)arg1;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1;
- (_Bool)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1;
- (void)playerViewControllerContentViewDidLayoutSubviews:(id)arg1;
- (void)playerViewControllerContentViewDidMoveToWindow:(id)arg1;
- (void)playerViewControllerContentView:(id)arg1 didLoadPlaybackControlsView:(id)arg2;
- (_Bool)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg1;
- (void)playbackControlsVisibilityDidChange;
- (void)visibilityControllerWillShowView:(id)arg1;
- (void)playbackControlsViewDidLoad:(id)arg1;
@property(readonly, nonatomic) _Bool playButtonsShowPauseGlyph;
@property(readonly, nonatomic) _Bool canShowLoadingIndicator;
@property(readonly, nonatomic) _Bool showsSkipButtons;
@property(readonly, nonatomic, getter=isSeekingEnabled) _Bool seekingEnabled;
@property(readonly, nonatomic) double maximumTime;
@property(readonly, nonatomic) double minimumTime;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double targetTime;
@property(readonly, nonatomic) _Bool showsMediaSelectionButton;
@property(readonly, nonatomic) _Bool shouldEnterFullScreenWhenPlaybackBegins;
@property(readonly, nonatomic) _Bool showsTransportControls;
@property(readonly, nonatomic) _Bool prominentPlayButtonCanShowPauseGlyph;
@property(readonly, nonatomic) _Bool showsProminentPlayButton;
@property(readonly, nonatomic) _Bool showsRoutePickerView;
@property(readonly, nonatomic) _Bool includesFullScreenButton;
@property(readonly, nonatomic) _Bool includesDoneButton;
@property(readonly, nonatomic, getter=isFullScreen) _Bool fullScreen;
- (void)stopUpdates;
- (void)resumeUpdates;
- (void)dealloc;
- (id)initWithPlayerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

