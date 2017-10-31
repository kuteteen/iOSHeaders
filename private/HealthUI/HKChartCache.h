//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKOutstandingFetchOperationManager, NSArray, NSHashTable, NSMutableDictionary, _HKChartCachePendingFetchOperationManager;

@interface HKChartCache : NSObject
{
    NSHashTable *_observers;
    NSMutableDictionary *_cachedResultsByIdentifier;
    _HKChartCachePendingFetchOperationManager *_pendingFetchOperationsManager;
    NSMutableDictionary *_resultsLoadedByIdentifier;
    NSArray *_bufferedIdentifiers;
    _Bool _shouldBufferFetchOperations;
    id <HKChartCacheDataSource> _dataSource;
    HKOutstandingFetchOperationManager *_operationManager;
    long long _maxRetryCount;
}

@property(nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) _Bool shouldBufferFetchOperations; // @synthesize shouldBufferFetchOperations=_shouldBufferFetchOperations;
@property(retain, nonatomic) HKOutstandingFetchOperationManager *operationManager; // @synthesize operationManager=_operationManager;
@property(retain, nonatomic) id <HKChartCacheDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_handleOperationCompletionWithOperation:(id)arg1 identifier:(id)arg2 results:(id)arg3 error:(id)arg4;
- (id)_operationForIdentifier:(id)arg1;
- (void)invalidateCache;
- (void)invalidateResultsForIdentifiers:(id)arg1;
- (void)_addFetchOperationsForIdentifiers:(id)arg1;
- (void)_removeFetchOperationsForIdentifiers:(id)arg1;
- (void)fetchResultsForIdentifiers:(id)arg1;
- (id)cachedResultsForIdentifier:(id)arg1;
- (_Bool)cacheIsDirtyForIdentifier:(id)arg1;
- (void)_alertObserversDidUpdateResults;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) id dataSourceRespectingType;
- (id)init;

@end

