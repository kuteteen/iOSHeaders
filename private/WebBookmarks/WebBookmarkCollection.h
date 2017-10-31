//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBBookmarkProvider.h"
#import "WBDatabaseLockAcquisitorDelegate.h"

@class NSString, SafariFetcherServerProxy, WBDatabaseLockAcquisitor, WebBookmark, WebBookmarkTitleWordTokenizer;

@interface WebBookmarkCollection : NSObject <WBDatabaseLockAcquisitorDelegate, WBBookmarkProvider>
{
    struct sqlite3 *_db;
    struct __CFLocale *_locale;
    WebBookmarkTitleWordTokenizer *_wordTokenizer;
    WebBookmark *_rootBookmark;
    int _favoritesFolderIdentifier;
    _Bool _dirty;
    SafariFetcherServerProxy *_safariFetcherServerProxy;
    _Bool _readonly;
    _Bool _skipExternalNotifications;
    long long _mergeMode;
    WBDatabaseLockAcquisitor *_databaseLockAcquisitor;
    long long _lastObservedLocalMigrationState;
}

+ (void)_resetDeviceIdentifierForCloudKit;
+ (id)_deviceIdentifierForCloudKitGenerateIfNeeded:(_Bool)arg1;
+ (id)_deviceIdentifierForCloudKit;
+ (id)bookmarkImagesDirectoryPath;
+ (id)_syncLockFileName;
+ (id)_uniqueExternalUUID;
+ (id)safariBookmarkCollection;
+ (unsigned long long)readingListArchivesDiskUsage;
+ (id)safariDirectoryPath;
+ (id)readingListArchivesDirectoryPath;
+ (id)_safariInMemoryChangesFilePath;
+ (id)_safariPreferencesDomain;
+ (id)_safariContainerPath;
+ (id)_currentProcessContainerPath;
+ (_Bool)_removeCorruptedBookmarksDatabaseAtPath:(id)arg1;
+ (_Bool)_bookmarkCollectionSyncAllowed;
+ (id)_syncFlags;
+ (void)_postBookmarksChangedSyncNotificationOnSyncQueue;
+ (void)unholdLockSync:(const void *)arg1;
+ (void)holdLockSync:(const void *)arg1;
+ (void)_unlockSync;
+ (void)unlockSyncAsynchronously;
+ (void)unlockSync;
+ (_Bool)_lockSync;
+ (_Bool)lockSync;
+ (_Bool)_isLockedSync;
+ (_Bool)isLockedSync;
- (void).cxx_destruct;
- (void)test_restoreMissingSpecialBookmarks;
- (void)_test_preventPeriodicallyApplyingInMemoryChangesToDatabase;
- (id)_syncableBookmarksIDsInFolderWithBookmarkID:(int)arg1;
- (_Bool)_setAccountHash:(id)arg1;
- (id)_accountHash;
- (_Bool)_setLocalMigrationState:(long long)arg1 generateDeviceIdentifierIfNeeded:(_Bool)arg2;
- (long long)_localMigrationState;
@property(readonly, nonatomic) _Bool _usesCloudKit; // @dynamic _usesCloudKit;
- (long long)_syncType;
- (void)_updateSelectedFavoritesFolderWithBookmarkID:(int)arg1 wasFavoritesFolder:(_Bool)arg2 isFavoritesFolder:(_Bool)arg3;
- (_Bool)_mergeBookmark:(id)arg1 withOriginalBookmark:(id)arg2 prioritizeOriginalBookmarkAttributes:(_Bool)arg3 generateChangesIfNeeded:(_Bool)arg4;
- (id)_fetchBookmarkIDsInFolder:(int)arg1 onlyFolders:(_Bool)arg2 includingHiddenBookmarks:(_Bool)arg3;
- (_Bool)_bookmark:(id)arg1 isDuplicateOfBookmark:(id)arg2;
- (void)_appendDuplicateBookmarkGroupsInBookmarks:(id)arg1 toGroups:(id)arg2 considerBookmarksWithSyncDataAsUnique:(_Bool)arg3 davHomePath:(id)arg4;
- (_Bool)_bookmark:(id)arg1 hasCurrentDAVHomePath:(id)arg2;
- (_Bool)_bookmark:(id)arg1 hasPriorityOverBookmarkForDeduplication:(id)arg2 prioritizeBookmarksWithSyncData:(_Bool)arg3 davHomePath:(id)arg4;
- (_Bool)_recalculateCachedChildrenCountAndOrderIndices;
- (_Bool)_deleteAndRebuildAncestorTableRecords;
- (_Bool)_deduplicateBookmarksWithRootFolder:(int)arg1 depth:(unsigned long long)arg2 trackChanges:(_Bool)arg3 considerBookmarksWithSyncDataAsUnique:(_Bool)arg4 davHomeURL:(id)arg5;
- (_Bool)_needsDeduplicationForBookmarkDAVWithHomeURL:(id)arg1;
- (_Bool)_deduplicateBookmarksForBookmarkDAVWithHomeURL:(id)arg1;
- (_Bool)_deduplicateBookmarksForSyncingAndTrackChanges:(_Bool)arg1 considerBookmarksWithSyncDataAsUnique:(_Bool)arg2;
- (_Bool)deduplicateBookmarksWithRootFolder:(int)arg1 depth:(unsigned long long)arg2;
- (_Bool)deduplicateBookmarks;
- (void)_enumerateContentsOfBookmarkFolder:(int)arg1 includingSubfolders:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)modifyBookmarkInMemory:(id)arg1;
- (void)addBookmarkInMemory:(id)arg1 toFolderWithID:(int)arg2;
- (void)_deleteBookmarkInMemory:(id)arg1;
- (void)deleteBookmarksInMemory:(id)arg1 inFolder:(int)arg2;
- (void)deleteBookmarkInMemory:(id)arg1;
- (void)databaseLockAcquisitor:(id)arg1 acquiredLock:(_Bool)arg2;
- (_Bool)_applyInMemoryChangesToDatabasePostChangeNotification:(_Bool)arg1;
- (_Bool)applyInMemoryChangesToDatabase;
- (void)persistChangesWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasInMemoryChanges;
- (id)_inMemoryChangeSet;
- (void)_setupInMemoryChangeSet;
- (_Bool)_trackChangesInMemoryIfDatabaseWriteIsNotAllowed;
- (long long)_mergeMode;
- (void)_setMergeMode:(long long)arg1;
@property(readonly, nonatomic, getter=isMerging) _Bool merging;
- (id)databaseHealthInformation;
- (id)_fastFetchBookmarksInBookmarkFolder:(int)arg1 options:(unsigned long long)arg2 offset:(int)arg3 limit:(int)arg4;
- (id)_fastFetchBookmarksInBookmarkFolder:(int)arg1 includingHiddenBookmarks:(_Bool)arg2;
- (id)fastFetchBookmarksInBookmarkList:(id)arg1;
- (_Bool)_updateHiddenAncestorCountForBookmarksUnderFolderID:(int)arg1 addingOffset:(int)arg2;
- (_Bool)_insertAncestorTableEntriesForBookmarkID:(int)arg1 withAncestorIDs:(id)arg2;
- (void)_clearAndCreateAncestorTable;
- (_Bool)_ensureFolderChildrenCount:(id)arg1;
- (void)_restoreOrMergeReadingListFolderWithChangeNotification:(_Bool)arg1;
- (void)_restoreOrMergeWhiteListFolderAndContentsWithWebFilterWhiteList:(id)arg1 ensureChildCount:(_Bool)arg2 postChangeNotification:(_Bool)arg3;
- (void)restoreOrMergeWhiteListFolderAndContentsWithChangeNotification:(_Bool)arg1;
- (void)_normalizeDatabaseURLs;
- (_Bool)_importSyncAnchorPlist:(id)arg1;
- (_Bool)_importBookmarksPlist:(id)arg1;
- (void)_simulateCrashWithDescription:(id)arg1;
- (void)_startReadingListFetcher;
- (id)_safariFetcherServerProxy;
- (void)_postBookmarksSpecialFoldersDidChangeNotification;
- (void)_postBookmarksFolderContentsDidChangeNotification:(int)arg1;
- (void)_postBookmarksDidReloadNotificationAndStartReadingListFetcherIfChangesWereMade;
- (void)_postBookmarksDidReloadNotification;
- (id)frequentlyVisitedSitesFolderBookmarkID;
- (id)frequentlyVisitedSitesList;
- (id)frequentlyVisitedSitesFolder;
- (id)_lazyCreateFrequentlyVisitedSitesBookmark;
- (_Bool)bookmarkIsFavoritesFolder:(id)arg1;
- (id)favoritesFolderList;
- (id)favoritesFolder;
- (void)setFavoritesFolder:(id)arg1 localOnly:(_Bool)arg2;
- (void)_clearCachedFavoritesFolderIdentifier;
- (int)_favoritesFolderIdentifier;
- (void)setFavoritesFolderIdentifier:(int)arg1 postChangeNotification:(_Bool)arg2;
- (void)_updateSyncNotificationType;
- (void)_metaDataFileChanged:(id)arg1;
- (void)_registerForSyncBookmarksFileChangedNotification;
- (_Bool)_incrementDAVGeneration;
- (int)_DAVGeneration;
- (_Bool)_markBookmarkID:(int)arg1 added:(_Bool)arg2;
- (_Bool)_clearChangeList;
- (id)_changeList;
- (void)_collectChangesOfType:(int)arg1 withClause:(id)arg2 intoArray:(id)arg3;
- (_Bool)_incrementGeneration;
- (_Bool)_indexAllTitleWords;
- (_Bool)_reindexBookmarkID:(int)arg1 title:(id)arg2;
- (_Bool)_indexBookmarkID:(int)arg1 title:(id)arg2;
- (_Bool)_clearTitleWordsForBookmarkID:(int)arg1;
- (void)_normalizeSearchString:(struct __CFString *)arg1;
- (_Bool)_deleteAncestorTableEntriesForBookmarkID:(int)arg1;
- (_Bool)_insertAncestorTableEntriesForBookmarkID:(int)arg1 withParentID:(int)arg2;
- (_Bool)_rebuildAncestorTable;
- (_Bool)_orderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2 excludeDeletedBookmarks:(_Bool)arg3;
- (_Bool)_unsafeOrderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2 excludeDeletedBookmarks:(_Bool)arg3;
- (id)_serverIDAtOrderIndex:(unsigned int)arg1 inFolderWithServerID:(id)arg2;
- (id)_serverIDsInFolderWithServerID:(id)arg1 excludeDeletedBookmarks:(_Bool)arg2;
- (id)_syncKeysForServerIDs:(id)arg1;
- (_Bool)_setSyncData:(id)arg1 forBookmark:(id)arg2;
- (_Bool)_setSyncKey:(id)arg1 forBookmark:(id)arg2;
- (id)_firstOrLastServerIDInFolderWithServerID:(id)arg1 isFirst:(_Bool)arg2;
- (id)_lastServerIDInFolderWithServerID:(id)arg1;
- (id)_firstServerIDInFolderWithServerID:(id)arg1;
- (id)_serverIDOfSiblingBookmarkWithServerID:(id)arg1 immediatelyBeforeOrAfter:(_Bool)arg2;
- (id)_serverIDAfterServerID:(id)arg1;
- (id)_serverIDBeforeServerID:(id)arg1;
- (_Bool)_setServerID:(id)arg1 forBookmark:(id)arg2;
- (id)_bookmarkWithServerID:(id)arg1 excludeDeletedBookmarks:(_Bool)arg2;
- (int)_bookmarkIDForServerID:(id)arg1 excludeDeletedBookmarks:(_Bool)arg2;
- (id)_serverIDForBookmarkID:(int)arg1;
- (_Bool)_updateCachedChildCountForParentID:(int)arg1 inDirection:(int)arg2;
- (_Bool)_markBookmarkID:(int)arg1 withSpecialID:(int)arg2;
- (_Bool)_saveBookmark:(id)arg1 withSpecialID:(int)arg2 updateGenerationIfNeeded:(_Bool)arg3;
- (_Bool)_childrenOfParentBookmarkAreUnsyncable:(id)arg1;
- (id)_databaseTitleForSpecialID:(int)arg1;
- (int)_specialIDForBookmarkBeingSaved:(id)arg1;
- (int)_specialIDForBookmarkTitle:(id)arg1;
- (_Bool)_addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentID:(int)arg3 orderIndex:(unsigned int)arg4 isFolder:(_Bool)arg5 externalUUID:(id)arg6 associatedBookmark:(id)arg7 updateParentChildCount:(_Bool)arg8 updateAncestorEntries:(_Bool)arg9;
- (_Bool)_insertTombsonesRecursivelyHelperCurrentDepth:(unsigned long long)arg1 folder:(id)arg2;
- (_Bool)_insertTombsonesRecursivelyForRootFolder:(id)arg1;
- (_Bool)_deleteRecursively:(int)arg1;
- (_Bool)_deleteBookmark:(id)arg1 leaveTombstone:(_Bool)arg2;
- (_Bool)_clearAllDAVSyncData;
- (_Bool)_clearAllSyncKeys;
- (_Bool)_clearSyncKeysUnderBookmarkID:(int)arg1 isFolder:(_Bool)arg2;
- (_Bool)_clearAllTombstones;
- (_Bool)_insertTombstoneWithServerID:(id)arg1 syncData:(id)arg2;
- (_Bool)_moveBookmark:(id)arg1 toFolderWithID:(int)arg2 detectCycles:(_Bool)arg3;
- (int)_intFromExecutingSQL:(id)arg1;
- (int)_executeSQLWithCString:(const char *)arg1;
- (int)_executeSQL:(id)arg1;
- (id)_errorForMostRecentSQLiteErrorWithErrorCode:(long long)arg1;
- (id)_errorForMostRecentSQLiteError;
- (int)_finalizeStatementIfNotNull:(struct sqlite3_stmt *)arg1;
- (struct sqlite3_stmt *)_sqliteStatementWithQuery:(id)arg1;
- (struct sqlite3_stmt *)_selectBookmarksWhere:(id)arg1 returnType:(long long)arg2;
- (struct sqlite3_stmt *)_selectBookmarksWhere:(id)arg1;
- (id)_rootFolderHiddenChildrenClause;
- (_Bool)_restoreMissingSpecialBookmarks;
- (_Bool)_restoreBookmarkBarIfMissing;
- (_Bool)_migrateBookmarksPlist:(id)arg1 syncAnchorPlist:(id)arg2;
- (_Bool)_migrateToCurrentSchema;
- (void)_rerunMigrationsIfNecessary;
- (_Bool)migrateReadingListIconsFromDatabaseToBookmarkImagesDirectory;
- (void)_migrateSchemaVersion38ToVersion39;
- (void)_migrateSchemaVersion37ToVersion38;
- (void)_migrateSchemaVersion36ToVersion37;
- (void)_migrateSchemaVersion35ToVersion36;
- (void)_migrateSchemaVersion34ToVersion35;
- (void)_migrateSchemaVersion33ToVersion34;
- (void)_migrateSchemaVersion32ToVersion33;
- (void)_migrateSchemaVersion31ToVersion32;
- (void)_migrateSchemaVersion30ToVersion31;
- (void)_migrateSchemaVersion29ToVersion30;
- (void)_migrateSchemaVersion28ToVersion29;
- (void)_migrateSchemaVersion27ToVersion28;
- (void)_migrateSchemaVersion26ToVersion27;
- (void)_migrateSchemaVersion25ToVersion26;
- (void)_migrateSchemaVersion24ToVersion25;
- (void)_migrateSchemaVersion23ToVersion24;
- (void)_migrateSchemaVersion22ToVersion23;
- (void)_migrateSchemaVersion21ToVersion22;
- (void)_migrateSchemaVersion19And20ToVersion21;
- (void)_migrateSchemaVersion16AndVersion17AndVersion18ToVersion19;
- (void)_migrateSchemaVersion15ToVersion16;
- (void)_migrateSchemaVersion14ToVersion15;
- (void)_migrateSchemaVersion11And12And13ToVersion14;
- (void)_migrateSchemaVersion10ToVersion11;
- (void)_migrateSchemaVersion9ToVersion10;
- (void)_migrateSchemaVersion8ToVersion9;
- (void)_migrateSchemaVersion7ToVersion8;
- (void)_migrateSchemaVersion6ToVersion7;
- (void)_migrateSchemaVersion5ToVersion6;
- (void)_migrateSchemaVersion4ToVersion5;
- (void)_migrateSchemaVersion3ToVersion4;
- (void)_migrateSchemaVersion1And2ToVersion3;
- (void)_migrateSchemaVersion0ToVersion1;
- (void)_clearAndCreateBookmarksTables;
- (void)_clearAndCreateBookmarksTitleWordTable;
- (void)_createSchema;
- (long long)_userVersion;
- (id)_mergeCandidateBookmarkWithTitle:(id)arg1 address:(id)arg2 parent:(int)arg3 mergeMode:(long long)arg4;
- (id)_mergeCandidateFolderWithTitle:(id)arg1 parent:(int)arg2 mergeMode:(long long)arg3;
- (id)_firstBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(_Bool)arg2 inParent:(int)arg3;
- (id)_bookmarkWithSpecialID:(int)arg1;
- (unsigned int)_orderIndexForBookmarkInsertedIntoParent:(int)arg1 insertAtBeginning:(_Bool)arg2;
- (void)clearCarrierBookmarks;
- (unsigned long long)rollingReadingListMaximumCount;
- (id)rollingListOfArchivedReadingListItems;
- (void)rollOutReadingListItemIfNeededToMakeRoomForOneNewItem;
- (_Bool)rollOutLastReadingListItem;
- (void)_cullReadingListBookmarksList:(id)arg1 toSize:(unsigned long long)arg2;
- (id)readingListBookmarksNeedingArchiveInMode:(int)arg1;
- (id)readingListBookmarksNeedingArchiveInMode:(int)arg1 automaticArchivingEnabled:(_Bool)arg2;
- (id)firstReadingListBookmarkNeedingArchiveInMode:(int)arg1;
- (id)firstReadingListBookmarkNeedingArchiveInMode:(int)arg1 automaticArchivingEnabled:(_Bool)arg2;
- (unsigned long long)countReadingListBookmarksNeedingArchiveInMode:(int)arg1;
- (unsigned long long)countReadingListBookmarksNeedingArchiveInMode:(int)arg1 automaticArchivingEnabled:(_Bool)arg2;
- (id)_orderedWhereClauseForArchiveMode:(int)arg1;
- (id)_orderedWhereClauseForArchiveMode:(int)arg1 automaticArchivingEnabled:(_Bool)arg2;
- (id)_tableExpressionForArchiveMode:(int)arg1;
- (void)postBookmarksDidReloadNotification;
- (unsigned long long)indexOfReadingListBookmark:(id)arg1 countingOnlyUnread:(_Bool)arg2;
- (id)firstReadingListBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(_Bool)arg2;
- (id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(_Bool)arg3;
- (void)_addBookmarksForReadingListMatchStatement:(id)arg1 normalizedQuery:(id)arg2 toArray:(id)arg3 maxResults:(int)arg4;
- (id)_bookmarksFromStatementSelectingIDs:(const char *)arg1 withQuery:(id)arg2;
- (void)enumerateBookmarks:(_Bool)arg1 andReadingListItems:(_Bool)arg2 matchingString:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_enumerateBookmarksForMatchStatement:(id)arg1 normalizedQuery:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)bookmarksMatchingString:(id)arg1;
- (struct sqlite3_stmt *)_prefixSearch:(id)arg1 usingColumns:(const char *)arg2 maxCount:(unsigned int)arg3;
- (void)saveAndMoveBookmark:(id)arg1 toFolderID:(int)arg2;
- (void)saveIconWithData:(id)arg1 urlString:(id)arg2 forBookmark:(id)arg3;
- (void)deleteArchiveForReadingListBookmarkWithID:(int)arg1;
- (void)saveArchivesForReadingListBookmarks:(id)arg1;
- (void)saveArchiveForReadingListBookmarkWithID:(int)arg1;
- (_Bool)reorderList:(id)arg1 moveBookmarkAtIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (_Bool)reorderBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (_Bool)_moveBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (_Bool)moveBookmark:(id)arg1 toFolderWithID:(int)arg2;
- (_Bool)deleteBookmark:(id)arg1;
- (_Bool)_deleteBookmark:(id)arg1 postChangeNotification:(_Bool)arg2 forApplyingInMemoryChanges:(_Bool)arg3;
- (_Bool)deleteBookmarks:(id)arg1 postChangeNotification:(_Bool)arg2;
- (void)_deleteIconForBookmark:(id)arg1;
- (_Bool)deleteBookmark:(id)arg1 postChangeNotification:(_Bool)arg2;
- (_Bool)_saveBookmark:(id)arg1 startReadingListFetcher:(_Bool)arg2 forApplyingInMemoryChanges:(_Bool)arg3;
- (_Bool)saveBookmark:(id)arg1 startReadingListFetcher:(_Bool)arg2;
- (_Bool)saveBookmarks:(id)arg1 postNotification:(_Bool)arg2;
- (_Bool)saveBookmark:(id)arg1;
- (id)webFilterWhiteList;
- (int)webFilterWhiteListFolderBookmarkID;
- (_Bool)deleteAllFavoriteIcons;
- (_Bool)markAllFavoritesAsNeedingIcons;
- (id)bookmarksNeedingIcons;
- (_Bool)shouldFetchIconForBookmark:(id)arg1;
- (id)_parentIdentifiersOfBookmarksNeedingIcons;
- (_Bool)isEmpty;
- (int)readingListFolderBookmarkID;
- (id)_readingListItemsWhere:(id)arg1 filteredBy:(id)arg2 withInMemoryFilter:(id)arg3;
- (id)readingListWithUnreadOnly:(_Bool)arg1 filteredUsingString:(id)arg2;
- (id)readingListWithUnreadOnly:(_Bool)arg1;
- (id)bookmarksBarList;
- (id)rootList;
- (id)listWithID:(int)arg1 skipOffset:(unsigned int)arg2 includeHidden:(_Bool)arg3 filteredUsingString:(id)arg4;
- (id)listWithID:(int)arg1 skipOffset:(unsigned int)arg2 includeHidden:(_Bool)arg3;
- (id)listWithID:(int)arg1 skipOffset:(unsigned int)arg2;
- (id)listWithSpecialID:(int)arg1;
- (id)listWithID:(int)arg1;
- (id)subfoldersOfID:(int)arg1;
- (id)rootBookmark;
- (id)bookmarkAtPath:(id)arg1;
- (id)webFilterWhiteListFolder;
- (id)readingListFolder;
- (id)bookmarksBarBookmark;
- (id)bookmarkWithUUID:(id)arg1;
- (id)bookmarkWithID:(int)arg1;
- (unsigned long long)purge:(unsigned long long)arg1;
- (unsigned long long)purgeableSpace;
- (id)purgeableReadingListItems;
- (void)localeSettingsChanged;
- (_Bool)vacuum;
- (_Bool)markWebContentFilterAllowsAllReadingListItems;
- (_Bool)updateReadingListWebFilterStatusForUnsetItemsOnly:(_Bool)arg1;
- (_Bool)clearReadingListArchiveWithUUID:(id)arg1;
- (_Bool)clearAllReadingListArchives;
- (_Bool)markArchivedReadingListItemsAsNonRecoverable;
- (_Bool)cleanupReadingListArchives;
- (void)dealloc;
- (_Bool)_primaryCollection;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3;
- (_Bool)_setupWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(_Bool)arg4;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(_Bool)arg4 readonlyCollection:(_Bool)arg5 skipExternalNotifications:(_Bool)arg6;
- (_Bool)_checkDatabaseIntegrity;
- (_Bool)_verifyAllTablesExist:(int *)arg1;
- (_Bool)_openDatabaseAtPath:(id)arg1 checkIntegrity:(_Bool)arg2 error:(id *)arg3;
- (id)initSafariBookmarkCollectionCheckingIntegrity:(_Bool)arg1 readonlyCollection:(_Bool)arg2 skipExternalNotifications:(_Bool)arg3;
- (id)initSafariBookmarkCollectionCheckingIntegrity:(_Bool)arg1 skipExternalNotifications:(_Bool)arg2;
- (id)initSafariBookmarkCollectionCheckingIntegrity:(_Bool)arg1;
- (id)initReadonlySafariBookmarkCollection;
- (id)initWithPath:(id)arg1;
- (_Bool)_setupWithPath:(id)arg1 checkIntegrity:(_Bool)arg2;
- (id)initWithPath:(id)arg1 checkIntegrity:(_Bool)arg2;
@property(readonly, nonatomic) long long _cloudKitLocalMigrationState;
- (_Bool)containsOnlyStockBookmarks;
- (void)_setSyncNotificationType:(long long)arg1;
- (void)_postBookmarksChangedSyncNotification;
- (void)rollbackSyncTransaction;
- (void)commitSyncTransaction;
- (_Bool)beginSyncTransaction;
- (id)syncDataForKey:(id)arg1;
- (_Bool)setSyncData:(id)arg1 forKey:(id)arg2;
- (id)syncStringForKey:(id)arg1;
- (_Bool)_syncSetString:(id)arg1 forKey:(id)arg2 updatedExistingKey:(_Bool *)arg3;
- (_Bool)syncSetString:(id)arg1 forKey:(id)arg2;
- (_Bool)_deleteSyncPropertyForKey:(id)arg1;
- (_Bool)_syncPropertyExistsForKey:(id)arg1;
- (unsigned long long)generation;
- (void)removePersistedInMemoryBookmarkChangesFile;
- (_Bool)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(_Bool)arg2 clearSyncData:(_Bool)arg3 error:(id *)arg4;
- (_Bool)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_markSpecialBookmarks;
- (_Bool)_mergeChildrenOfID:(int)arg1 referencingBase:(id)arg2 error:(id *)arg3;
- (_Bool)_syncAdd:(id)arg1 toParent:(int)arg2 withOrderIndex:(unsigned int)arg3 error:(id *)arg4;
- (id)bookmarksDictionary;
- (_Bool)_addChildrenOfID:(int)arg1 toCollection:(id)arg2 recursive:(_Bool)arg3 error:(id *)arg4;
- (id)_bookmarkDictionaryForSqliteRow:(struct sqlite3_stmt *)arg1 recursive:(_Bool)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

