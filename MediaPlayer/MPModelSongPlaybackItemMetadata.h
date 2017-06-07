//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObjectPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelSong;

@interface MPModelSongPlaybackItemMetadata : MPModelObjectPlaybackItemMetadata
{
    MPModelGenericObject *_modelGenericObject;
    MPModelSong *_song;
}

+ (id)requiredProperties;
@property(retain, nonatomic) MPModelSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)storeAsset;
- (id)playbackPosition;
- (id)localFileAsset;
- (id)homeSharingAsset;
- (float)volumeNormalization;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)storeSagaID;
- (long long)storeAdamID;
- (_Bool)showComposer;
- (id)modelGenericObject;
- (id)mediaItem;
- (_Bool)isExplicitTrack;
- (double)expectedDuration;
- (id)copyrightText;
- (unsigned long long)contentType;
- (id)contentTitle;
- (id)composerName;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (long long)artistStoreAdamID;
- (id)artistName;
- (_Bool)allowsInitiatingPlayWhileDownload;
- (id)albumTitle;
- (long long)albumStoreAdamID;
- (id)albumArtistName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

