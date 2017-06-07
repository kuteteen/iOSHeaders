//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelAlbum, MPModelArtist, MPModelMediaClip, MPModelMovie, MPModelPlaylist, MPModelPlaylistEntry, MPModelSong, MPModelTVEpisode, MPModelTVSeason, MPModelTVShow;

@interface MPModelGenericObject : MPModelObject
{
    MPModelSong *_song;
    MPModelAlbum *_album;
    MPModelArtist *_artist;
    MPModelMediaClip *_mediaClip;
    MPModelPlaylist *_playlist;
    MPModelPlaylistEntry *_playlistEntry;
    MPModelTVEpisode *_tvEpisode;
    MPModelTVSeason *_season;
    MPModelTVShow *_show;
    MPModelMovie *_movie;
}

+ (id)__MPModelRelationshipGenericMediaClip__PROPERTY;
+ (id)__mediaClip__KEY;
+ (id)__MPModelRelationshipGenericMovie__PROPERTY;
+ (id)__movie__KEY;
+ (id)__MPModelRelationshipGenericTVShow__PROPERTY;
+ (id)__show__KEY;
+ (id)__MPModelRelationshipGenericTVSeason__PROPERTY;
+ (id)__season__KEY;
+ (id)__MPModelRelationshipGenericTVEpisode__PROPERTY;
+ (id)__tvEpisode__KEY;
+ (id)__MPModelRelationshipGenericPlaylistEntry__PROPERTY;
+ (id)__playlistEntry__KEY;
+ (id)__MPModelRelationshipGenericPlaylist__PROPERTY;
+ (id)__playlist__KEY;
+ (id)__MPModelRelationshipGenericArtist__PROPERTY;
+ (id)__artist__KEY;
+ (id)__MPModelRelationshipGenericAlbum__PROPERTY;
+ (id)__album__KEY;
+ (id)__MPModelRelationshipGenericSong__PROPERTY;
+ (id)__song__KEY;
+ (id)kindWithRelationshipKinds:(id)arg1;
+ (id)mqf_requiredPlaybackProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
@property(retain, nonatomic) MPModelMovie *movie; // @synthesize movie=_movie;
@property(retain, nonatomic) MPModelTVShow *show; // @synthesize show=_show;
@property(retain, nonatomic) MPModelTVSeason *season; // @synthesize season=_season;
@property(retain, nonatomic) MPModelTVEpisode *tvEpisode; // @synthesize tvEpisode=_tvEpisode;
@property(retain, nonatomic) MPModelPlaylistEntry *playlistEntry; // @synthesize playlistEntry=_playlistEntry;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @synthesize playlist=_playlist;
@property(retain, nonatomic) MPModelMediaClip *mediaClip; // @synthesize mediaClip=_mediaClip;
@property(retain, nonatomic) MPModelArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) MPModelAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) MPModelSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (long long)type;
- (id)identifiers;
- (id)mediaItemPropertyValues;
- (id)mqf_playbackItemMetadataModelObject;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;

@end

