//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/MSPCloudSyncManager.h>

@interface MSPFavoritesCloudSyncManager : MSPCloudSyncManager
{
}

+ (id)KVSMergeableStateSnapshotForOrderedRecordsWithContents:(id)arg1;
+ (id)KVSSyncItemKeyPrefix;
+ (id)KVSAdditionalStoreIdentifier;
+ (id)journalName;
+ (id)cloudRecordType;
+ (Class)replicaRecordClass;
+ (Class)replicaClass;
+ (id)boostDateDefaultsKey;
+ (id)identityDefaultsKey;
+ (_Bool)usesZoneWidePCS;
+ (id)zoneName;
- (void)getEditedRecords:(out id *)arg1 recordNamesToDelete:(out id *)arg2 fromExistingCloudRecords:(id)arg3 withReplica:(id)arg4 mergingWithReplica:(id)arg5 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg6 creatingRecordsUsingAccess:(id)arg7;

@end

