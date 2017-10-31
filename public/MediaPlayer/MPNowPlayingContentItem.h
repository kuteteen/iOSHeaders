//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPContentItem.h>

#import "NSCopying.h"

@class MPMediaItemArtwork, MPNowPlayingInfoLyricsItem, NSArray, NSDate, NSDictionary, NSString;

@interface MPNowPlayingContentItem : MPContentItem <NSCopying>
{
    NSDictionary *_nowPlayingInfo;
    id <MPNowPlayingContentItemLyricsDataSource> _lyricsDataSource;
    id <MPNowPlayingContentItemDescriptionDataSource> _descriptionDataSource;
    id <MPNowPlayingContentItemArtworkDataSource> _artworkDataSource;
}

+ (_Bool)shouldPushArtworkData;
@property(retain, nonatomic) id <MPNowPlayingContentItemArtworkDataSource> artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property(nonatomic) __weak id <MPNowPlayingContentItemDescriptionDataSource> descriptionDataSource; // @synthesize descriptionDataSource=_descriptionDataSource;
@property(nonatomic) __weak id <MPNowPlayingContentItemLyricsDataSource> lyricsDataSource; // @synthesize lyricsDataSource=_lyricsDataSource;
- (void).cxx_destruct;
@property(nonatomic, getter=isExplicitItem) _Bool explicitItem;
- (void)_mergeContentItem:(id)arg1;
- (void)invalidateArtwork;
@property(retain, nonatomic) MPMediaItemArtwork *artwork; // @dynamic artwork;
@property(nonatomic) _Bool hasArtwork;
- (void)invalidateLyrics;
@property(copy, nonatomic) MPNowPlayingInfoLyricsItem *lyrics;
@property(nonatomic) _Bool hasLyrics;
- (void)invalidateDescription;
@property(nonatomic) _Bool hasDescription;
@property(copy, nonatomic) NSArray *sections;
- (void)invalidateLanguageOptions;
@property(copy, nonatomic) NSArray *currentLanguageOptions;
@property(copy, nonatomic) NSArray *availableLanguageOptions;
@property(nonatomic) _Bool hasLanguageOptions;
- (void)setElapsedTime:(double)arg1 playbackRate:(float)arg2;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo;
@property(readonly, nonatomic) NSDictionary *auxiliaryNowPlayingInfo;
@property(nonatomic) unsigned long long mediaType;
@property(copy, nonatomic) NSDictionary *collectionInfo;
@property(readonly, nonatomic) double elapsedTimeTimestamp;
@property(nonatomic) float playbackRate;
@property(nonatomic) double elapsedTime;
@property(nonatomic) long long editingStyleFlags;
@property(nonatomic) long long radioStationType;
@property(nonatomic) long long playlistType;
@property(nonatomic) long long storeSubscriptionID;
@property(nonatomic) long long storeID;
@property(nonatomic) long long storeArtistID;
@property(nonatomic) long long storeAlbumID;
@property(nonatomic) long long numberOfChildren;
@property(nonatomic, getter=isSteerable) _Bool steerable;
@property(nonatomic, getter=isSharableItem) _Bool sharableItem;
@property(nonatomic, getter=isAlwaysLiveItem) _Bool alwaysLiveItem;
@property(copy, nonatomic) NSString *externalContentIdentifier;
@property(copy, nonatomic) NSString *radioStationStringIdentifier;
@property(copy, nonatomic) NSString *genreName;
@property(copy, nonatomic) NSString *composerName;
@property(nonatomic) long long trackNumber;
@property(nonatomic) long long totalTrackCount;
@property(nonatomic) long long totalDiscCount;
@property(nonatomic) long long seasonNumber;
@property(nonatomic) long long playCount;
@property(nonatomic) long long episodeNumber;
@property(nonatomic) long long discNumber;
@property(nonatomic) float defaultPlaybackRate;
@property(nonatomic) double startTime;
@property(nonatomic) double duration;
@property(copy, nonatomic) NSString *artworkIdentifier;
@property(copy, nonatomic) NSArray *artworkURLTemplates;
@property(copy, nonatomic) NSString *artworkURL;
@property(copy, nonatomic) NSString *trackArtistName;
@property(copy, nonatomic) NSString *seriesName;
@property(copy, nonatomic) NSString *radioStationName;
@property(copy, nonatomic) NSString *profileIdentifier;
@property(copy, nonatomic) NSString *localizedContentRating;
@property(copy, nonatomic) NSString *info;
@property(copy, nonatomic) NSString *directorName;
@property(copy, nonatomic) NSString *collectionIdentifier;
@property(copy, nonatomic) NSString *albumName;
@property(copy, nonatomic) NSString *albumArtistName;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) NSDictionary *deviceSpecificUserInfo;
@property(copy, nonatomic) NSDate *releaseDate;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

