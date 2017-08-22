//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKXPCClient-Protocol.h>

@class ACAccountStore, CKAccountOverrideInfo, CKContainerID, CKContainerOptions, CKContainerSetupInfo, CKDatabase, CKOperationCallbackManager, CKOperationFlowControlManager, CKRecordID, NSMapTable, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSXPCConnection;

@interface CKContainer : NSObject <CKXPCClient>
{
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    _Bool _holdAllOperations;
    _Bool _masqueradeAsThirdPartyApp;
    _Bool _hasValidConnection;
    _Bool _hasCachedSetupInfo;
    int _statusReportToken;
    int _killSwitchToken;
    int _accountChangeToken;
    int _identityUpdateToken;
    CKContainerID *_containerID;
    CKRecordID *_containerScopedUserID;
    CKContainerOptions *_options;
    CKDatabase *_privateCloudDatabase;
    CKDatabase *_publicCloudDatabase;
    CKDatabase *_sharedCloudDatabase;
    CKDatabase *_organizationCloudDatabase;
    NSXPCConnection *_xpcConnection;
    NSOperationQueue *_convenienceOperationQueue;
    NSOperationQueue *_throttlingOperationQueue;
    NSOperationQueue *_backgroundThrottlingOperationQueue;
    CKOperationCallbackManager *_callbackManager;
    CKOperationFlowControlManager *_flowControlManager;
    ACAccountStore *_accountStore;
    NSMutableArray *_sandboxExtensionHandles;
    CKContainerSetupInfo *_cachedSetupInfo;
    NSMapTable *_assetsByUUID;
    NSMutableDictionary *_fakeEntitlements;
    unsigned long long _stateHandle;
}

+ (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (long long)_untrustedDatabaseEnvironment;
+ (id)_checkSelfContainerIdentifier;
+ (void)_checkSelfCloudServicesEntitlement;
+ (id)_untrustedEntitlementForKey:(id)arg1;
+ (void)registerCompletedLongLivedOperationWithID:(id)arg1;
+ (void)unregisterOutstandingOperationWithID:(id)arg1;
+ (void)registerOutstandingOperationWithID:(id)arg1;
+ (id)sharedOutstandingOperations;
+ (id)sharedCompletedLongLivedOperationIDs;
+ (id)containerWithIdentifier:(id)arg1;
+ (id)containerIDForContainerIdentifier:(id)arg1;
+ (id)containerIDForContainerIdentifier:(id)arg1 environment:(long long)arg2;
+ (id)defaultContainer;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) NSMutableDictionary *fakeEntitlements; // @synthesize fakeEntitlements=_fakeEntitlements;
@property(retain, nonatomic) NSMapTable *assetsByUUID; // @synthesize assetsByUUID=_assetsByUUID;
@property(nonatomic) _Bool hasCachedSetupInfo; // @synthesize hasCachedSetupInfo=_hasCachedSetupInfo;
@property(retain, nonatomic) CKContainerSetupInfo *cachedSetupInfo; // @synthesize cachedSetupInfo=_cachedSetupInfo;
@property(retain, nonatomic) NSMutableArray *sandboxExtensionHandles; // @synthesize sandboxExtensionHandles=_sandboxExtensionHandles;
@property(nonatomic) int identityUpdateToken; // @synthesize identityUpdateToken=_identityUpdateToken;
@property(nonatomic) int accountChangeToken; // @synthesize accountChangeToken=_accountChangeToken;
@property(nonatomic) int killSwitchToken; // @synthesize killSwitchToken=_killSwitchToken;
@property(nonatomic) int statusReportToken; // @synthesize statusReportToken=_statusReportToken;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) CKOperationFlowControlManager *flowControlManager; // @synthesize flowControlManager=_flowControlManager;
@property(retain, nonatomic) CKOperationCallbackManager *callbackManager; // @synthesize callbackManager=_callbackManager;
@property(retain, nonatomic) NSOperationQueue *backgroundThrottlingOperationQueue; // @synthesize backgroundThrottlingOperationQueue=_backgroundThrottlingOperationQueue;
@property(retain, nonatomic) NSOperationQueue *throttlingOperationQueue; // @synthesize throttlingOperationQueue=_throttlingOperationQueue;
@property(retain, nonatomic) NSOperationQueue *convenienceOperationQueue; // @synthesize convenienceOperationQueue=_convenienceOperationQueue;
@property(nonatomic) _Bool hasValidConnection; // @synthesize hasValidConnection=_hasValidConnection;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) CKDatabase *organizationCloudDatabase; // @synthesize organizationCloudDatabase=_organizationCloudDatabase;
@property(retain, nonatomic) CKDatabase *sharedCloudDatabase; // @synthesize sharedCloudDatabase=_sharedCloudDatabase;
@property(retain, nonatomic) CKDatabase *publicCloudDatabase; // @synthesize publicCloudDatabase=_publicCloudDatabase;
@property(retain, nonatomic) CKDatabase *privateCloudDatabase; // @synthesize privateCloudDatabase=_privateCloudDatabase;
@property(retain, nonatomic) CKContainerOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) CKRecordID *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(retain, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (id)findTrackedAssetByUUID:(id)arg1;
- (void)trackAssets:(id)arg1;
- (void)dumpDaemonStatusReport;
- (void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)CKStatusReportArray;
- (void)fetchFullNameAndFormattedUsernameOfAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchFullNameAndPrimaryEmailOnAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchCurrentDeviceIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchServerEnvironment:(CDUnknownBlockType)arg1;
- (void)triggerAutoBugCaptureSnapshot;
- (void)dataclassEnabled:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)flushOperationMetricsToPowerLog;
- (void)updatePushTokens;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (void)clearContextFromMetadataCache;
- (void)wipeAllCachesAndDie;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (id)sourceApplicationSecondaryIdentifier;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (id)sourceApplicationBundleIdentifier;
- (_Bool)holdAllOperations;
- (void)setHoldAllOperations:(_Bool)arg1;
- (void)setFakeEntitlement:(id)arg1 forKey:(id)arg2;
- (void)fetchCurrentUserBoundaryKeyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)wipeAllCachedLongLivedProxiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)tossConfigWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)accountChangedWithID:(id)arg1;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleConvenienceOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)consumeSandboxExtensions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_cleanupSandboxExtensionHandles:(id)arg1;
- (void)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)openFileWithOpenInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)connectionWithError:(id *)arg1;
- (id)_CKXPCInterface;
- (id)_CKXPCExportedInterface;
- (void)_prepareForDaemonLaunch;
- (id)databaseWithDatabaseScope:(long long)arg1;
@property(readonly, nonatomic) NSString *containerIdentifier;
- (id)_untrustedContainerEntitlementsForKey:(id)arg1;
@property(copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride;
- (_Bool)masqueradeAsThirdPartyApp;
- (void)setMasqueradeAsThirdPartyApp:(_Bool)arg1;
@property(nonatomic) _Bool captureResponseHTTPHeaders;
@property(nonatomic) _Bool wantsSiloedContext;
- (id)initWithContainerID:(id)arg1 accountInfoOverride:(id)arg2;
- (id)setupInfo;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
- (void)dealloc;
- (id)initWithContainerID:(id)arg1;
- (id)initWithContainerID:(id)arg1 options:(id)arg2;
- (id)_initWithContainerIdentifier:(id)arg1;
- (id)_initWithContainerIdentifier:(id)arg1 environment:(long long)arg2;
- (id)_allStatusReports;
- (void)_setupWithContainerID:(id)arg1 options:(id)arg2;
- (void)discoverUserInfoWithUserRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverUserInfoWithEmailAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverAllContactUserInfosWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)discoverUserIdentityWithUserRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverUserIdentityWithPhoneNumber:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverUserIdentityWithEmailAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_discoverUserIdentityWithLookupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverAllIdentitiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchUserRecordIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNewWebSharingIdentityDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNewWebSharingIdentity:(CDUnknownBlockType)arg1;
- (void)decryptPersonalInfoOnShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchShareMetadataWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchShareParticipantWithUserRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchShareParticipantWithPhoneNumber:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchShareParticipantWithEmailAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchShareParticipantWithLookupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)accountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchLongLivedOperationWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllLongLivedOperationIDsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchLongLivedOperationsWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchLongLivedOperationsWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

