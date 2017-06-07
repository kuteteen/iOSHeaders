//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSPointerArray, NSString, NSURL, QueryCriteriaResultsCache;
@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;

@interface MPMediaLibrary : NSObject <NSSecureCoding>
{
    id <MPMediaLibraryDataProviderPrivate> _libraryDataProvider;
    long long _libraryChangeObservers;
    NSObject<OS_dispatch_queue> *_entityCacheQueue;
    NSObject<OS_dispatch_queue> *_fixedQueue;
    NSArray *_notificationObservers;
    QueryCriteriaResultsCache *_itemsForCriteriaCache;
    QueryCriteriaResultsCache *_hasItemsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;
    QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsForCriteriaCache;
    QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;
    NSMutableDictionary *_hasItemsDidLoadForCriteria;
    NSMutableDictionary *_hasCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfItemsDidLoadForCriteria;
    NSMutableArray *_additionalLibraryFilterPredicates;
    NSObject<OS_dispatch_queue> *_additionalLibraryFilterPredicatesAccessQueue;
    NSPointerArray *_connectionAssertions;
    NSObject<OS_dispatch_queue> *_connectionAssertionsQueue;
    _Bool _disconnectAfterReleasingAssertions;
    float _connectionProgress;
    long long _removalReason;
    unsigned int _determinedHasMedia:1;
    unsigned int _hasMedia:1;
    unsigned int _determinedHasSongs:1;
    unsigned int _hasSongs:1;
    unsigned int _determinedHasGeniusMixes:1;
    unsigned int _hasGeniusMixes:1;
    unsigned int _determinedHasPlaylists:1;
    unsigned int _hasPlaylists:1;
    unsigned int _determinedHasComposers:1;
    unsigned int _hasComposers:1;
    unsigned int _determinedHasPodcasts:1;
    unsigned int _hasPodcasts:1;
    unsigned int _determinedHasUbiquitousBookmarkableItems:1;
    unsigned int _hasUbiquitousBookmarkableContent:1;
    unsigned int _determinedHasAudiobooks:1;
    unsigned int _hasAudiobooks:1;
    long long _cloudFilteringType;
    _Bool _filteringDisabled;
    _Bool _hasVideos;
    _Bool _determinedHasVideos;
    _Bool _hasMusicVideos;
    _Bool _determinedHasMusicVideos;
    _Bool _hasAudibleAudioBooks;
    _Bool _determinedHasAudibleAudioBooks;
    _Bool _hasMovies;
    _Bool _determinedHasMovies;
    _Bool _hasCompilations;
    _Bool _determinedHasCompilations;
    _Bool _hasITunesU;
    _Bool _determinedHasITunesU;
    _Bool _hasVideoITunesU;
    _Bool _determinedHasVideoITunesU;
    _Bool _hasMovieRentals;
    _Bool _determinedHasMovieRentals;
    _Bool _hasTVShows;
    _Bool _determinedHasTVShows;
    _Bool _hasHomeVideos;
    _Bool _determinedHasHomeVideos;
    _Bool _hasVideoPodcasts;
    _Bool _determinedHasVideoPodcasts;
    unsigned char _originalCellNetworkFlags;
    unsigned char _originalWiFiNetworkFlags;
    id __MLCoreStorage;
}

+ (_Bool)companionDeviceActiveStoreAccountIsSubscriber;
+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1;
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1;
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)arg1;
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1;
+ (void)postEntitiesAddedOrRemovedNotificationForLibraryDataProvider:(id)arg1;
+ (void)reloadLibraryDataProvider:(id)arg1;
+ (void)removeLibraryDataProvider:(id)arg1 removalReason:(long long)arg2;
+ (void)addLibraryDataProvider:(id)arg1;
+ (id)libraryDataProviders;
+ (id)_libraryDataProviders;
+ (id)_libraryForDataProvider:(id)arg1;
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1;
+ (id)sharedMediaLibraries;
+ (id)mediaLibraries;
+ (id)_mediaLibraries;
+ (void)_endDiscoveringMediaLibrariesIfAllowed;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (void)setLibraryServerDisabled:(_Bool)arg1;
+ (_Bool)isLibraryServerDisabled;
+ (void)requestAuthorization:(CDUnknownBlockType)arg1;
+ (long long)authorizationStatus;
+ (void)endDiscoveringMediaLibraries;
+ (void)beginDiscoveringMediaLibraries;
+ (_Bool)supportsSecureCoding;
+ (id)deviceMediaLibrary;
+ (void)setDefaultMediaLibrary:(id)arg1;
+ (id)defaultMediaLibrary;
+ (void)initialize;
@property(retain, nonatomic) id _MLCoreStorage; // @synthesize _MLCoreStorage=__MLCoreStorage;
- (void).cxx_destruct;
- (_Bool)recordPlayEventForPlaylistPersistentID:(long long)arg1;
- (_Bool)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (void)addTracksToMyLibrary:(id)arg1;
- (void)addPlaylistStoreItemsWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPlaylistWithUUID:(id)arg1 creationMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performStoreItemLibraryImport:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addAdvertisementItemWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addStoreItemIDs:(id)arg1 andAddTracksToCloudLibrary:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)addStoreItem:(long long)arg1 andAddTracksToCloudLibrary:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)completeMyCollectionArtworkDataSource;
- (id)artworkDataSource;
- (id)libraryDataProvider;
- (id)_initWithLibraryDataProvider:(id)arg1;
- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (void)_disconnect;
- (void)_removeConnectionAssertion:(id)arg1;
- (id)_collectionsForQueryCriteria:(id)arg1;
- (void)setLibraryFilterPredicates;
- (long long)cloudFilteringType;
- (void)setCloudFilteringType:(long long)arg1;
- (void)_clearPendingDisconnection;
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1;
- (unsigned long long)_countOfCollectionsForQueryCriteria:(id)arg1;
- (unsigned long long)_countOfItemsForQueryCriteria:(id)arg1;
- (_Bool)_hasCollectionsForQueryCriteria:(id)arg1;
- (_Bool)_hasItemsForQueryCriteria:(id)arg1;
- (id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(CDUnknownBlockType)arg5 loadValueFromDataProviderBlock:(CDUnknownBlockType)arg6;
- (id)_itemsForQueryCriteria:(id)arg1;
- (_Bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long *)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long *)arg4;
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;
- (id)pathForAssetURL:(id)arg1;
- (_Bool)isValidAssetURL:(id)arg1;
- (id)entityWithPersistentID:(long long)arg1 entityType:(long long)arg2;
- (id)entityWithSpotlightIdentifier:(id)arg1;
- (id)entityWithLibraryURL:(id)arg1;
- (id)entityWithMultiverseIdentifier:(id)arg1;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (id)entityCache;
- (id)syncValidity;
- (float)connectionProgress;
- (_Bool)isCurrentThreadInTransaction;
- (void)performReadTransactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)connectionAssertionWithIdentifier:(id)arg1;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)requiresAuthentication;
- (id)preferredSubtitleLanguages;
- (id)preferredAudioLanguages;
- (_Bool)isGeniusEnabled;
- (void)geniusItemsForSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3;
- (void)clearLocationPropertiesOfItem:(id)arg1;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3;
- (void)downloadAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removePlaylist:(id)arg1;
- (_Bool)removeItems:(id)arg1;
- (_Bool)deleteItems:(id)arg1;
- (id)URLForHomeSharingRequest:(id)arg1;
- (unsigned int)homeSharingDatabaseID;
- (unsigned long long)syncPlaylistId;
- (void)setSyncPlaylistId:(unsigned long long)arg1;
- (id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(_Bool)arg2;
- (id)addPlaylistWithName:(id)arg1;
- (id)playlistWithPersistentID:(unsigned long long)arg1;
- (id)playbackHistoryPlaylist;
- (id)localizedSectionIndexTitles;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)newPlaylistWithPersistentID:(unsigned long long)arg1;
- (id)decodeItemWithCoder:(id)arg1;
- (id)itemWithStoreID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(_Bool)arg2;
- (id)itemWithPersistentID:(unsigned long long)arg1;
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 verifyExistence:(_Bool)arg3;
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (_Bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (_Bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (_Bool)itemExistsInDatabaseWithPersistentID:(unsigned long long)arg1;
- (_Bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (_Bool)hasVideoPodcasts;
- (_Bool)hasHomeVideos;
- (_Bool)hasTVShows;
- (_Bool)hasMovieRentals;
- (_Bool)hasVideoITunesUContent;
- (_Bool)hasAudioITunesUContent;
- (_Bool)hasITunesUContent;
- (_Bool)hasCompilations;
- (_Bool)hasMovies;
- (_Bool)hasAudibleAudioBooks;
- (_Bool)hasMusicVideos;
- (_Bool)hasVideos;
- (_Bool)_checkHasContent:(_Bool *)arg1 determined:(_Bool *)arg2 mediaType:(unsigned long long)arg3 queryHasEntitiesBlock:(CDUnknownBlockType)arg4;
- (_Bool)_checkHasContent:(_Bool *)arg1 determined:(_Bool *)arg2 queryHasEntitiesBlock:(CDUnknownBlockType)arg3;
- (_Bool)hasAudiobooks;
- (_Bool)hasComposers;
- (_Bool)hasGenres;
- (_Bool)hasUbiquitousBookmarkableItems;
- (_Bool)hasPodcasts;
- (_Bool)hasSongs;
- (_Bool)hasAlbums;
- (_Bool)hasArtists;
- (_Bool)hasPlaylists;
- (_Bool)hasGeniusMixes;
- (_Bool)hasMedia;
- (_Bool)hasMediaOfType:(unsigned long long)arg1;
- (_Bool)libraryHasBeenModifiedWithToken:(id)arg1;
- (id)modificationToken;
- (id)databasePath;
- (id)uniqueIdentifier;
@property(nonatomic) long long removalReason;
- (id)name;
- (void)removeLibraryFilterPredicate:(id)arg1;
- (void)addLibraryFilterPredicate:(id)arg1;
- (id)additionalLibraryFilterPredicates;
- (long long)status;
- (_Bool)writable;
- (long long)playlistGeneration;
- (unsigned long long)syncGenerationID;
- (unsigned long long)currentEntityRevision;
- (void)addItemWithProductID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
- (void)endGeneratingLibraryChangeNotifications;
- (void)disconnect;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginGeneratingLibraryChangeNotifications;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForRestrictionsChange;
- (void)_scheduleLibraryChangeNotificationPostingBlock:(CDUnknownBlockType)arg1;
- (void)_clearCachedContentDataAndResultSets:(_Bool)arg1;
- (void)_clearCachedEntitiesIncludingResultSets:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) shared_ptr_2d06daf8 _MediaLibrary_coreLibrary;
@property(readonly, nonatomic) NSURL *protectedContentSupportStorageURL;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 inUsersLibrary:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSString *_syncValidity;
- (id)errorResolverForItem:(id)arg1;
- (unsigned long long)filterAvailableContentGroups:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;

@end

