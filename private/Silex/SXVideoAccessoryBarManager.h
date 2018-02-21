//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoControlItem.h"
#import "SXVideoTransitionObserver.h"

@class NSString, NSTimer, SXTimeBasedAction, SXTimeline, SXVideoAccessoryBarViewController;

@interface SXVideoAccessoryBarManager : NSObject <SXVideoTransitionObserver, SXVideoControlItem>
{
    SXVideoAccessoryBarViewController *_accessoryBarViewController;
    SXTimeline *_timeline;
    id <SXVideoControlTimingProviding> _timingProvider;
    id <SXVideoAccessoryItem> _nowPlayingItem;
    id <SXVideoAccessoryItem> _moreFromItem;
    id <SXVideoAccessoryItem> _replayItem;
    id <SXVideoAccessoryItem> _upNextItem;
    id <SXVideoAccessoryItem> _discoverMoreItem;
    id <SXVideoQueueProviding> _queueProvider;
    id <SXVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
    id <SXVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id <SXVideoPlaybackStateObserving> _playbackStateObserver;
    id <SXVideoLoadingStateObserving> _loadingStateObserver;
    SXTimeBasedAction *_trailingItemExpansionAction;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) SXTimeBasedAction *trailingItemExpansionAction; // @synthesize trailingItemExpansionAction=_trailingItemExpansionAction;
@property(retain, nonatomic) id <SXVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property(retain, nonatomic) id <SXVideoPlaybackStateObserving> playbackStateObserver; // @synthesize playbackStateObserver=_playbackStateObserver;
@property(readonly, nonatomic) id <SXVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SXVideoPlaybackStateObserverFactory> playbackStateObserverFactory; // @synthesize playbackStateObserverFactory=_playbackStateObserverFactory;
@property(readonly, nonatomic) id <SXVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
@property(readonly, nonatomic) id <SXVideoAccessoryItem> discoverMoreItem; // @synthesize discoverMoreItem=_discoverMoreItem;
@property(readonly, nonatomic) id <SXVideoAccessoryItem> upNextItem; // @synthesize upNextItem=_upNextItem;
@property(readonly, nonatomic) id <SXVideoAccessoryItem> replayItem; // @synthesize replayItem=_replayItem;
@property(readonly, nonatomic) id <SXVideoAccessoryItem> moreFromItem; // @synthesize moreFromItem=_moreFromItem;
@property(readonly, nonatomic) id <SXVideoAccessoryItem> nowPlayingItem; // @synthesize nowPlayingItem=_nowPlayingItem;
@property(readonly, nonatomic) id <SXVideoControlTimingProviding> timingProvider; // @synthesize timingProvider=_timingProvider;
@property(readonly, nonatomic) SXTimeline *timeline; // @synthesize timeline=_timeline;
@property(readonly, nonatomic) SXVideoAccessoryBarViewController *accessoryBarViewController; // @synthesize accessoryBarViewController=_accessoryBarViewController;
- (void).cxx_destruct;
- (void)hide:(_Bool)arg1 withAnimationCoordinator:(id)arg2;
@property(readonly, nonatomic) _Bool supportsAutoAppearance;
@property(readonly, nonatomic) _Bool hideable;
- (_Bool)isVisible;
- (void)cancelScheduledNowPlayingOrMoreFromTransition;
- (void)scheduleTransitionToLeadingItem:(id)arg1 withTimeInterval:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)scheduleMoreFromTransition;
- (void)scheduleNowPlayingTransition;
- (void)scheduleNowPlayingOrMoreFromTransition;
- (void)scheduleDisplayOfReplayItemWithTrailingItemExpansionWithTimeInterval:(double)arg1;
- (void)cancelDisplayOfReplayItemWithTrailingItemExpansion;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithTimeline:(id)arg1 timingProvider:(id)arg2 accessoryBarViewController:(id)arg3 nowPlayingAccessoryItem:(id)arg4 moreFromAccessoryItem:(id)arg5 replayAccessoryItem:(id)arg6 upNextAccessoryItem:(id)arg7 discoverMoreAccessoryItem:(id)arg8 playbackStateObserverFactory:(id)arg9 queueProvider:(id)arg10 loadingStateObserverFactory:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

