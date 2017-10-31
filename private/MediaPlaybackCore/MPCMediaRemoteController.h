//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSVLRUDictionaryDelegate.h"

@class MPCFuture, MPCPlayerPath, MSVLRUDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MPCMediaRemoteController : NSObject <MSVLRUDictionaryDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPCFuture *_playbackStateFuture;
    long long _playbackStateCacheState;
    MPCFuture *_supportedCommandsFuture;
    long long _supportedCommandsCacheState;
    long long _playingIdentifierCacheState;
    NSString *_playingItemIdentifier;
    struct _MSVSignedRange _maximumLoadedRange;
    NSMutableArray *_contentItemIDs;
    MSVLRUDictionary *_contentItems;
    NSMutableDictionary *_optimisticStateContentItems;
    NSMutableDictionary *_contentItemChanges;
    MSVLRUDictionary *_contentItemArtwork;
    NSMutableDictionary *_contentItemArtworkIdentifiers;
    MPCFuture *_playingItemIdentifierFuture;
    NSMapTable *_contentItemIDsFutures;
    NSMapTable *_contentItemFutures;
    NSMutableDictionary *_contentItemArtworkFutures;
    MPCPlayerPath *_resolvedPlayerPath;
    id <MPArtworkDataSource> _mediaRemoteArtworkDataSource;
    id <MPArtworkDataSource> _remotePlayerArtworkDataSource;
    id _invalidationToken;
}

+ (_Bool)_shouldRegisterForNotifications;
+ (id)controllerForPlayerPath:(id)arg1;
@property(retain, nonatomic) id invalidationToken; // @synthesize invalidationToken=_invalidationToken;
@property(readonly, nonatomic) id <MPArtworkDataSource> remotePlayerArtworkDataSource; // @synthesize remotePlayerArtworkDataSource=_remotePlayerArtworkDataSource;
@property(readonly, nonatomic) id <MPArtworkDataSource> mediaRemoteArtworkDataSource; // @synthesize mediaRemoteArtworkDataSource=_mediaRemoteArtworkDataSource;
@property(retain, nonatomic) MPCPlayerPath *resolvedPlayerPath; // @synthesize resolvedPlayerPath=_resolvedPlayerPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long playingIdentifierCacheState; // @synthesize playingIdentifierCacheState=_playingIdentifierCacheState;
@property(readonly, nonatomic) long long supportedCommandsCacheState; // @synthesize supportedCommandsCacheState=_supportedCommandsCacheState;
@property(readonly, nonatomic) long long playbackStateCacheState; // @synthesize playbackStateCacheState=_playbackStateCacheState;
- (id)_legacyCommands;
- (void)_onQueue_invalidateArtworkFuturesForContentItemID:(id)arg1;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg1;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2;
- (void)_onQueue_updateOptimisticElapsedTimeForContentItem:(id)arg1 elapsedTime:(double)arg2 rate:(float)arg3;
- (void)_onQueue_updateOptimisticStateForCommand:(unsigned int)arg1 options:(id)arg2;
- (void)_onQueue_setOptimisticPlaybackPositionWithOptions:(id)arg1;
- (void)_onQueue_setOptimisticPlaybackState:(unsigned int)arg1 withOptions:(id)arg2;
- (void)_onQueue_mergeContentItems:(id)arg1 queueRange:(struct _MSVSignedRange)arg2;
- (id)_onQueue_identifiersForRange:(struct _MSVSignedRange)arg1;
- (void)invalidateAllTokens;
- (void)dictionary:(id)arg1 willRemoveObject:(id)arg2 forKey:(id)arg3;
- (void)_contentItemArtworkChangedNotification:(id)arg1;
- (void)_supportedCommandsDidChangedNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_playbackQueueContentItemsChangedNotification:(id)arg1;
- (void)_playbackQueueChangedNotification:(id)arg1;
- (id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize)arg3;
- (long long)contentItemArtworkCacheStateForArtworkIdentifier:(id)arg1 size:(struct CGSize)arg2;
- (id)contentItemForIdentifier:(id)arg1;
- (long long)contentItemCacheStateForIdentifier:(id)arg1;
@property(readonly, nonatomic) MPCFuture *playingIdentifier;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange)arg1;
- (id)playQueueIdentifiersForRequest:(void *)arg1;
- (void)_sendRemoteCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange)arg1;
- (void)_sendLocalCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) MPCFuture *supportedCommands;
@property(readonly, nonatomic) MPCFuture *playbackState;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

