//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaLibraryDataProvider-Protocol.h>

@class MIPMultiverseIdentifier, MPMediaItem, MPStoreItemLibraryImport, NSArray, NSData, NSDate, NSDictionary, NSIndexSet, NSString;
@protocol MPArtworkDataSource;

@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>

@optional
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property(readonly, nonatomic) id <MPArtworkDataSource> completeMyCollectionArtworkDataSource;
@property(readonly, nonatomic) NSArray *preferredSubtitleLanguages;
@property(readonly, nonatomic) NSArray *preferredAudioLanguages;
@property(readonly, nonatomic) _Bool isGeniusEnabled;
@property(readonly, nonatomic) long long playbackHistoryPlaylistPersistentID;
@property(readonly, nonatomic) NSString *databasePath;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(NSString *)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (_Bool)importOriginalArtworkFromImageData:(NSData *)arg1 withArtworkToken:(NSString *)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (_Bool)recordPlayEventForPlaylistPersistentID:(long long)arg1;
- (_Bool)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)addGlobalPlaylistWithID:(NSString *)arg1 andAddToCloudLibrary:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)addPlaylistStoreItemsForLookupItems:(NSArray *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)addTracksToMyLibrary:(NSArray *)arg1;
- (void)sdk_addItemWithOpaqueID:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)performStoreItemLibraryImport:(MPStoreItemLibraryImport *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (MIPMultiverseIdentifier *)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (MIPMultiverseIdentifier *)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(NSString *)arg2;
- (id)valueForDatabaseProperty:(NSString *)arg1;
- (NSString *)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (void)updateEntitesToCurrentRevision;
- (_Bool)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class *)arg3;
- (void)clearLocationPropertiesOfItemWithIdentifier:(long long)arg1;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(NSString *)arg2 assetProtectionType:(long long)arg3;
- (void)geniusItemsForSeedItem:(MPMediaItem *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)releaseGeniusClusterPlaylist:(void *)arg1;
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg1 count:(unsigned long long *)arg2 error:(id *)arg3;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 error:(id *)arg3;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(void (^)(_Bool, NSError *))arg3;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(void (^)(_Bool))arg4;
- (void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsAtIndexes:(NSIndexSet *)arg1 inPlaylistWithIdentifier:(long long)arg2 completionBlock:(void (^)(_Bool))arg3;
- (void)sdk_addItemWithOpaqueIdentifier:(NSString *)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)addItemsWithIdentifiers:(NSArray *)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(void (^)(_Bool))arg3;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(void (^)(_Bool))arg3;
- (void)setItemsWithIdentifiers:(NSArray *)arg1 forPlaylistWithIdentifier:(long long)arg2 completionBlock:(void (^)(_Bool))arg3;
- (_Bool)removePlaylistWithIdentifier:(long long)arg1;
- (_Bool)removeItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2;
- (_Bool)deleteItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)sdk_addPlaylistWithValuesForProperties:(NSDictionary *)arg1;
- (long long)addPlaylistWithValuesForProperties:(NSDictionary *)arg1;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(void (^)(_Bool, NSError *))arg5;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(void (^)(_Bool, NSError *))arg4;
- (void)setValues:(NSArray *)arg1 forProperties:(NSArray *)arg2 forItemPersistentIDs:(NSArray *)arg3;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(void (^)(_Bool, NSError *))arg4;
- (_Bool)isCurrentThreadInTransaction;
- (void)performReadTransactionWithBlock:(void (^)(void))arg1;
- (_Bool)performTransactionWithBlock:(_Bool (^)(void))arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (_Bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsWithName:(NSString *)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long *)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long *)arg4;
- (_Bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (_Bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (_Bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (_Bool)hasUbiquitousBookmarkableItems;
- (_Bool)hasGeniusMixes;
- (_Bool)hasMediaOfType:(unsigned long long)arg1;
- (NSDate *)lastModifiedDate;
@end

