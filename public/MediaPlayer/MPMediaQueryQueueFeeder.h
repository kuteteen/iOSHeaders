//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

#import "MPAVRoutingControllerDelegate.h"
#import "MPRTCReportingItemSessionContaining.h"
#import "MPShuffleControllerDataSource.h"

@class MPMediaItem, MPMediaLibraryConnectionAssertion, MPMediaQuery, MPMutableBidirectionalDictionary, MPShuffleController, NSArray, NSDictionary, NSString;

@interface MPMediaQueryQueueFeeder : MPQueueFeeder <MPAVRoutingControllerDelegate, MPRTCReportingItemSessionContaining, MPShuffleControllerDataSource>
{
    MPMediaLibraryConnectionAssertion *_connectionAssertion;
    unsigned long long _feederRevisionID;
    _Bool _hasValidItems;
    _Bool _isSiriInitiated;
    MPMediaQuery *_query;
    NSArray *_queryItems;
    MPShuffleController *_shuffleController;
    vector_bbba3654 _itemPIDs;
    MPMutableBidirectionalDictionary *_indexToIdentifierCache;
    unsigned long long _currentInvalidationRevision;
    NSDictionary *_startTimeModifications;
    NSDictionary *_endTimeModifications;
    _Bool _isPlaylistQueueFeeder;
    MPMediaItem *_cloudDialogAllowedMediaItem;
}

+ (id)_itemsForQuery:(id)arg1 shuffleType:(long long)arg2;
+ (Class)playbackItemMetadataClass;
+ (id)audioSessionModeForMediaType:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) MPMediaItem *cloudDialogAllowedMediaItem; // @synthesize cloudDialogAllowedMediaItem=_cloudDialogAllowedMediaItem;
@property(copy, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_playbackIndexByApplyShuffleType:(long long)arg1 withStartIndex:(unsigned long long)arg2 startIndexMediaItem:(id)arg3 shouldKeepConsistentQueueOrder:(_Bool)arg4;
- (id)_identifierAtIndex:(unsigned long long)arg1;
- (void)_verifyQueueInvalidationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reloadQueryItems;
- (id)_mediaItemForPID:(unsigned long long)arg1;
- (void)_invalidateMediaLibraryValues;
- (unsigned long long)_indexForSongShuffledIndex:(unsigned long long)arg1;
- (unsigned long long)_indexForPersistentID:(unsigned long long)arg1;
- (void)_handleMediaLibraryDidChange;
- (id)_currentEmptyQueueError;
- (void)_libraryDidChangeNotification:(id)arg1;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (unsigned long long)unshuffledIndexOfAVItem:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)modelPlayEvent;
- (unsigned long long)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3;
- (id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)itemCountForShuffleController:(id)arg1;
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (_Bool)supportsAddToQueue;
- (id)playbackInfoForIdentifier:(id)arg1;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned long long *)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2;
- (id)pathAtIndex:(unsigned long long)arg1;
- (long long)itemTypeForIndex:(unsigned long long)arg1;
- (id)itemForIdentifier:(id)arg1;
- (unsigned long long)itemCount;
- (Class)itemClass;
- (_Bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (_Bool)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property(readonly) Class superclass;

@end

