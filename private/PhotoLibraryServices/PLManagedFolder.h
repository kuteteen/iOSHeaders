//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLGenericAlbum.h>

#import "PLAlbumContainer.h"

@class NSOrderedSet, NSString;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer>
{
    _Bool _needsPersistenceUpdate;
    _Bool _needsFixedOrderKeysComplianceUpdate;
}

+ (id)validKindsForPersistence;
+ (id)localizedRecoveredTitle;
+ (id)childKeyForOrdering;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
@property(nonatomic) _Bool needsFixedOrderKeysComplianceUpdate; // @synthesize needsFixedOrderKeysComplianceUpdate=_needsFixedOrderKeysComplianceUpdate;
@property(nonatomic) _Bool needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
- (void)refreshCollections;
- (void)removeChildCollections:(id)arg1;
- (void)addChildCollections:(id)arg1;
- (void)removeChildCollectionsObject:(id)arg1;
- (void)addChildCollectionsObject:(id)arg1;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
- (void)enforceFixedOrderKeyCompliance;
- (void)removePersistedFileSystemData;
- (void)persistMetadataToFileSystem;
- (_Bool)isValidKindForPersistence;
@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property(readonly, nonatomic) int filter;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (_Bool)needsReordering;
- (void)setNeedsReordering;
@property(readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;
- (_Bool)canEditAlbums;
- (short)albumListType;
- (_Bool)hasAtLeastOneAlbum;
@property(readonly, nonatomic) unsigned long long albumsCount;
- (id)albums;
- (id)identifier;
- (id)containersRelationshipName;
- (_Bool)canEditContainers;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (unsigned long long)videosCount;
- (unsigned long long)photosCount;
- (_Bool)isEmpty;
- (unsigned long long)count;
- (unsigned long long)assetsCount;
- (unsigned long long)approximateCount;
- (id)mutableAssets;
- (id)assets;
- (void)prepareForDeletion;
- (void)didSave;
- (void)willSave;
- (id)childKeyForOrdering;
- (id)descriptionOfChildCollectionOrderValues;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *childCollections; // @dynamic childCollections;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly) Class superclass;

@end

