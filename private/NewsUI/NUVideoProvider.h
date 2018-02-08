//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideo.h"
#import "SXVideoProviding.h"

@class NSString, SXTimeline;

@interface NUVideoProvider : NSObject <SXVideo, SXVideoProviding>
{
    _Bool _playbackHasStarted;
    id <NUVideoItem> _videoItem;
    id <SXVideoMetadataProviding> _metadata;
    id <NUVideoEventTracker> _eventTracker;
    SXTimeline *_timeline;
}

@property(readonly, nonatomic) SXTimeline *timeline; // @synthesize timeline=_timeline;
@property(readonly, nonatomic) id <NUVideoEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
@property(nonatomic) __weak id <SXVideoMetadataProviding> metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) id <NUVideoItem> videoItem; // @synthesize videoItem=_videoItem;
@property(nonatomic) _Bool playbackHasStarted; // @synthesize playbackHasStarted=_playbackHasStarted;
- (void).cxx_destruct;
- (void)tappedNowPlaying;
- (void)tappedDiscoverMore;
- (void)tappedAdvance;
- (void)tappedReplay;
- (void)tappedCallToAction;
- (void)configureTimelineForQuartileReporting;
- (id)videoMetadataForCurrentState;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (void)muteStateChanged:(_Bool)arg1;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiated;
- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool allowsCallToActionBar;
@property(readonly, nonatomic) unsigned long long videoType;
@property(readonly, nonatomic, getter=areNeighboringAdsAllowed) _Bool neighboringAdsAreAllowed;
- (id)initWithVideoItem:(id)arg1 eventTracker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

