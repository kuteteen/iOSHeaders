//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVKeyValueObservationController, AVPlayerController, AVUserInteractionObserverGestureRecognizer, NSMapTable, NSTimer, UIView, UIViewPropertyAnimator;
@protocol AVPlaybackControlsVisibilityControllerDelegate;

@interface AVPlaybackControlsVisibilityController : NSObject
{
    UIViewPropertyAnimator *_visibilityAnimator;
    AVKeyValueObservationController *_keyValueObservationController;
    NSMapTable *_viewsAndViewInfos;
    AVUserInteractionObserverGestureRecognizer *_userInteractionObserverGestureRecognizer;
    double _animationDuration;
    _Bool _visibilityNeedsUpdate;
    _Bool _prefersRegularViewsVisible;
    double _prefersViewsVisibleTimerInterval;
    double _prefersViewsVisibleTimerIntervalForQuicklyHiding;
    NSTimer *_prefersRegularViewsVisibleTimer;
    _Bool _prefersViewsShownForVolumeChangeVisible;
    double _prefersViewsShownForVolumeChangeVisibleTimerInterval;
    NSTimer *_prefersViewsShownForVolumeChangeVisibleTimer;
    _Bool _hidesViewQuicklyWhenPlaybackBegins;
    _Bool _popoverPresented;
    _Bool _pictureInPictureActive;
    _Bool _scrubbing;
    _Bool _transitionInProgress;
    _Bool _playbackWasPausedAndVisibilityNotToggledAfterPausing;
    _Bool _inAutoplayPhase;
    _Bool _temporarilyAvoidAnimationsWhenStartingToControlViewVisibility;
    id <AVPlaybackControlsVisibilityControllerDelegate> _delegate;
    _Bool _canHideViews;
    AVPlayerController *_playerController;
    UIView *_viewForUserInteractionObservation;
}

@property(nonatomic) __weak UIView *viewForUserInteractionObservation; // @synthesize viewForUserInteractionObservation=_viewForUserInteractionObservation;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic, getter=isPopoverPresented) _Bool popoverPresented; // @synthesize popoverPresented=_popoverPresented;
@property(nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive; // @synthesize pictureInPictureActive=_pictureInPictureActive;
@property(nonatomic) _Bool canHideViews; // @synthesize canHideViews=_canHideViews;
@property __weak id <AVPlaybackControlsVisibilityControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (_Bool)_userIsInteractingWithViews;
- (void)_showInitiallyHiddenViews;
- (void)_hideRegularViews;
- (void)_stopTimerToHideRegularControlsIfPlaying;
- (void)_startTimerToHideRegularViewsAfterDelay:(double)arg1 ifPlaying:(_Bool)arg2;
- (void)_startTimerToHideRegularViews;
- (void)_startTimerToHideRegularViewsIfPlaying;
- (void)_showRegularViewsAndHideAfterDelayIfPlaying;
- (void)_showRegularViewsAndHideAfterDelay;
- (void)_showRegularViews;
- (void)_hideViewsShownForVolumeChange;
- (void)_stopTimerToHideViewsShownForVolumeChangeIfPlaying;
- (void)_startTimerToHideViewsShownForVolumeChange;
- (void)_showViewsShownForVolumeChangeAndHideAfterDelay;
- (void)_showViewsShownForVolumeChange;
- (void)_handleUserInteractionObservationRecognizer:(id)arg1;
- (_Bool)_hasViewsThatCanBeHidden;
- (_Bool)_hasViewsThatCanBeShown;
- (id)_viewsPassingTest:(CDUnknownBlockType)arg1;
- (void)_exitAutoplayPhaseIfNeeded;
- (void)_updateControlViewVisibilityIfNeeded;
- (void)_setVisibilityNeedsUpdate;
- (void)_updateVisibilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startControllingVisibilityIfNeeded;
- (void)stopControllingVisibilityOfView:(id)arg1;
- (void)startControllingVisibilityOfView:(id)arg1 visibilityBehaviorOptions:(long long)arg2;
- (void)toggleVisibility;
- (void)endTransition;
- (void)beginTransitionAndHideViewsAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)temporarilyAvoidAnimationsWhenStartingToControlViewVisibility;
- (void)flashAutoplayControls;
- (void)enterAutoplayPhase;
@property(readonly, nonatomic) _Bool showsViewPreferingStatusBarVisible;
- (void)stopHidingViewQuicklyWhenPlaybackBegins;
- (void)startHidingViewQuicklyWhenPlaybackBegins;
- (void)activeAudioRouteOrSystemVolumeDidChange;
- (void)dealloc;
- (id)init;
@property double volumeChangeHidePlaybackControlTimerInterval;
@property double hideViewsQuicklyTimerInterval;
@property double hideViewsTimerInterval;
@property double animationDuration;

@end

