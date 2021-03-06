//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDSyncSessionDelegate.h"
#import "NSProgressReporting.h"

@class HDCloudSyncFetchOperationResult, HDCloudSyncOperationConfiguration, HDCloudSyncSequenceRecord, HDCloudSyncStoreRecord, NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSProgress, NSString, NSUUID, _HDCloudSyncSessionContext;

@interface HDCloudSyncPushOperation : NSObject <HDSyncSessionDelegate, NSProgressReporting>
{
    HDCloudSyncOperationConfiguration *_configuration;
    HDCloudSyncFetchOperationResult *_fetchOperationResult;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncQueue;
    _HDCloudSyncSessionContext *_syncSessionContext;
    HDCloudSyncStoreRecord *_storeRecordForPush;
    HDCloudSyncSequenceRecord *_sequenceRecordForPush;
    _Bool _isNewStoreRecord;
    NSMutableArray *_changeRecordsPendingPush;
    _Bool _isSecondaryContainer;
    NSUUID *_operationIdentifier;
    NSDate *_startTime;
    _Bool _queue_hasStarted;
    CDUnknownBlockType _completion;
    NSProgress *_progress;
}

@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)_recordForwardProgressDate;
- (void)_queue_setInitialForwardProgressDateIfNecessary;
- (id)_queue_estimateSyncEntityClassesWithChangesForSession:(id)arg1;
- (void)_queue_pushRecords:(id)arg1 recordIDsToDelete:(id)arg2 zoneToCreate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_getStoreRecordForStoreIdentifier:(id)arg1 isNewRecord:(_Bool *)arg2;
- (void)_queue_uploadChangesForSyncSession:(id)arg1 isFinalUpload:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_queue_finalizeNextChangeRecordForUploadToSession:(id)arg1 error:(id *)arg2;
- (void)_queue_deactivatePendingOwnerStores;
- (void)_queue_finalizePushForSession:(id)arg1;
- (void)_queue_endSyncSessionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)syncSession:(id)arg1 didFinishSuccessfully:(_Bool)arg2 error:(id)arg3;
- (_Bool)syncSession:(id)arg1 didEndTransactionWithError:(id *)arg2;
- (void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncSessionWillBegin:(id)arg1;
- (void)_queue_syncStore:(id)arg1 excludingStores:(id)arg2;
- (id)_queue_excludedStoresForIdentifiers:(id)arg1 error:(id *)arg2;
- (id)_queue_computeSequenceRecordForPushWithStoreRecord:(id)arg1;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithConfiguration:(id)arg1 fetchOperationResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

