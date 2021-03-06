//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADBannerViewInternalDelegate.h"
#import "SXVideoAdProviding.h"

@class NSString, SXPrerollAdResponse, SXTimeline, SXVideoAdStateManager;

@interface SXVideoAdProvider : NSObject <ADBannerViewInternalDelegate, SXVideoAdProviding>
{
    id <SXVideoAdProviderDataSource> _dataSource;
    id <SXAnalyticsReporting> _analyticsReporter;
    SXPrerollAdResponse *_response;
    id <SXVideoMetadataProviding> _metadata;
    SXTimeline *_timeline;
    id <SXVideoAdViewControllerProviding> _fullscreenViewControllerProvider;
    SXVideoAdStateManager *_stateManager;
    id <SXVisibilityMonitoring> _videoVisibilityMonitor;
    id <SXVisibilityMonitoring> _videoPlayerVisibilityMonitor;
    id <SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;
}

@property(readonly, nonatomic) id <SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory; // @synthesize analyticsEventInfoFactory=_analyticsEventInfoFactory;
@property(readonly, nonatomic) id <SXVisibilityMonitoring> videoPlayerVisibilityMonitor; // @synthesize videoPlayerVisibilityMonitor=_videoPlayerVisibilityMonitor;
@property(readonly, nonatomic) id <SXVisibilityMonitoring> videoVisibilityMonitor; // @synthesize videoVisibilityMonitor=_videoVisibilityMonitor;
@property(readonly, nonatomic) SXVideoAdStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(readonly, nonatomic) id <SXVideoAdViewControllerProviding> fullscreenViewControllerProvider; // @synthesize fullscreenViewControllerProvider=_fullscreenViewControllerProvider;
@property(readonly, nonatomic) SXTimeline *timeline; // @synthesize timeline=_timeline;
@property(nonatomic) __weak id <SXVideoMetadataProviding> metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) SXPrerollAdResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) id <SXAnalyticsReporting> analyticsReporter; // @synthesize analyticsReporter=_analyticsReporter;
@property(nonatomic) __weak id <SXVideoAdProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)reportEngagementEventWithType:(unsigned long long)arg1;
- (void)configureTimelineForImpressionReporting;
- (void)presentPrivacyStatement;
- (void)presentAction;
@property(readonly, nonatomic) _Bool hasAction;
@property(readonly, nonatomic) double threshold;
@property(readonly, nonatomic) unsigned long long skipThreshold;
- (void)skipped;
- (void)muteStateChanged:(_Bool)arg1;
- (void)tappedToToggleControls;
- (void)exitedFullscreen;
- (void)enteredFullscreen;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiated;
- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithViewControllerProvider:(id)arg1 analyticsEventInfoFactory:(id)arg2 videoPlayerVisibilityMonitor:(id)arg3 videoVisibilityMonitor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

