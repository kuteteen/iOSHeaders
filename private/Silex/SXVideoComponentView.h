//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXMediaComponentView.h>

#import "SXFullscreenVideoPlaybackCandidate.h"
#import "SXMediaPlaybackDelegate.h"
#import "SXReachabilityObserver.h"
#import "SXVideoAdProviderDataSource.h"
#import "SXVideoPlayerViewControllerDataSource.h"
#import "SXVideoPlayerViewControllerDelegate.h"
#import "SXViewportChangeListener.h"

@class NSString, SXAdController, SXPosterFrameView, SXVideoAnalyticsRouter, SXVideoComponentAnalyticsReporting, SXVideoPlayerViewController;

@interface SXVideoComponentView : SXMediaComponentView <SXViewportChangeListener, SXMediaPlaybackDelegate, SXVideoPlayerViewControllerDelegate, SXVideoPlayerViewControllerDataSource, SXVideoAdProviderDataSource, SXReachabilityObserver, SXFullscreenVideoPlaybackCandidate>
{
    _Bool _isReceivingViewportDynamicBoundsChanges;
    SXVideoPlayerViewController *_videoPlayerViewController;
    SXAdController *_adController;
    id <SXResourceDataSource> _resourceDataSource;
    id <SXReachabilityProvider> _reachabilityProvider;
    id <SXAppStateMonitor> _appStateMonitor;
    SXPosterFrameView *_posterFrame;
    CDUnknownBlockType _thumbnailRequestCancelHandler;
    SXVideoAnalyticsRouter *_analyticsRouter;
    SXVideoComponentAnalyticsReporting *_videoComponentAnalyticsReporter;
    id <SXScrollObserverManager> _scrollObserverManager;
}

@property(readonly, nonatomic) id <SXScrollObserverManager> scrollObserverManager; // @synthesize scrollObserverManager=_scrollObserverManager;
@property(retain, nonatomic) SXVideoComponentAnalyticsReporting *videoComponentAnalyticsReporter; // @synthesize videoComponentAnalyticsReporter=_videoComponentAnalyticsReporter;
@property(retain, nonatomic) SXVideoAnalyticsRouter *analyticsRouter; // @synthesize analyticsRouter=_analyticsRouter;
@property(copy, nonatomic) CDUnknownBlockType thumbnailRequestCancelHandler; // @synthesize thumbnailRequestCancelHandler=_thumbnailRequestCancelHandler;
@property(retain, nonatomic) SXPosterFrameView *posterFrame; // @synthesize posterFrame=_posterFrame;
@property(nonatomic) _Bool isReceivingViewportDynamicBoundsChanges; // @synthesize isReceivingViewportDynamicBoundsChanges=_isReceivingViewportDynamicBoundsChanges;
@property(readonly, nonatomic) id <SXAppStateMonitor> appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property(readonly, nonatomic) id <SXReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property(readonly, nonatomic) id <SXResourceDataSource> resourceDataSource; // @synthesize resourceDataSource=_resourceDataSource;
@property(readonly, nonatomic) SXAdController *adController; // @synthesize adController=_adController;
@property(retain, nonatomic) SXVideoPlayerViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
- (void).cxx_destruct;
- (_Bool)allowHierarchyRemoval;
- (void)reachabilityChanged:(_Bool)arg1;
- (unsigned long long)analyticsVideoType;
- (unsigned long long)analyticsMediaType;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (id)transitionContentView;
- (_Bool)transitionViewUsesThumbnail;
- (struct CGRect)transitionContentFrame;
- (void)enterFullscreen;
- (_Bool)canEnterFullscreen;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)pausePrerollIfNeeded;
- (_Bool)videoPlayerIsMoreThan50PercentVisible;
- (void)viewport:(id)arg1 interfaceOrientationChangedFromOrientation:(long long)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)unregisterForViewportDynamicBoundsChanges;
- (void)registerForViewportDynamicBoundsChanges;
- (void)pauseMediaPlayback;
- (void)registerAsMediaPlaybackDelegate;
- (CDUnknownBlockType)videoAdWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)videoPlayerViewControllerShouldStartPlayback:(id)arg1;
- (void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg1;
- (id)videoAdForVideoPlayerViewController:(id)arg1;
- (id)videoForVideoPlayerViewController:(id)arg1;
- (void)setupVideoPlayerViewController:(id)arg1;
- (void)playButtonTapped;
- (void)loadPosterFrameImage;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)loadComponent:(id)arg1;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 appStateMonitor:(id)arg6 resourceDataSource:(id)arg7 reachabilityProvider:(id)arg8 adController:(id)arg9 scrollObserverManager:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

