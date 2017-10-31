//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCSyncOperationThrottleParams, NSArray, NSDictionary, NSMutableDictionary, NSObject<OS_xpc_object>, NSSet, NSString;

@interface BRCUserDefaults : NSObject
{
    BRCUserDefaults *_globalUserDefault;
    NSDictionary *_serverContainerConfigurationDict;
    NSMutableDictionary *_cache;
    NSString *_clientZoneIdentifier;
}

+ (void)saveServerConfigToDB:(id)arg1;
+ (void)loadCachedServerConfigFromDB:(id)arg1;
+ (void)reset;
+ (void)setServerConfigurationURL:(id)arg1 whenLoaded:(CDUnknownBlockType)arg2;
+ (id)defaultsForSharedZone;
+ (id)defaultsForMetadataContainer;
+ (id)defaultsForMangledID:(id)arg1;
+ (id)_userDefaultsManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long applyCountToSignalFaultsLive;
@property(readonly, nonatomic) unsigned long long fieldsToMoveOutOfTrashMask;
@property(readonly, nonatomic) unsigned long long utiCacheSize;
@property(readonly, nonatomic) BOOL forceSyncOverride;
@property(readonly, nonatomic) double downloadSizeRefreshInterval;
@property(readonly, nonatomic) unsigned long long sqliteCacheSpill;
@property(readonly, nonatomic) unsigned long long sqliteCacheSize;
@property(readonly, nonatomic) double powerLogReportInterval;
@property(readonly, nonatomic) unsigned long long maxFolderEnumerationDepth;
@property(readonly, nonatomic) unsigned long long maxFolderEnumerationCount;
@property(readonly, nonatomic) unsigned long long deleteShareIDBatchCount;
@property(readonly, nonatomic) _Bool shouldFixupTargetCZMAliases;
@property(readonly, nonatomic) unsigned long long optimisticallyFillChainBatchSpace;
@property(readonly, nonatomic) _Bool optimisticallyPCSChain;
@property(readonly, nonatomic) _Bool shouldAutoMigrateToCloudDocs;
@property(readonly, nonatomic) unsigned int ignoredQuarantineMask;
@property(readonly, nonatomic) NSSet *excludedExtensionsWorthPreserving;
@property(readonly, nonatomic) NSSet *excludedFilenamesWorthPreserving;
@property(readonly, nonatomic) NSSet *excludedFilenamesWorthWarningAtLogout;
@property(readonly, nonatomic) unsigned long long lostScanDeepScanFirstThreshold;
@property(readonly, nonatomic) unsigned long long readerMarkChildrenLostBatchSize;
@property(readonly, nonatomic) _Bool destroyiWorkShares;
@property(readonly, nonatomic) unsigned long long pcsChainingBatchSize;
@property(readonly, nonatomic) unsigned long long pcsChainingMaxPathDepth;
@property(readonly, nonatomic) _Bool shouldPreparePCSMigration;
@property(readonly, nonatomic) NSSet *blacklistPCSPrep;
@property(readonly, nonatomic) _Bool onlyTreatCaughtUpAsConsistent;
@property(readonly, nonatomic) unsigned long long zoneHealthReportedRecordNamesCount;
@property(readonly, nonatomic) double periodicSyncTimeInterval;
@property(readonly, nonatomic) unsigned long long notifBatchSize;
@property(readonly, nonatomic) unsigned long long notifGatherUpTo;
@property(readonly, nonatomic) unsigned long long notifOverflowLimit;
@property(readonly, nonatomic) unsigned int thumbnailTransferQueueWidth;
@property(readonly, nonatomic) long long minFileSizeForThumbnailTransfer;
@property(readonly, nonatomic) double packageExtensionPlistWriteInterval;
@property(readonly, nonatomic) double documentAccessHighPriorityInterval;
@property(readonly, nonatomic) long long minimalSizeToShowAdditionalDescription;
@property(readonly, nonatomic) double intervalToWaitBeforeShowingAdditionalDescription;
@property(readonly, nonatomic) NSDictionary *migrationThrottleParams;
@property(readonly, nonatomic) NSDictionary *recentsEnumeratorFailureThrottleParams;
@property(readonly, nonatomic) unsigned long long recentsEnumeratorMaxHierarchyDepth;
@property(readonly, nonatomic) unsigned long long recentsEnumeratorBatchSize;
@property(readonly, nonatomic) double recentsEnumeratorPacerInterval;
@property(readonly, nonatomic) _Bool spotlightIndexingEnabled;
@property(readonly, nonatomic) _Bool shouldDisplayUploadNotification;
@property(readonly, nonatomic) double activeDownloadSizeRefreshInterval;
@property(readonly, nonatomic) double diskSpaceCheckInterval;
@property(readonly, nonatomic) unsigned long long minimumDiskSpaceRequiredToBeFunctional;
@property(readonly, nonatomic) unsigned long long maximumAccountSizeToBeAlwaysGreedy;
@property(readonly, nonatomic) float relativeDiskSpaceRequiredToReturnToGreedyState;
@property(readonly, nonatomic) unsigned long long diskSpaceRequiredToReturnToGreedyState;
@property(readonly, nonatomic) unsigned long long minimumDiskSpaceRequiredToBeGreedy;
@property(readonly, nonatomic) unsigned long long minimumDiskSpaceRequiredToDownloadUserInitiated;
@property(readonly, nonatomic) unsigned long long minimumDiskSpaceRequiredToDownload;
@property(readonly, nonatomic) unsigned long long aliasDeletionBatchSize;
@property(readonly, nonatomic) unsigned long long copyShareIDsBatchSize;
@property(readonly, nonatomic) unsigned long long statementCacheMaxCountForClientTruth;
@property(readonly, nonatomic) unsigned long long statementCacheMaxCountForServerTruth;
@property(readonly, nonatomic) double maximumDocumentAgeToBeGreedy;
@property(readonly, nonatomic) double cacheDeleteRecomputeInterval;
@property(readonly, nonatomic) long long dbReclaimableSpaceThreshold;
@property(readonly, nonatomic) double purgePacerInterval;
@property(readonly, nonatomic) double graveyardAgeDeltaInMedUrgency;
@property(readonly, nonatomic) double graveyardAgeDeltaInLowUrgency;
@property(readonly, nonatomic) double defaultOnDiskAccessTimeDefaultForEviction;
@property(readonly, nonatomic) double onDiskAccessTimeDeltaInVeryHighUrgency;
@property(readonly, nonatomic) double onDiskAccessTimeDeltaInHighUrgency;
@property(readonly, nonatomic) double onDiskAccessTimeDeltaInMedUrgency;
@property(readonly, nonatomic) double onDiskAccessTimeDeltaInLowUrgency;
@property(readonly, nonatomic) double defaultTimeDeltaForEviction;
@property(readonly, nonatomic) double accessTimeDeltaInVeryHighUrgency;
@property(readonly, nonatomic) double accessTimeDeltaInHighUrgency;
@property(readonly, nonatomic) double accessTimeDeltaInMedUrgency;
@property(readonly, nonatomic) double accessTimeDeltaInLowUrgency;
@property(readonly, nonatomic) _Bool forceBatchFailureWhenReceivingAssetTokenExpiration;
@property(readonly, nonatomic) double forceForegroundGracePeriod;
@property(readonly, nonatomic) double foregroundGracePeriod;
@property(readonly, nonatomic) unsigned int logoutTimeout;
@property(readonly, nonatomic) long long minAutomaticallyEvictableFilesize;
@property(readonly, nonatomic) long long minFileSizeForGraveyard;
@property(readonly, nonatomic) unsigned int publishURLTimeout;
@property(readonly, nonatomic) NSString *serverConfigurationURL;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *cacheDeletePushXPCActivity;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *stageGCXPCActivity;
@property(readonly, nonatomic) _Bool nsurlsessiondEnabled;
@property(readonly, nonatomic) _Bool sessionZombiesEnabled;
@property(readonly, nonatomic) double transferQueueTransferBudget;
@property(readonly, nonatomic) int transferQueueMaxConcurrentOperations;
@property(readonly, nonatomic) int transferQueueMinConcurrentOperations;
@property(readonly, nonatomic) int transferQueueMinBatchSize;
@property(readonly, nonatomic) unsigned long long fseventProcessBatchSize;
@property(readonly, nonatomic) unsigned long long fseventQueueBufferSize;
@property(readonly, nonatomic) double fseventsResetBackoff;
@property(readonly, nonatomic) double fseventsLatency;
@property(readonly, nonatomic) double readerLostItemBackoff;
@property(readonly, nonatomic) int writerApplyBatchSize;
@property(readonly, nonatomic) double readerPackageProcessingDelay;
@property(readonly, nonatomic) int readerScanBatchSize;
@property(readonly, nonatomic) int writerMaxConcurrentIOs;
@property(readonly, nonatomic) int readerMaxConcurrentIOs;
@property(readonly, nonatomic) double writerIOsCancelDelay;
@property(readonly, nonatomic) double readerIOsCancelDelay;
@property(readonly, nonatomic) double systemLowDiskLatency;
@property(readonly, nonatomic) double systemPowerLatency;
@property(readonly, nonatomic) double systemReachabilityLatency;
@property(readonly, nonatomic) unsigned long long sharedDBSyncDownBatchRecordsCount;
@property(readonly, nonatomic) unsigned long long zoneHealthSyncDownBatchRecordsCount;
@property(readonly, nonatomic) unsigned long long downloadWillRetryProgressMaxCount;
@property(readonly, nonatomic) unsigned long long downloadBatchCount;
@property(readonly, nonatomic) unsigned long long downloadBatchRecordsCount;
@property(readonly, nonatomic) unsigned long long uploadBatchCount;
@property(readonly, nonatomic) unsigned long long uploadBatchRecordsCount;
@property(readonly, nonatomic) long long uploadMaxInPkgFileSize;
@property(readonly, nonatomic) long long uploadMaxFileSize;
@property(readonly, nonatomic) unsigned long long maxNumberOfFilesInAFolder;
@property(readonly, nonatomic) unsigned long long maxTotalFilesCount;
@property(readonly, nonatomic) _Bool shouldSessionBeGreedy;
@property(readonly, nonatomic) _Bool shouldAppLibraryBeGreedy;
@property(readonly, nonatomic) _Bool skipServerSideThrottling;
@property(readonly, nonatomic) float dbAutovacuumRatio;
@property(readonly, nonatomic) long long dbAutovacuumBatchSize;
@property(readonly, nonatomic) _Bool allowReadOnlyDBInIPC;
@property(readonly, nonatomic) double dbBatchDelay;
@property(readonly, nonatomic) int dbBatchSize;
@property(readonly, nonatomic) _Bool dbProfiled;
@property(readonly, nonatomic) _Bool dbTraced;
@property(readonly, nonatomic) NSDictionary *readerThrottleParams;
@property(readonly, nonatomic) unsigned long long sharedDbSyncDownCoalesceNanoseconds;
@property(readonly, nonatomic) float syncUpDocumentDeleteCost;
@property(readonly, nonatomic) float syncUpDocumentEditCost;
@property(readonly, nonatomic) float syncUpDocumentCreateCost;
@property(readonly, nonatomic) float syncUpDataDeleteCost;
@property(readonly, nonatomic) float syncUpDataEditCost;
@property(readonly, nonatomic) float syncUpDataCreateCost;
@property(readonly, nonatomic) float syncUpStructureDeleteCost;
@property(readonly, nonatomic) float syncUpStructureEditCost;
@property(readonly, nonatomic) float syncUpStructureCreateCost;
@property(readonly, nonatomic) float syncUpInitialItemCost;
@property(readonly, nonatomic) float syncUpMinutelyBudget;
- (float)_defaultSyncUpMinutelyBudget;
@property(readonly, nonatomic) float syncUpHourlyBudget;
- (float)_defaultSyncUpHourlyBudget;
@property(readonly, nonatomic) float syncUpDailyBudget;
- (float)_defaultSyncUpDailyBudget;
@property(readonly, nonatomic) float syncUpMinimalBudget;
@property(readonly, nonatomic) NSDictionary *syncClientZoneErrorThrottleParams;
@property(readonly, nonatomic) NSDictionary *syncClientZoneThrottleParams;
@property(readonly, nonatomic) BRCSyncOperationThrottleParams *syncUpThrottle;
@property(readonly, nonatomic) BRCSyncOperationThrottleParams *syncDownThrottle;
@property(readonly, nonatomic) NSDictionary *appLibraryAliasRemovalThrottleParams;
@property(readonly, nonatomic) NSDictionary *sharedAppLibraryResetThrottleParams;
@property(readonly, nonatomic) NSDictionary *appLibraryResetThrottleParams;
@property(readonly, nonatomic) NSDictionary *operationFailureThrottleParams;
@property(readonly, nonatomic) _Bool skipSyncUpThrottlingOnBatchFailures;
@property(readonly, nonatomic) _Bool skipPerItemSyncUpThrottling;
@property(readonly, nonatomic) double appsFetchPacerDelay;
@property(readonly, nonatomic) double quotaFetchPacerDelay;
@property(readonly, nonatomic) unsigned long long availableQuotaComfortSize;
@property(readonly, nonatomic) NSDictionary *perItemSyncUpThrottleParams;
@property(readonly, nonatomic) NSDictionary *uploadFileModifiedThrottleParams;
@property(readonly, nonatomic) NSDictionary *uploadThrottleParams;
@property(readonly, nonatomic) NSDictionary *downloadThrottleParams;
@property(readonly, nonatomic) NSDictionary *applyThrottleParams;
@property(readonly, nonatomic) NSDictionary *lostItemThrottleParams;
@property(readonly, nonatomic) NSDictionary *appLibraryScanThrottleParams;
@property(readonly, nonatomic) NSArray *syncThrottles;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *transmogrifyXPCActivity;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *forcedSyncXPCActivity;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *configurationUpdateXPCActivity;
@property(readonly, nonatomic) unsigned short stageInPackageFileUmask;
@property(readonly, nonatomic) unsigned short stageInPackageDirectoryUmask;
@property(readonly, nonatomic) unsigned short stageDirectoryUmask;
@property(readonly, nonatomic) unsigned short stageFSRootUmask;
@property(readonly, nonatomic) unsigned short stageFileUmask;
- (unsigned short)_umaskForKey:(id)arg1;
@property(readonly, nonatomic) NSSet *blacklistedThumbnailExtensions;
@property(readonly, nonatomic) NSSet *autoEvictableUTIs;
@property(readonly, nonatomic) NSSet *nonAutoEvictableUTIs;
@property(readonly, nonatomic) NSSet *nonEvictablePathComponents;
@property(readonly, nonatomic) NSSet *nonEvictableExtensions;
@property(readonly, nonatomic) NSSet *nonAutoEvictableExtensions;
@property(readonly, nonatomic) NSSet *extensionsSkippingBundleBitFixup;
@property(readonly, nonatomic) _Bool shouldFixupBundleBitOnPackages;
@property(readonly, nonatomic) NSSet *iworkShareableExtensions;
@property(readonly, nonatomic) NSSet *blacklistedPackageExtensions;
@property(readonly, nonatomic) NSSet *packageExtensions;
- (id)_UTISetFor:(id)arg1 startingWithExtensions:(id)arg2;
- (id)_extensionSetForKey:(id)arg1 startingWithExtensions:(id)arg2;
@property(readonly, nonatomic) unsigned int treeEnumeratorBatchSize;
@property(readonly, nonatomic) unsigned int maxSyncPathDepth;
@property(readonly, nonatomic) unsigned int maxRelativePathDepth;
@property(readonly, nonatomic) unsigned int maxRecordCountInQuerySharedRecordsOperation;
@property(readonly, nonatomic) unsigned int maxRecordCountInClientZoneModifyRecordsOperation;
@property(readonly, nonatomic) float modifyRecordsCountAdditiveIncreaseFraction;
@property(readonly, nonatomic) float modifyRecordsCountMultiplicativeDecrease;
@property(readonly, nonatomic) unsigned int maxRecordCountInModifyRecordsOperation;
@property(readonly, nonatomic) unsigned int maxRecordCountInFetchRecordsOperation;
@property(readonly, nonatomic) _Bool shouldFetchAllChanges;
@property(readonly, nonatomic) unsigned long long maxXattrBlobSize;
- (id)xpcActivityDictionaryForKey:(id)arg1 byDefault:(id)arg2;
- (_Bool)boolForKey:(id)arg1 inheritFromGlobal:(_Bool)arg2 byDefault:(_Bool)arg3;
- (_Bool)boolForKey:(id)arg1 byDefault:(_Bool)arg2;
- (double)doubleForKey:(id)arg1 min:(double)arg2 max:(double)arg3 byDefault:(double)arg4;
- (float)floatForKey:(id)arg1 min:(float)arg2 max:(float)arg3 byDefault:(float)arg4;
- (float)floatForKey:(id)arg1 inheritFromGlobal:(_Bool)arg2 min:(float)arg3 max:(float)arg4 byDefault:(float)arg5;
- (unsigned long long)unsignedLongLongForKey:(id)arg1 min:(unsigned long long)arg2 max:(unsigned long long)arg3 byDefault:(unsigned long long)arg4;
- (unsigned int)unsignedIntForKey:(id)arg1 min:(unsigned int)arg2 max:(unsigned int)arg3 byDefault:(unsigned int)arg4;
- (int)intForKey:(id)arg1 min:(int)arg2 max:(int)arg3 byDefault:(int)arg4;
- (id)objectForKey:(id)arg1 inheritFromGlobal:(_Bool)arg2 validateWithBlock:(CDUnknownBlockType)arg3;
- (id)_serverDefaultForKey:(id)arg1;
- (id)_loadObjectForKey:(id)arg1 inheritFromGlobal:(_Bool)arg2 validateWithBlock:(CDUnknownBlockType)arg3;
- (id)initAsGlobalWithServerConfiguration:(id)arg1;
- (id)initWithServerConfiguration:(id)arg1 globalUserDefaults:(id)arg2 clientZoneIdentifier:(id)arg3;

@end

