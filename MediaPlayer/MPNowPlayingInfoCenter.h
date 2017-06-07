//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol MPNowPlayingInfoLyricsDelegate, MPNowPlayingPlaybackQueueDataSource, MPNowPlayingPlaybackQueueDelegate, OS_dispatch_queue;

@interface MPNowPlayingInfoCenter : NSObject
{
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_queuedNowPlayingInfo;
    NSDictionary *_convertedNowPlayingInfo;
    NSMutableSet *_contentItemIdentifiersSentToMediaRemote;
    _Bool _coalescingUpdates;
    NSMutableDictionary *_mutatedContentItems;
    unsigned long long _playbackState;
    NSDate *_pushDate;
    NSObject<OS_dispatch_queue> *_queue;
    id <MPNowPlayingPlaybackQueueDataSource> _playbackQueueDataSource;
    id <MPNowPlayingPlaybackQueueDelegate> _playbackQueueDelegate;
    id <MPNowPlayingInfoLyricsDelegate> _lyricsDelegate;
    void *_createPlaybackQueueToken;
    void *_createItemForIdentifierToken;
    void *_createItemForOffsetToken;
    void *_createChildItemToken;
    void *_metadataToken;
    void *_infoToken;
    void *_languageOptionsToken;
    void *_lyricsToken;
    void *_artworkToken;
    void *_playerPath;
    NSString *_playerID;
}

+ (id)infoCenterForPlayerID:(id)arg1;
+ (id)defaultCenter;
@property(readonly, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
- (void).cxx_destruct;
- (void)_registerLyricsDelegateCallbacks:(id)arg1;
- (void)_registerPlaybackQueueDataSourceCallbacks:(id)arg1;
- (void)_removeToken:(void **)arg1;
- (void)_pushContentItemsUpdate;
- (void)_clearPlaybackQueueDataSourceCallbacks;
- (id)_queryChildItemFromDatasource:(id)arg1 atIndexPath:(id)arg2 fromRoot:(id)arg3;
- (void)_contentItemChangedNotification:(id)arg1;
- (void)_asynchronousRequests:(void *)arg1 forItem:(id)arg2 mediaRemoteContentItem:(void *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginObservingChangesForContentItemIDs:(id)arg1;
- (void)endPlaybackQueueContentItemUpdates;
- (void)beginPlaybackQueueContentItemUpdates;
- (void)invalidatePlaybackQueue;
@property unsigned long long playbackState;
@property(copy) NSDictionary *nowPlayingInfo;
- (void)_pushNowPlayingInfoAndRetry:(_Bool)arg1;
@property(nonatomic) __weak id <MPNowPlayingInfoLyricsDelegate> lyricsDelegate;
@property(nonatomic) __weak id <MPNowPlayingPlaybackQueueDelegate> playbackQueueDelegate;
@property(nonatomic) __weak id <MPNowPlayingPlaybackQueueDataSource> playbackQueueDataSource;
- (void)becomeActive;
- (void)dealloc;
- (id)init;
- (id)initWithPlayerID:(id)arg1;

@end

