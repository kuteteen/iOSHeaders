//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPViewController.h>

#import <MediaPlayer/MPSwipableViewDelegate-Protocol.h>
#import <MediaPlayer/MPVideoControllerProtocol-Protocol.h>

@class MPAVController, MPAVItem, MPSwipableView, MPTVOutWindow, MPVideoBackgroundView, MPVideoView, NSString, UIActivityIndicatorView, UIAlertController, UIColor, UIImage, UIView, _UIHostedWindow;
@protocol MPVideoOverlay;

@interface MPVideoViewController : MPViewController <MPVideoControllerProtocol, MPSwipableViewDelegate>
{
    MPVideoBackgroundView *_backgroundView;
    MPSwipableView *_backstopView;
    _Bool _batteryMonitoringWasEnabled;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    unsigned long long _visibleParts;
    unsigned int _tvOutEnabled:1;
    unsigned int _allowsTVOutInBackground:1;
    long long _itemTypeOverride;
    long long _scaleMode;
    long long _scaleModeOverride;
    UIColor *_backstopColor;
    UIActivityIndicatorView *_loadingIndicator;
    MPTVOutWindow *_tvOutWindow;
    unsigned long long _backgroundTaskId;
    int _artworkImageStyle;
    UIImage *_posterImage;
    unsigned int _canAnimateControlsOverlay:1;
    unsigned int _canShowControlsOverlay:1;
    unsigned int _disableControlsAutohide:1;
    unsigned int _playAfterPop:1;
    unsigned int _scheduledLoadingIndicator:1;
    unsigned int _displayPlaybackErrorAlerts:1;
    unsigned int _allowsDetailScrubbing:1;
    unsigned int _attemptAutoPlayWhenControlsHidden:1;
    unsigned int _alwaysAllowHidingControlsOverlay:1;
    unsigned int _hasShownFirstVideoFrame:1;
    unsigned int _allowsWirelessPlayback:1;
    unsigned int _disableAutoRotation:1;
    unsigned int _inlinePlaybackUsesTVOut:1;
    UIAlertController *_alertController;
}

+ (long long)_activityIndicatorViewStyle;
+ (struct CGRect)calculateArtworkImageViewFrameInRect:(struct CGRect)arg1;
+ (_Bool)supportsFullscreenDisplay;
@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts=_visibleParts;
@property(retain, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
@property(nonatomic) long long itemTypeOverride; // @synthesize itemTypeOverride=_itemTypeOverride;
@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts=_disabledParts;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts=_desiredParts;
@property(retain, nonatomic) UIColor *backstopColor; // @synthesize backstopColor=_backstopColor;
@property(nonatomic) int artworkImageStyle; // @synthesize artworkImageStyle=_artworkImageStyle;
- (void).cxx_destruct;
- (void)_updateProgressControlForItem:(id)arg1;
- (void)_updateIdleTimerDisabledFromPlaybackState:(long long)arg1;
- (_Bool)_showDestinationPlaceholder;
- (void)_hideLoadingIndicator;
- (void)_delayedUpdateBackgroundView;
- (_Bool)_canEnableAirPlayVideoRoutes;
- (unsigned long long)disabledPartsForProposedParts:(unsigned long long)arg1;
- (void)backgroundViewDidUpdate;
@property(nonatomic) _Bool alwaysAllowHidingControlsOverlay;
- (void)setControlsOverlayVisible:(_Bool)arg1 animate:(_Bool)arg2 force:(_Bool)arg3;
- (void)setControlsOverlayVisible:(_Bool)arg1 animate:(_Bool)arg2;
@property(nonatomic) _Bool controlsOverlayVisible;
@property(nonatomic) _Bool canShowControlsOverlay;
@property(nonatomic) _Bool canAnimateControlsOverlay;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)handleExternalPlaybackDidChange;
- (void)handleScaleModeChange;
- (void)displayVideoViewOnTV;
- (void)displayVideoViewOnScreen;
- (void)displayVideoView;
- (void)tearDownTVOutWindow;
- (void)_delayedShowLoading;
- (void)_delayedPopForTimeJump;
- (void)_itemDurationDidChange:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_popForTimeJump:(id)arg1;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (void)_updateBackgroundView:(_Bool)arg1;
- (void)videoView_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)videoView_itemTypeAvailableNotification:(id)arg1;
- (void)_videoView_validityChangedNotification:(id)arg1;
- (void)videoView_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_videoView_timedImageMetadataAvailableNotification:(id)arg1;
- (void)_videoView_sizeChangedNotification:(id)arg1;
- (void)_videoView_scaleModeChangedNotification:(id)arg1;
- (void)_videoView_resumeEventsOnlyNotification:(id)arg1;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)_exitPlayerForPlaybackError;
- (void)_videoView_playbackErrorNotification:(id)arg1;
- (void)_videoView_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)arg1;
- (void)_videoView_batteryStateDidChangeNotification:(id)arg1;
- (void)_videoView_availableRoutesDidChangeNotification:(id)arg1;
- (void)_videoView_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_videoView_applicationSuspendedNotification:(id)arg1;
- (void)_endBackgroundTask;
@property(readonly, nonatomic) _Bool viewControllerWillRequestExit;
@property(readonly, nonatomic) _Bool canShowQTAudioOnlyUI;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(readonly, nonatomic, getter=isTransitioningFromFullscreen) _Bool transitioningFromFullscreen;
@property(readonly, nonatomic, getter=isTransitioningToFullscreen) _Bool transitioningToFullscreen;
@property(nonatomic) _Bool displayPlaybackErrorAlerts;
@property(readonly, nonatomic) UIView<MPVideoOverlay> *videoOverlayViewIfLoaded;
@property(readonly, retain, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;
@property(readonly, retain, nonatomic) MPVideoView *videoView;
@property(nonatomic) _Bool allowsTVOutInBackground;
@property(nonatomic) _Bool TVOutEnabled;
@property(retain, nonatomic) MPAVController *player;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)prepareToDisplayVideo;
- (void)removeChildViewController:(id)arg1;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (void)loadView;
- (void)exitFullscreen;
@property(readonly, nonatomic) unsigned int hostedWindowContextID;
@property(readonly, nonatomic) _UIHostedWindow *hostedWindow;
- (void)setUseHostedWindowWhenFullscreen:(_Bool)arg1;
@property(readonly, nonatomic) UIView *artworkImageView;
@property(readonly, nonatomic) _Bool showArtworkForTVOut;
- (void)setControlsNeedLayout;
@property(nonatomic) _Bool inlinePlaybackUsesTVOut;
@property(nonatomic) _Bool disableAutoRotation;
@property(nonatomic) _Bool attemptAutoPlayWhenControlsHidden;
@property(nonatomic) _Bool autoPlayWhenLikelyToKeepUp;
@property(nonatomic) _Bool allowsWirelessPlayback;
@property(nonatomic) _Bool allowsDetailScrubbing;
- (void)toggleScaleMode:(_Bool)arg1;
- (unsigned long long)visiblePartsForProposedParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setScaleModeOverride:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
- (void)setScaleMode:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool disableControlsAutohide;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;
@property(retain, nonatomic) MPAVItem *item;
- (void)_updateAlwaysPlayWheneverPossible;
@property(readonly, nonatomic) _Bool canChangeScaleMode;
@property(readonly, nonatomic) UIView *backgroundView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enableAirPlayVideoRoutesIfNecessary;
- (void)reloadArtworkImageView;
- (id)newArtworkImageView;
- (void)setOrientation:(long long)arg1 animate:(_Bool)arg2;
@property(readonly, nonatomic) _Bool showArtworkInImageView;
- (long long)_itemTypeWithActualTypePreference;
- (struct CGRect)calculateArtworkImageViewFrame;
- (struct CGRect)calculateFullScreenArtworkImageViewFrame;
- (int)displayArtworkImageStyle;
- (_Bool)isFullscreenForLayoutPurposes;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (_Bool)canHideOverlay:(_Bool)arg1;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)setOwnsStatusBar:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long orientation;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) UIView *view;

@end

