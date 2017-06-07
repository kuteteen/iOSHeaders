//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPContentItem.h>

@class MPNowPlayingInfoLyricsItem, NSArray, NSDate, NSDictionary, NSString;
@protocol MPNowPlayingContentItemDescriptionDataSource, MPNowPlayingContentItemLanguageOptionDataSource, MPNowPlayingContentItemLyricsDataSource;

@interface MPNowPlayingContentItem : MPContentItem
{
    id <MPNowPlayingContentItemLyricsDataSource> _lyricsDataSource;
    id <MPNowPlayingContentItemDescriptionDataSource> _descriptionDataSource;
    id <MPNowPlayingContentItemLanguageOptionDataSource> _languageOptionDataSource;
    NSDictionary *_collectionInfo;
}

- (void).cxx_destruct;
- (unsigned int)_convertFromEditingStyleFlags:(long long)arg1;
- (long long)_convertToEditingStyleFlags:(unsigned int)arg1;
- (long long)_convertToRadioStationType:(unsigned int)arg1;
- (unsigned int)_convertFromRadioStationType:(long long)arg1;
- (long long)_convertToPlaylistType:(unsigned int)arg1;
- (unsigned int)_convertFromPlaylistType:(long long)arg1;
@property(copy, nonatomic) NSDictionary *collectionInfo;
@property(nonatomic, getter=isSteerable) _Bool steerable;
@property(readonly, nonatomic) NSDictionary *auxiliaryNowPlayingInfo;
@property(nonatomic) NSDictionary *nowPlayingInfo;
@property(nonatomic) NSDictionary *deviceSpecificUserInfo;
@property(nonatomic) NSDictionary *userInfo;
@property(nonatomic) unsigned long long mediaType;
@property(nonatomic) float defaultPlaybackRate;
@property(nonatomic) float playbackRate;
@property(nonatomic) double elapsedTime;
@property(readonly, nonatomic) double elapsedTimeTimestamp;
@property(nonatomic) long long trackNumber;
@property(nonatomic) long long totalTrackCount;
@property(nonatomic) long long totalDiscCount;
@property(nonatomic) long long discNumber;
@property(nonatomic, getter=isAlwaysLiveItem) _Bool alwaysLiveItem;
@property(nonatomic, getter=isSharableItem) _Bool sharableItem;
@property(copy, nonatomic) NSString *radioStationStringIdentifier;
@property(copy, nonatomic) NSString *radioStationName;
@property(copy, nonatomic) NSString *genreName;
@property(copy, nonatomic) NSString *composerName;
@property(copy, nonatomic) NSString *queueIdentifier;
@property(nonatomic) __weak id <MPNowPlayingContentItemLanguageOptionDataSource> languageOptionDataSource;
@property(nonatomic) __weak id <MPNowPlayingContentItemDescriptionDataSource> descriptionDataSource;
@property(nonatomic) __weak id <MPNowPlayingContentItemLyricsDataSource> lyricsDataSource;
@property(nonatomic) long long storeSubscriptionID;
@property(nonatomic) long long storeArtistID;
@property(nonatomic) long long storeAlbumID;
@property(nonatomic) long long storeID;
@property(copy, nonatomic) NSString *seriesName;
@property(nonatomic) double startTime;
@property(nonatomic) long long editingStyleFlags;
@property(copy, nonatomic) MPNowPlayingInfoLyricsItem *lyrics;
@property(copy, nonatomic) NSArray *sections;
@property(copy, nonatomic) NSArray *currentLanguageOptions;
@property(copy, nonatomic) NSArray *availableLanguageOptions;
@property(copy, nonatomic) NSString *info;
@property(nonatomic) unsigned long long numberOfChildren;
@property(copy, nonatomic) NSString *profileIdentifier;
@property(copy, nonatomic) NSString *collectionIdentifier;
@property(nonatomic, getter=isExplicitItem) _Bool explicitItem;
@property(copy, nonatomic) NSString *localizedContentRating;
@property(nonatomic) double duration;
@property(nonatomic) long long playCount;
@property(nonatomic) long long radioStationType;
@property(nonatomic) long long playlistType;
@property(copy, nonatomic) NSDate *releaseDate;
@property(nonatomic) long long episodeNumber;
@property(nonatomic) long long seasonNumber;
@property(copy, nonatomic) NSString *directorName;
@property(copy, nonatomic) NSString *albumArtistName;
@property(copy, nonatomic) NSString *trackArtistName;
@property(copy, nonatomic) NSString *albumName;
- (id)initWithIdentifier:(id)arg1;

@end

