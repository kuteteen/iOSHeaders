//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMCloudKitHooks : NSObject
{
}

+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
- (void)tryToAutoCollectLogsWithErrorString:(id)arg1 sendLogsTo:(id)arg2;
- (void)fetchCloudKitSyncStateDebuggingInfo:(id)arg1;
- (id)syncStateDictionary;
- (id)lastSyncErrors;
- (void)syncDeletesToCloudKit;
- (void)printCachedRampState;
- (void)fetchLatestRampState;
- (void)removePathFromiCloudBackups:(id)arg1;
- (void)setiCloudBackupsDisabled:(_Bool)arg1;
- (void)toggleiCloudBackupsIfNeeded;
- (void)writeCloudKitSyncCounts:(id)arg1;
- (void)fetchSyncStateStatistics;
- (void)purgeAttachments:(long long)arg1;
- (void)metricAttachments:(long long)arg1;
- (void)deleteSalt;
- (void)printCachedSalt;
- (void)fetchLatestSalt;
- (void)clearTombStoneMessagesTable;
- (void)loadDeletedMessagesWithLimit:(long long)arg1;
- (void)_updateCloudKitState;
- (void)_updateCloudKitStateWithDictionary:(id)arg1;
- (id)exitDate;
- (_Bool)isInExitState;
- (void)_didAttemptToDisableAllDevicesResult:(_Bool)arg1;
- (_Bool)isDisablingDevices;
- (void)_didPerformAdditionalStorageRequiredCheckWithSuccess:(_Bool)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4;
- (long long)isChangingEnabledState;
- (void)_didAttemptToSetEnabledTo:(_Bool)arg1 result:(_Bool)arg2;
- (id)lastSyncDate;
- (_Bool)isSyncing;
- (_Bool)isStartingSync;
- (void)initiateSync;
- (void)_requestMOCEnabledReturned:(unsigned long long)arg1;
- (void)requestMOCEnabledState;
- (void)setShouldOptimizeAttachmentStorage:(_Bool)arg1;
- (_Bool)shouldOptimizeAttachmentStorage;
- (_Bool)eligibleForTruthZone;
- (_Bool)rampedIntoTruthZone;
- (_Bool)removedFromiCloudBackup;
- (void)tryToDisableAllDevices;
- (void)performAdditionalStorageRequiredCheck;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (_Bool)shouldShowCloudKitUI;
- (void)clearDataFromCloudKit;
- (void)clearLocalSyncState;
- (void)loadDirtyMessagesWithLimit:(long long)arg1;
- (void)initiatePeriodicSync;
- (void)downloadAttachmentAssets;
- (void)syncMessages;
- (void)deleteExitRecord;
- (void)fetchExitRecord;
- (void)writeExitRecord;
- (void)deleteMessagesZone;
- (void)writeDirtyMessages;
- (void)deleteAttachmentZone;
- (void)syncAttachments;
- (void)writeAttachments;
- (void)createAttachmentZone;
- (void)clearChatZoneSyncToken;
- (void)markAllChatsAsDirty;
- (void)syncChats;
- (void)deleteChatZone;
- (void)writeDirtyChats;
- (void)createChatZone;
- (void)setupIMCloudKitHooks;
- (id)init;

@end

