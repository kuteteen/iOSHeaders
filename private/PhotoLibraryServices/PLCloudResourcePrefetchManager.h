//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, PLCloudPhotoLibraryManager, PLCloudResourcePruneManager, PLPhotoLibrary;

@interface PLCloudResourcePrefetchManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSMutableSet *_inflightResources;
    long long _defaultPrefetchMode;
    NSDate *_lastCheckCPLBGDownloadDate;
    _Bool _enqueuedCheckCPLBGDownload;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)_orderedPrefetchConditionStringsOnAssets;
+ (id)_originalResourceTypes;
- (void)_resourcesToPrefetchWithPredicates:(id)arg1 budget:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_resourcesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_predicatesForNonThumbnails;
- (id)_predicateForKeyFacePrefetching;
- (id)_predicateToPrefetchMemories:(id)arg1;
- (id)_resourcesToPrefetchForAsset:(id)arg1;
- (id)_prefetchResourceForAsset:(id)arg1 inResourceTypes:(id)arg2;
- (id)_predicatesForThumbnails;
- (_Bool)_shouldPrefetchMediums;
- (id)_lastCompletePrefetchDate;
- (id)_predicateForMaxFilesize:(long long)arg1;
- (id)_predicateForResourceCreatedAfterDate:(id)arg1;
- (id)_predicateForImageResourcePixelsLessOrEqual:(long long)arg1;
- (id)_irisConditionString;
- (id)_missingLocalOriginalConditionString;
- (id)_missingThumbnailConditionString;
- (id)_resourcePredicateForCPLResourceType:(unsigned long long)arg1 additionalResourcePredicates:(id)arg2;
- (id)_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
- (id)_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
- (long long)diskSpaceBudgetForNonThumbnails;
- (long long)diskSpaceBudgetForThumbnails;
- (void)_handlePrefetchError:(id)arg1 forPLCloudResourceWithObjectID:(id)arg2;
- (void)_incrementPrefetchCountForPLCloudResources:(id)arg1;
- (void)_prefetchResources:(id)arg1 shouldAutoPefetchNextBatch:(_Bool)arg2;
- (void)_startPrefetchNextBatch;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (_Bool)_canPrefetch;
- (id)_identifierForResourceDownload:(id)arg1;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_reloadDefaultDownload;
- (void)_reloadDownloadOriginalsSetting;
- (void)prefetchResourcesWithPredicates:(id)arg1;
- (id)prefetchStatusForDebug:(_Bool)arg1;
- (void)prefetchResource:(unsigned long long)arg1 forAssetsWithObjectIDs:(id)arg2;
- (void)stop;
- (void)_cleanupInflightResources;
- (void)_checkCPLBackgroundDownloadOperations;
- (void)startAutomaticPrefetch;
- (void)dealloc;
- (id)initWithCPLManager:(id)arg1 pruneManager:(id)arg2;
- (id)init;

@end

