//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKCoreDataStorageDelegate.h"
#import "_DKKnowledgeDeleting.h"
#import "_DKKnowledgeEventStreamDeleting.h"
#import "_DKKnowledgeQuerying.h"
#import "_DKKnowledgeSaving.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, NSURL, NSUUID, _DKCoreDataStorage, _DKPreferences;

@interface _DKKnowledgeStorage : NSObject <_DKCoreDataStorageDelegate, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying>
{
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;
    NSString *_directory;
    NSURL *_modelURL;
    NSHashTable *_knowledgeStorageEventNotificationDelegates;
    unsigned long long _insertsAndDeletesObserverCount;
    NSUUID *_deviceUUID;
    _Bool _localOnly;
    _DKCoreDataStorage *_syncStorage;
    _DKCoreDataStorage *_storage;
    _DKPreferences *_defaults;
}

+ (id)storageWithDirectory:(id)arg1 readOnly:(_Bool)arg2 localOnly:(_Bool)arg3;
+ (id)storageWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
+ (id)storeWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
@property(readonly, nonatomic) _DKPreferences *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) _DKCoreDataStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) _Bool localOnly; // @synthesize localOnly=_localOnly;
- (void).cxx_destruct;
- (id)syncStorageAssertion;
- (id)deviceUUID;
- (void)decrementInsertsAndDeletesObserverCount;
- (void)incrementInsertsAndDeletesObserverCount;
- (void)_databaseChangedWithNotification:(id)arg1;
- (id)lastChangeSetWithEntityName:(id)arg1 error:(id *)arg2;
- (void)startSyncUpToCloudWithResponseQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startSyncDownFromCloudWithResponseQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)lastSequenceNumberForChangeSetWithEntityName:(id)arg1 error:(id *)arg2;
- (_Bool)saveChangeSetsForSync:(id)arg1 error:(id *)arg2;
- (id)fetchSyncChangesSinceDate:(id)arg1 error:(id *)arg2;
- (id)fetchLocalChangesSinceDate:(id)arg1 error:(id *)arg2;
- (id)_requestForChangeSinceDate:(id)arg1;
- (unsigned long long)deleteHistogram:(id)arg1;
- (void)saveHistogram:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)coreDataStorage:(id)arg1 didAutoMigratePersistentStore:(id)arg2 toManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id *)arg5;
- (id)coreDataStorage:(id)arg1 needsManagedObjectModelNameForVersion:(unsigned long long)arg2;
- (_Bool)coreDataStorage:(id)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)arg2;
- (void)closeSyncStorage;
- (void)closeStorage;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(unsigned long long)arg2 batchLimit:(unsigned long long)arg3;
- (unsigned long long)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(unsigned long long)arg3;
- (id)eventCountPerStreamName;
- (unsigned long long)eventCount;
- (unsigned long long)deleteOrphanedEntities;
- (unsigned long long)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteEventsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteObjectsOlderThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (_Bool)deleteObjects:(id)arg1 error:(id *)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)saveObjects:(id)arg1 error:(id *)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_sendEventsNotificationName:(id)arg1 withObjects:(id)arg2;
- (void)_sendInsertEventsNotificationWithObjects:(id)arg1;
- (id)errorForException:(id)arg1;
- (void)handleNilArrayError:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)removeBadObjects:(id)arg1;
- (void)removeKnowledgeStorageEventNotificationDelegate:(id)arg1;
- (void)addKnowledgeStorageEventNotificationDelegate:(id)arg1;
- (_Bool)deleteSyncStorage;
- (_Bool)deleteStorage;
@property(readonly, nonatomic) _DKCoreDataStorage *syncStorage; // @synthesize syncStorage=_syncStorage;
- (id)syncStorageIfAvailable;
- (id)initWithDirectory:(id)arg1 readOnly:(_Bool)arg2 localOnly:(_Bool)arg3;
- (_Bool)copyValueToManagedObject:(id)arg1;
- (_Bool)updateDataAfterAutoMigrationToFinalVersionInPersistentStore:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long finalMigrationVersion;
- (void)updateToFinalMetadata:(id)arg1;

@end

