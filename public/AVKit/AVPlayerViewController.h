//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AVFullScreenViewControllerDelegate.h"
#import "AVPictureInPictureControllerDelegate.h"
#import "AVPlaybackControlsVisibilityControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class AVAppBasedStatusBarAppearanceController, AVFullScreenViewController, AVNowPlayingInfoController, AVPictureInPictureController, AVPlaybackControlsController, AVPlaybackControlsVisibilityController, AVPlayer, AVPlayerController, AVPlayerView, AVPlayerViewControllerContentView, AVTransitionController, NSDictionary, NSString, UIPopoverPresentationController, UIScreen, UIView, UIWindow, __AVPlayerLayerView;

@interface AVPlayerViewController : UIViewController <AVPictureInPictureControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, AVPlaybackControlsVisibilityControllerDelegate, AVFullScreenViewControllerDelegate>
{
    AVPlayerController *_playerController;
    _Bool _playerShouldAutoplay;
    _Bool _showsPlaybackControls;
    _Bool _requiresLinearPlayback;
    _Bool _canChangeStatusBarHidden;
    long long _videoGravity;
    _Bool _allowsPictureInPicturePlayback;
    _Bool _hasClientSetVideoGravity;
    NSDictionary *_pixelBufferAttributes;
    AVNowPlayingInfoController *_nowPlayingInfoController;
    AVPictureInPictureController *_pictureInPictureController;
    UIPopoverPresentationController *_mediaSelectionPopoverPresentationController;
    AVTransitionController *_transitionController;
    AVPlaybackControlsVisibilityController *_playbackControlsVisibilityController;
    AVPlaybackControlsController *_playbackControlsController;
    AVAppBasedStatusBarAppearanceController *_appBasedStatusBarAppearanceController;
    AVPlayerView *_playerViewControllerView;
    __AVPlayerLayerView *_playerLayerView;
    id _screenDidConnectObserver;
    id _screenDidDisconnectObserver;
    id _screenModeDidChangeObserver;
    id _activeAudioRouteDidChangeObserver;
    id _nowPlayingControllerDidReceiveStopCommandEventObserver;
    id _applicationSuspendedObserver;
    id _playerControllerPlaybackDidEndObserver;
    _Bool _playbackControlsViewControllerPictureInPictureButtonEnabled;
    _Bool _transitionFromFullScreenOrDismissViewControllerWhenEnteringBackgroundAfterPictureInPictureStart;
    id <AVPlayerViewControllerDelegate> _delegate;
    struct {
        _Bool playerViewControllerWillStartPictureInPicture;
        _Bool playerViewControllerDidStartPictureInPicture;
        _Bool playerViewController_failedToStartPictureInPictureWithError;
        _Bool playerViewControllerWillStopPictureInPicture;
        _Bool playerViewControllerDidStopPictureInPicture;
        _Bool playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart;
        _Bool playerViewController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler;
        _Bool playerViewController_shouldExitFullScreenWithReason;
        _Bool playerViewControllerWillExitAutoplayPhase;
    } _delegateRespondsTo;
    _Bool _showsExitFullScreenButton;
    _Bool _entersFullScreenWhenPlaybackBegins;
    _Bool _exitsFullScreenWhenPlaybackEnds;
    _Bool _shouldUseNetworkingResourcesForLiveStreamingWhilePaused;
    AVFullScreenViewController *_fullScreenViewController;
    UIWindow *_secondScreenWindow;
    UIScreen *_playbackTargetScreen;
    CDUnknownBlockType _finishPreparingForInteractiveDismissalHandler;
    CDUnknownBlockType _interactiveDismissalCompletionHandler;
}

+ (id)keyPathsForValuesAffectingPixelBufferAttributes;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoGravity;
+ (id)keyPathsForValuesAffectingPlayer;
+ (id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;
+ (id)keyPathsForValuesAffectingPictureInPictureSuspended;
+ (id)keyPathsForValuesAffectingPictureInPictureActive;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
@property(copy, nonatomic) CDUnknownBlockType interactiveDismissalCompletionHandler; // @synthesize interactiveDismissalCompletionHandler=_interactiveDismissalCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType finishPreparingForInteractiveDismissalHandler; // @synthesize finishPreparingForInteractiveDismissalHandler=_finishPreparingForInteractiveDismissalHandler;
@property(nonatomic) _Bool shouldUseNetworkingResourcesForLiveStreamingWhilePaused; // @synthesize shouldUseNetworkingResourcesForLiveStreamingWhilePaused=_shouldUseNetworkingResourcesForLiveStreamingWhilePaused;
@property(retain, nonatomic) UIScreen *playbackTargetScreen; // @synthesize playbackTargetScreen=_playbackTargetScreen;
@property(retain, nonatomic) UIWindow *secondScreenWindow; // @synthesize secondScreenWindow=_secondScreenWindow;
@property(nonatomic) __weak AVFullScreenViewController *fullScreenViewController; // @synthesize fullScreenViewController=_fullScreenViewController;
@property(nonatomic) _Bool exitsFullScreenWhenPlaybackEnds; // @synthesize exitsFullScreenWhenPlaybackEnds=_exitsFullScreenWhenPlaybackEnds;
@property(nonatomic) _Bool entersFullScreenWhenPlaybackBegins; // @synthesize entersFullScreenWhenPlaybackBegins=_entersFullScreenWhenPlaybackBegins;
- (void).cxx_destruct;
- (id)keyCommandResponderForFullScreenViewController:(id)arg1;
- (void)fullScreenViewControllerNeedsAppBasedStatusBarAppearanceUpdate:(id)arg1;
- (_Bool)prefersStatusBarHiddenForFullScreenViewController:(id)arg1;
- (void)fullScreenViewControllerDidEndFullScreenPresentation:(id)arg1 wasInteractive:(_Bool)arg2;
- (id)viewForFullScreenViewController:(id)arg1;
- (void)fullScreenViewControllerWillBeginFullScreenPresentation:(id)arg1;
- (id)transitioningDelegateForFullScreenViewController:(id)arg1;
- (long long)modalPresentationStyleForFullScreenViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)playbackControlsVisibilityControllerWillExitAutoplayPhase:(id)arg1;
- (void)playbackControlsVisibilityController:(id)arg1 animateAlongsideVisibilityAnimations:(id)arg2;
- (void)playbackControlsVisibilityControllerDidChangeViewVisibility:(id)arg1;
- (void)playbackControlsVisibilityController:(id)arg1 updateStatusBarAppearanceUsingAnimator:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_modalPresentationStyleIsFullScreen;
- (_Bool)_isTransitioningToOrFromFullScreen;
- (void)_mediaSelectionDoneButtonTapped:(id)arg1;
- (void)_togglePictureInPicture;
- (void)_transitionFromFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_transitionToFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_canEnterFullScreen;
- (void)_transitionFromFullScreenWithReason:(long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_isDescendantOfRootViewController;
- (void)_loadPlaybackControlsControllersIfNeeded;
- (void)_handleDoubleDoubleTapGesture:(id)arg1;
- (void)_handleSingleTapGesture:(id)arg1;
- (void)_handleDoubleTapGesture:(id)arg1;
- (void)_updatePlaybackControlsController;
- (void)_updatePlayerLayerViewAndContentOverlayViewExcludingScreen:(id)arg1;
- (void)_updatePlayerLayerViewAndContentOverlayView;
- (void)_updateExternalPlaybackIndicatorView;
- (void)_updateAudioOnlyIndicatorView;
- (_Bool)_isAudioOnlyContent;
- (void)_updateUnsupportedContentIndicatorView;
- (_Bool)_isUnsupportedContent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handleFastForwardKeyReleasedCommand:(id)arg1;
- (void)_handleFastForwardKeyPressedCommand:(id)arg1;
- (void)_handleRewindKeyReleasedCommand:(id)arg1;
- (void)_handleRewindKeyPressedCommand:(id)arg1;
- (void)_handleVolumeDownKeyReleasedCommand:(id)arg1;
- (void)_handleVolumeDownKeyPressedCommand:(id)arg1;
- (void)_handleVolumeUpKeyReleasedCommand:(id)arg1;
- (void)_handleVolumeUpKeyPressedCommand:(id)arg1;
- (void)_handleShowPreviousFrameKeyCommand:(id)arg1;
- (void)_handleGoToBeginningKeyCommand:(id)arg1;
- (void)_handleShowNextFrameKeyCommand:(id)arg1;
- (void)_handleSkipAhead15SecondsKeyCommand:(id)arg1;
- (void)_handleSkipBack15SecondsKeyCommand:(id)arg1;
- (void)_handlePlayPauseKeyCommand:(id)arg1;
- (void)_handleExitFullScreenKeyCommand:(id)arg1;
- (id)keyCommands;
- (_Bool)canBecomeFirstResponder;
- (_Bool)_ignoreAppSupportedOrientations;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setView:(id)arg1;
- (id)playbackControlsController;
- (void)flashAutoplayControls;
- (void)enterAutoplayPhase;
@property(nonatomic) long long preferredUnobscuredArea;
@property(nonatomic) _Bool canHideInteractiveContentOverlayView;
@property(nonatomic) _Bool requiresLinearPlayback;
@property(nonatomic) _Bool canHidePlaybackControls;
@property(readonly, nonatomic) UIView *interactiveContentOverlayView;
@property(copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property(nonatomic) _Bool updatesNowPlayingInfoCenter;
@property(retain, nonatomic) AVPlayerController *playerController;
@property(nonatomic) __weak id <AVPlayerViewControllerDelegate> delegate;
@property(nonatomic) _Bool allowsPictureInPicturePlayback;
@property(readonly, nonatomic) UIView *contentOverlayView;
@property(readonly, nonatomic) struct CGRect videoBounds;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
- (void)_setVideoGravity:(id)arg1 forLayoutMetrics:(unsigned long long)arg2;
@property(copy, nonatomic) NSString *videoGravity;
@property(nonatomic) _Bool showsPlaybackControls;
@property(retain, nonatomic) AVPlayer *player;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(readonly, nonatomic) UIView *iAdPrerollView;
@property(readonly, nonatomic) _Bool pictureInPictureWasStartedWhenEnteringBackground;
@property(readonly, nonatomic, getter=isPictureInPictureSuspended) _Bool pictureInPictureSuspended;
@property(readonly, nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive;
@property(readonly, nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
- (void)stopPictureInPicture;
- (void)startPictureInPicture;
- (void)exitFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enterFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool showsExitFullScreenButton;
- (id)initWithPlayerLayerView:(id)arg1;
@property(readonly, nonatomic) AVPlaybackControlsVisibilityController *playbackControlsVisibilityController;
- (_Bool)presentRoutingViewController:(id)arg1;
- (void)pictureInPictureButtonTapped:(id)arg1;
- (void)fullScreenButtonTapped:(id)arg1;
- (void)mediaSelectionButtonTapped:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)videoGravityButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
@property(readonly, nonatomic, getter=isPresentedFullScreen) _Bool presentedFullScreen;
@property(readonly, nonatomic, getter=isPresentingFullScreenFromInline) _Bool presentingFullScreenFromInline;
- (void)prepareForFinishingInteractiveTransition:(CDUnknownBlockType)arg1;
- (_Bool)beginInteractiveDismissalTransition;
- (_Bool)canBeginInteractiveDismissalTransition;
- (_Bool)beginInteractivePresentationTransition;
- (_Bool)canBeginInteractivePresentationTransition;
@property(readonly, nonatomic) AVPlayerViewControllerContentView *contentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

