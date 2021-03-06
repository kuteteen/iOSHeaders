//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLStatusDelegate.h"

@class CPLStatus, NSObject<OS_dispatch_queue>, NSProgress, NSString, PLPhotoLibrary, PXCPLState;

@interface PXCPLStatus : NSObject <CPLStatusDelegate>
{
    PXCPLState *_state;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CPLStatus *_cplStatus;
    unsigned long long _syncProgressState;
    id _syncProgressSubscriber;
    NSProgress *_syncProgress;
    PLPhotoLibrary *_photoLibrary;
    unsigned long long _needsUpdate;
    double _lastUpdate;
    _Bool _isUpdating;
    CDUnknownBlockType _handler;
}

@property(readonly, nonatomic) PXCPLState *state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)statusDidChange:(id)arg1;
- (void)syncWithCloudPhotoLibrary;
- (void)overrideSystemBudgetsForSyncSession:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userPauseCloudPhotos:(_Bool)arg1;
- (void)_unsubscribeFromSyncProgress;
- (void)_subscribeToSyncProgress;
- (void)_setSyncProgress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_scheduleUpdateForType:(unsigned long long)arg1;
- (void)_schedulePendingUpdates;
- (void)_performUpdate;
- (id)_updateState:(id)arg1 requestedTypes:(unsigned long long)arg2 failedTypes:(unsigned long long *)arg3;
- (void)setState:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithInitialSynchronousUpdateType:(unsigned long long)arg1;
- (id)_initWithInitialUpdateType:(unsigned long long)arg1 isSynchronous:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

