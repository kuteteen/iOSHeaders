//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPArtworkCatalog, MPModelMovie, MPModelPlaylist, MPModelSong, MPModelTVEpisode;

@interface MPModelPlaylistEntry : MPModelObject
{
    long long _position;
    MPModelPlaylist *_playlist;
    MPModelSong *_song;
    MPModelTVEpisode *_tvEpisode;
    MPModelMovie *_movie;
    MPArtworkCatalog *__artworkCatalog;
}

+ (id)___MPModelPropertyPlaylistEntryArtwork__PROPERTY;
+ (id)___artworkCatalog__KEY;
+ (id)__MPModelRelationshipPlaylistEntryMovie__PROPERTY;
+ (id)__movie__KEY;
+ (id)__MPModelRelationshipPlaylistEntryTVEpisode__PROPERTY;
+ (id)__tvEpisode__KEY;
+ (id)__MPModelRelationshipPlaylistEntrySong__PROPERTY;
+ (id)__song__KEY;
+ (id)__MPModelRelationshipPlaylistEntryPlaylist__PROPERTY;
+ (id)__playlist__KEY;
+ (id)__MPModelPropertyPlaylistEntryPosition__PROPERTY;
+ (id)__position__KEY;
+ (id)kindWithKinds:(id)arg1;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (_Bool)supportsLibraryAddStatusObservation;
+ (_Bool)supportsLibraryRemoval;
+ (id)requiredLibraryRemovalProperties;
+ (_Bool)supportsKeepLocalStatusObservation;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
@property(retain, nonatomic) MPArtworkCatalog *_artworkCatalog; // @synthesize _artworkCatalog=__artworkCatalog;
@property(retain, nonatomic) MPModelMovie *movie; // @synthesize movie=_movie;
@property(retain, nonatomic) MPModelTVEpisode *tvEpisode; // @synthesize tvEpisode=_tvEpisode;
@property(retain, nonatomic) MPModelSong *song; // @synthesize song=_song;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @synthesize playlist=_playlist;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (long long)type;
- (id)mediaItemPropertyValues;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (_Bool)storeItemMetadataRequestNeedsPersonalization;
- (id)storeItemMetadataRequestItemIdentifier;

@end

