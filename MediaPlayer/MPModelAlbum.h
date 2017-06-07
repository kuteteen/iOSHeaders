//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelArtist, MPModelGenre, MPModelSong, NSDate, NSDateComponents, NSString;

@interface MPModelAlbum : MPModelObject
{
    _Bool _hasCleanContent;
    _Bool _hasExplicitContent;
    _Bool _compilation;
    _Bool _classical;
    _Bool _preorder;
    _Bool _libraryAdded;
    _Bool _libraryAddEligible;
    float _volumeNormalization;
    NSString *_title;
    MPModelArtist *_artist;
    MPModelGenre *_genre;
    MPModelSong *_representativeSong;
    long long _trackCount;
    long long _maximumItemTrackNumber;
    long long _discCount;
    NSDateComponents *_releaseDateComponents;
    long long _year;
    NSString *_copyrightText;
    NSDate *_lastDevicePlaybackDate;
    NSString *_editorNotes;
    NSString *_shortEditorNotes;
    NSDate *_libraryAddedDate;
    long long _keepLocalEnableState;
    long long _keepLocalManagedStatus;
    CDUnknownBlockType _artworkCatalogBlock;
    CDUnknownBlockType _songPopularityBlock;
}

+ (id)__MPModelPropertyAlbumSongPopularity__PROPERTY;
+ (id)__songPopularityBlock__KEY;
+ (id)__MPModelPropertyAlbumShortEditorNotes__PROPERTY;
+ (id)__shortEditorNotes__KEY;
+ (id)__MPModelPropertyAlbumEditorNotes__PROPERTY;
+ (id)__editorNotes__KEY;
+ (id)__MPModelPropertyAlbumPreorder__PROPERTY;
+ (id)__preorder__KEY;
+ (id)__MPModelPropertyAlbumLastDevicePlaybackDate__PROPERTY;
+ (id)__lastDevicePlaybackDate__KEY;
+ (id)__MPModelPropertyAlbumLibraryAddEligible__PROPERTY;
+ (id)__libraryAddEligible__KEY;
+ (id)__MPModelPropertyAlbumKeepLocalManagedStatus__PROPERTY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__MPModelPropertyAlbumKeepLocalEnableState__PROPERTY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__MPModelPropertyAlbumVolumeNormalization__PROPERTY;
+ (id)__volumeNormalization__KEY;
+ (id)__MPModelPropertyAlbumLibraryAdded__PROPERTY;
+ (id)__libraryAdded__KEY;
+ (id)__MPModelPropertyAlbumYear__PROPERTY;
+ (id)__year__KEY;
+ (id)__MPModelPropertyAlbumLibraryAddedDate__PROPERTY;
+ (id)__libraryAddedDate__KEY;
+ (id)__MPModelPropertyAlbumEditorialArtwork__PROPERTY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__MPModelPropertyAlbumCopyrightText__PROPERTY;
+ (id)__copyrightText__KEY;
+ (id)__MPModelPropertyAlbumArtwork__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__MPModelPropertyAlbumReleaseDateComponents__PROPERTY;
+ (id)__releaseDateComponents__KEY;
+ (id)__MPModelPropertyAlbumIsClassical__PROPERTY;
+ (id)__classical__KEY;
+ (id)__MPModelPropertyAlbumIsCompilation__PROPERTY;
+ (id)__compilation__KEY;
+ (id)__MPModelPropertyAlbumHasExplicitContent__PROPERTY;
+ (id)__hasExplicitContent__KEY;
+ (id)__MPModelPropertyAlbumHasCleanContent__PROPERTY;
+ (id)__hasCleanContent__KEY;
+ (id)__MPModelPropertyAlbumDiscCount__PROPERTY;
+ (id)__discCount__KEY;
+ (id)__MPModelPropertyAlbumMaximumItemTrackNumber__PROPERTY;
+ (id)__maximumItemTrackNumber__KEY;
+ (id)__MPModelPropertyAlbumTrackCount__PROPERTY;
+ (id)__trackCount__KEY;
+ (id)__MPModelRelationshipAlbumRepresentativeSong__PROPERTY;
+ (id)__representativeSong__KEY;
+ (id)__MPModelRelationshipAlbumGenre__PROPERTY;
+ (id)__genre__KEY;
+ (id)__MPModelRelationshipAlbumArtist__PROPERTY;
+ (id)__artist__KEY;
+ (id)__MPModelPropertyAlbumTitle__PROPERTY;
+ (id)__title__KEY;
+ (id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2 options:(unsigned long long)arg3;
+ (id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2;
+ (id)kindWithSongKind:(id)arg1 options:(unsigned long long)arg2;
+ (id)kindWithSongKind:(id)arg1;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (_Bool)supportsLibraryAddStatusObservation;
+ (_Bool)supportsLibraryRemoval;
+ (id)requiredLibraryRemovalProperties;
+ (_Bool)supportsKeepLocalStatusObservation;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
@property(copy, nonatomic) CDUnknownBlockType songPopularityBlock; // @synthesize songPopularityBlock=_songPopularityBlock;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property(nonatomic) long long keepLocalManagedStatus; // @synthesize keepLocalManagedStatus=_keepLocalManagedStatus;
@property(nonatomic) long long keepLocalEnableState; // @synthesize keepLocalEnableState=_keepLocalEnableState;
@property(nonatomic) float volumeNormalization; // @synthesize volumeNormalization=_volumeNormalization;
@property(nonatomic, getter=isLibraryAddEligible) _Bool libraryAddEligible; // @synthesize libraryAddEligible=_libraryAddEligible;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @synthesize libraryAddedDate=_libraryAddedDate;
@property(nonatomic, getter=isLibraryAdded) _Bool libraryAdded; // @synthesize libraryAdded=_libraryAdded;
@property(copy, nonatomic) NSString *shortEditorNotes; // @synthesize shortEditorNotes=_shortEditorNotes;
@property(copy, nonatomic) NSString *editorNotes; // @synthesize editorNotes=_editorNotes;
@property(nonatomic, getter=isPreorder) _Bool preorder; // @synthesize preorder=_preorder;
@property(copy, nonatomic) NSDate *lastDevicePlaybackDate; // @synthesize lastDevicePlaybackDate=_lastDevicePlaybackDate;
@property(copy, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(copy, nonatomic) NSDateComponents *releaseDateComponents; // @synthesize releaseDateComponents=_releaseDateComponents;
@property(nonatomic, getter=isClassical) _Bool classical; // @synthesize classical=_classical;
@property(nonatomic, getter=isCompilation) _Bool compilation; // @synthesize compilation=_compilation;
@property(nonatomic) _Bool hasExplicitContent; // @synthesize hasExplicitContent=_hasExplicitContent;
@property(nonatomic) _Bool hasCleanContent; // @synthesize hasCleanContent=_hasCleanContent;
@property(nonatomic) long long discCount; // @synthesize discCount=_discCount;
@property(nonatomic) long long maximumItemTrackNumber; // @synthesize maximumItemTrackNumber=_maximumItemTrackNumber;
@property(nonatomic) long long trackCount; // @synthesize trackCount=_trackCount;
@property(retain, nonatomic) MPModelSong *representativeSong; // @synthesize representativeSong=_representativeSong;
@property(retain, nonatomic) MPModelGenre *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) MPModelArtist *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)songPopularityForIdentifiers:(id)arg1;
- (id)artworkCatalog;
- (id)descriptionWithType:(long long)arg1;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;

@end

