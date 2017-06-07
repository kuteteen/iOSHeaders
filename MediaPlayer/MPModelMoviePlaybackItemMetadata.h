//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelMovie;

@interface MPModelMoviePlaybackItemMetadata : MPModelSongPlaybackItemMetadata
{
    MPModelGenericObject *_modelGenericObject;
    MPModelMovie *_movie;
}

+ (id)requiredProperties;
@property(retain, nonatomic) MPModelMovie *movie; // @synthesize movie=_movie;
- (void).cxx_destruct;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)storeAsset;
- (id)playbackPosition;
- (id)localFileAsset;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)storeSagaID;
- (long long)storeAdamID;
- (id)modelGenericObject;
- (id)mediaItem;
- (_Bool)isExplicitTrack;
- (double)expectedDuration;
- (unsigned long long)contentType;
- (id)contentTitle;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (_Bool)allowsInitiatingPlayWhileDownload;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mqf_playbackItemMetadataModelObject;

@end

