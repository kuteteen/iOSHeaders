//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCCKZonePruningAssistant.h"
#import "FCCKZoneRestorationSource.h"
#import "FCCommandQueueDelegate.h"
#import "FCJSONEncodableObjectProviding.h"
#import "FCPrivateRecordSyncManagerDelegate.h"
#import "FCPrivateZoneSyncManagerDelegate.h"

@class FCAsyncSerialQueue, FCCloudContext, FCCommandQueue, FCKeyValueStore, FCPushNotificationCenter, NSArray, NSHashTable, NSString;

@interface FCPrivateDataController : NSObject <FCJSONEncodableObjectProviding, FCPrivateZoneSyncManagerDelegate, FCPrivateRecordSyncManagerDelegate, FCCommandQueueDelegate, FCCKZoneRestorationSource, FCCKZonePruningAssistant>
{
    _Bool _waitingForFirstSync;
    _Bool _preparedForUse;
    _Bool _syncingEnabled;
    FCPushNotificationCenter *_pushNotificationCenter;
    NSString *_storeDirectory;
    FCCommandQueue *_commandQueue;
    NSArray *_syncManagers;
    unsigned long long _changeCount;
    FCAsyncSerialQueue *_syncQueue;
    NSHashTable *_stateObservers;
    FCCloudContext *_context;
    NSHashTable *_observers;
    FCKeyValueStore *_localStore;
}

+ (_Bool)isLocalStoreKeyInternal:(id)arg1;
+ (id)internalLocalStoreKeys;
+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)localStoreMigrator;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;
@property(readonly, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(nonatomic, getter=isSyncingEnabled) _Bool syncingEnabled; // @synthesize syncingEnabled=_syncingEnabled;
@property(retain, nonatomic) NSHashTable *stateObservers; // @synthesize stateObservers=_stateObservers;
@property(retain, nonatomic) FCAsyncSerialQueue *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) unsigned long long changeCount; // @synthesize changeCount=_changeCount;
@property(retain, nonatomic) NSArray *syncManagers; // @synthesize syncManagers=_syncManagers;
@property(nonatomic, getter=hasBeenPreparedForUse) _Bool preparedForUse; // @synthesize preparedForUse=_preparedForUse;
@property(retain, nonatomic) FCCommandQueue *commandQueue; // @synthesize commandQueue=_commandQueue;
@property(copy, nonatomic) NSString *storeDirectory; // @synthesize storeDirectory=_storeDirectory;
@property(retain, nonatomic) FCPushNotificationCenter *pushNotificationCenter; // @synthesize pushNotificationCenter=_pushNotificationCenter;
@property(getter=isWaitingForFirstSync) _Bool waitingForFirstSync; // @synthesize waitingForFirstSync=_waitingForFirstSync;
- (void).cxx_destruct;
- (id)_newSyncState;
- (void)_serialSyncWithCompletion:(CDUnknownBlockType)arg1;
- (long long)_qualityOfServiceForNextSync;
- (long long)_qualityOfServiceForFirstSync:(_Bool)arg1;
- (void)_notifyObservers;
- (void)_markAsDirtyAndNotifyObservers:(_Bool)arg1;
- (long long)commandQueue:(id)arg1 qualityOfServiceForCommand:(id)arg2;
- (void)recordSyncManagerNotifyObservers:(id)arg1;
- (void)recordSyncManager:(id)arg1 stateDidChange:(id)arg2;
- (void)zoneSyncManagerNotifyObservers:(id)arg1;
- (void)zoneSyncManager:(id)arg1 stateDidChange:(id)arg2;
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)arg1;
- (double)softMaxRecordAgeWhenMigratingZoneName:(id)arg1;
- (id)pruneRecords:(id)arg1 forZoneName:(id)arg2;
- (_Bool)canHelpPruneZoneName:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)manualDirty;
@property(readonly, nonatomic, getter=isDirty) _Bool dirty;
- (void)forceSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)addCommandToCommandQueue:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)isBackedByAnyRecordZoneIDsInSet:(id)arg1;
- (void)removeStateObserver:(id)arg1;
- (void)addStateObserver:(id)arg1;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (void)performFirstSyncWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)_syncWithCondition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (id)init;
- (void)_possiblySimulateCrashWithMessage:(id)arg1;
- (void)assertReadyForUse;
- (void)prepareForUse;
- (void)mergeLocalStoreWithCloud;
- (void)createLocalStore;
- (void)disableSyncing;
- (void)enableSyncing;
- (id)jsonEncodableObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

