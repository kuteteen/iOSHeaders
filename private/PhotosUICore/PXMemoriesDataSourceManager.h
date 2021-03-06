//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import "PXPhotoLibraryUIChangeObserver.h"

@class NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString, PHFetchResult, PXMemoriesDataSource, PXMemoriesDataSourceState;

@interface PXMemoriesDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    _Bool _isWorking;
    _Bool _hasCreatedInitialDataSource;
    _Bool _loadFromEnd;
    PXMemoriesDataSourceState *__state;
    NSMutableOrderedSet *__remainingMemoriesToFetch;
}

@property(retain, setter=_setRemainingMemoriesToFetch:) NSMutableOrderedSet *_remainingMemoriesToFetch; // @synthesize _remainingMemoriesToFetch=__remainingMemoriesToFetch;
@property(retain, nonatomic, setter=_setState:) PXMemoriesDataSourceState *_state; // @synthesize _state=__state;
@property(nonatomic) _Bool loadFromEnd; // @synthesize loadFromEnd=_loadFromEnd;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)_createMemoriesDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (void)_workerQueue_fetchRemainingMemoriesInBatchesFromTheEnd:(_Bool)arg1;
- (void)startLoadingIfNeeded;
- (id)createInitialDataSource;
@property(readonly, nonatomic) PHFetchResult *memories;
- (id)initWithMemoriesFetchResult:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXMemoriesDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

