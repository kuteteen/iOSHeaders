//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLBatchExtractionStrategy, CPLChangeBatch, CPLEnginePushRepository, CPLEngineScheduler, CPLExtractedBatch, NSArray, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CPLPushToTransportTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    CPLEnginePushRepository *_pushRepository;
    CPLEngineScheduler *_scheduler;
    CPLBatchExtractionStrategy *_currentStrategy;
    CPLExtractedBatch *_extractedBatch;
    CPLChangeBatch *_uploadBatch;
    CPLChangeBatch *_batchToCommit;
    NSArray *_uploadResourceTasks;
    NSDictionary *_recordsWithGeneratedResources;
    NSMutableDictionary *_recordsWithSparseResources;
    NSMutableDictionary *_recordsWithForwardCompatibilityCheck;
    NSMutableDictionary *_recordsWithUntrustedCloudCache;
    NSMutableDictionary *_recordsWithResourcesToLookAhead;
    NSMutableDictionary *_recordsToCheckForExistence;
    NSMutableDictionary *_recordsNeedingToBeFullyFetched;
    id <CPLEngineTransportCheckRecordsExistenceTask> _checkExistenceTask;
    id <CPLEngineTransportUploadBatchTask> _uploadTask;
    unsigned long long _lastReportedProgress;
    unsigned long long _countOfPushedChanges;
    NSString *_clientCacheIdentifier;
    double _startOfIteration;
    double _startOfDerivativesGeneration;
    _Bool _generatingSomeDerivatives;
    _Bool _deferredCancel;
    _Bool _shouldCheckResourcesAhead;
    unsigned long long _estimatedSize;
    unsigned long long _estimatedCount;
    _Bool _shouldSetupEstimatedSize;
    id <CPLEngineTransportGroup> _transportGroup;
    _Bool _shouldResetExceedingQuotaOnSuccess;
    _Bool _isUsingOverQuotaStrategy;
    _Bool _resetStrategy;
    double _latestApproximativeUploadRate;
}

- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)_pushTaskDidFinishWithError:(id)arg1;
- (void)cancel;
- (void)cancel:(_Bool)arg1;
- (void)resume;
- (void)pause;
- (void)launch;
- (void)_doOneIteration;
- (void)_generateNeededDerivatives;
- (void)_generateDerivativesForNextRecord:(id)arg1;
- (void)_deleteGeneratedResourcesAfterError:(id)arg1;
- (void)_uploadBatch;
- (void)_prepareUploadBatchWithTransaction:(id)arg1 andStore:(id)arg2;
- (void)_checkForRecordExistence;
- (void)_detectUpdatesNeedingExistenceCheck:(id)arg1;
- (void)_updateChangeProperties:(id)arg1 withBaseChange:(id)arg2 withCopyProperty:(CDUnknownBlockType)arg3;
- (_Bool)_reenqueueExtractedBatchWithRejectedRecords:(id)arg1 error:(id *)arg2;
- (_Bool)_discardUploadedExtractedBatchWithError:(id *)arg1;
- (_Bool)_markUploadedTasksDidFinishWithError:(id)arg1 error:(id *)arg2;
- (_Bool)_prepareResourcesToUploadInBatch:(id)arg1 error:(id *)arg2;
- (void)_requireExistenceCheckForRecords:(id)arg1;
- (void)_popNextBatchAndContinue;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(retain) id <CPLPushToTransportTaskDelegate> delegate; // @dynamic delegate;

@end

