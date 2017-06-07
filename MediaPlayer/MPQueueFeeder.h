//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPQueueBehaviorManaging-Protocol.h>
#import <MediaPlayer/NSCoding-Protocol.h>

@class MPModelPlayEvent, NSData, NSMutableDictionary, NSString;
@protocol MPQueueFeederDelegate;

@interface MPQueueFeeder : NSObject <MPQueueBehaviorManaging, NSCoding>
{
    long long _repeatType;
    long long _shuffleType;
    NSMutableDictionary *_nextStartTimes;
    _Bool _requiresQueueChangeVerification;
    id <MPQueueFeederDelegate> _delegate;
    unsigned long long _state;
    NSString *_playActivityFeatureName;
    NSData *_playActivityRecommendationData;
    NSString *_siriReferenceIdentifier;
    NSString *_playbackContextUniqueIdentifier;
    long long _activeShuffleType;
    MPModelPlayEvent *_modelPlayEvent;
    CDStruct_dcf4dde6 _skipLimit;
}

+ (_Bool)supportsStateRestoration;
@property(readonly, nonatomic) MPModelPlayEvent *modelPlayEvent; // @synthesize modelPlayEvent=_modelPlayEvent;
@property(nonatomic) long long activeShuffleType; // @synthesize activeShuffleType=_activeShuffleType;
@property(nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(copy, nonatomic) NSString *playbackContextUniqueIdentifier; // @synthesize playbackContextUniqueIdentifier=_playbackContextUniqueIdentifier;
@property(copy, nonatomic) NSString *siriReferenceIdentifier; // @synthesize siriReferenceIdentifier=_siriReferenceIdentifier;
@property(copy, nonatomic) NSData *playActivityRecommendationData; // @synthesize playActivityRecommendationData=_playActivityRecommendationData;
@property(copy, nonatomic) NSString *playActivityFeatureName; // @synthesize playActivityFeatureName=_playActivityFeatureName;
@property(nonatomic) CDStruct_dcf4dde6 skipLimit; // @synthesize skipLimit=_skipLimit;
@property(nonatomic) _Bool requiresQueueChangeVerification; // @synthesize requiresQueueChangeVerification=_requiresQueueChangeVerification;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <MPQueueFeederDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)player:(id)arg1 shouldContinuePlaybackForNetworkType:(long long)arg2 returningError:(id *)arg3;
- (void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2;
- (void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)playbackInfoForIdentifier:(id)arg1;
- (_Bool)_canPurgeNextStartTimes;
- (void)invalidateRealShuffleType;
- (void)invalidateRealRepeatType;
- (void)invalidateAssets;
- (void)contentsDidChangeWithReplacementPlaybackContext:(id)arg1;
- (void)contentsDidChangeWithPreferredStartIndex:(unsigned long long)arg1 error:(id)arg2;
- (void)contentsDidChangeWithPreferredStartIndex:(unsigned long long)arg1;
- (id)mediaItemForIdentifier:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)metadataItemForIdentifier:(id)arg1;
- (id)itemForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long itemCount;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (_Bool)hasItemForIndex:(unsigned long long)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) long long realShuffleType;
@property(readonly, nonatomic) long long realRepeatType;
- (_Bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)applyVolumeNormalizationForItem:(id)arg1;
@property(readonly, nonatomic) _Bool userCanChangeShuffleAndRepeatType;
@property(readonly, nonatomic) _Bool trackChangesCanEndPlayback;
- (id)preferredLanguages;
@property(readonly, nonatomic) _Bool playerPreparesItemsForPlaybackAsynchronously;
@property(readonly, nonatomic) long long playbackMode;
- (long long)itemTypeForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) Class itemClass;
@property(readonly, nonatomic) _Bool canSkipToPreviousItem;
- (_Bool)canSkipItem:(id)arg1;
@property(readonly, nonatomic) _Bool canSeek;
@property(readonly, nonatomic) _Bool canReorder;
@property(readonly, nonatomic) _Bool allowsUserVisibleUpcomingItems;
- (_Bool)shouldBeginPlaybackOfItem:(id)arg1 error:(id *)arg2;
- (id)errorResolverForItem:(id)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 requireFinalTracklist:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)shuffleItemsWithAnchor:(unsigned long long *)arg1;
- (void)setNextStartTime:(double)arg1 forIndentifier:(id)arg2;
- (_Bool)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)restoreState:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

