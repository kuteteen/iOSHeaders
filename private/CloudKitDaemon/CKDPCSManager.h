//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDProtocolTranslatorIdentityDelegate-Protocol.h>

@class CKDClientContext, NSArray, NSData, NSDate, NSMutableDictionary, NSOperationQueue, NSString;
@protocol NSObject, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDPCSManager : NSObject <CKDProtocolTranslatorIdentityDelegate>
{
    NSArray *_sharingIdentityFingerprints;
    CKDClientContext *_context;
    NSOperationQueue *_notificationQueue;
    NSString *_currentAccountIdentifier;
    NSMutableDictionary *_PCSIdentityWrappersByServiceName;
    NSDate *_lastMissingManateeIdentityErrorDateForCurrentService;
    struct _PCSIdentityData *_debugIdentity;
    NSString *_serviceName;
    NSData *_boundaryKeyData;
    NSString *_liverpoolPublicKey;
    id <NSObject> _contextObserver;
    NSObject<OS_dispatch_source> *_pcsUpdateSource;
    NSObject<OS_dispatch_queue> *_synchronizeQueue;
    NSMutableDictionary *_fakeIdentitySetsByServiceByUsername;
}

+ (id)allProtectionIdentifiersFromShareProtection:(struct _OpaquePCSShareProtection *)arg1;
+ (id)protectionIdentifierFromShareProtection:(struct _OpaquePCSShareProtection *)arg1;
+ (id)globalKeyRegistrySyncQueue;
+ (id)publicKeyIDFromIdentity:(struct _OpaquePCSShareProtection *)arg1;
+ (id)noMatchingIdentityErrorForPCSError:(struct __CFError *)arg1 withErrorCode:(long long)arg2 description:(id)arg3;
+ (struct _PCSIdentitySetData *)_getPCSIdentitiesForService:(id)arg1 forFakeAccount:(id)arg2 withError:(id *)arg3;
+ (id)sharedFakeIdentitySetsByServiceByUsername;
+ (struct _PCSIdentitySetData *)_copyPCSIdentitiesForService:(id)arg1 forFakeAccount:(id)arg2 withError:(id *)arg3;
+ (void)setAccountIDAwaitingUpdatesToServiceNames:(id)arg1;
+ (id)accountIDAwaitingUpdatesToServiceNames;
+ (id)currentKeyIDByServiceNameAwaitingUpdate;
+ (void)setNonManateeKeyRegistrySyncGroup:(id)arg1;
+ (id)nonManateeKeyRegistrySyncGroup;
+ (void)setLastNonManateeKeyRegistrySyncError:(id)arg1;
+ (id)lastNonManateeKeyRegistrySyncError;
+ (void)setLastNonManateeKeyRegistrySyncSuccess:(_Bool)arg1;
+ (_Bool)lastNonManateeKeyRegistrySyncSuccess;
+ (id)keyRegistrySyncGroupByManateeServiceName;
+ (id)lastKeyRegistrySyncErrorByManateeServiceName;
+ (id)lastKeyRegistrySyncSuccessByManateeServiceName;
@property(retain, nonatomic) NSMutableDictionary *fakeIdentitySetsByServiceByUsername; // @synthesize fakeIdentitySetsByServiceByUsername=_fakeIdentitySetsByServiceByUsername;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue; // @synthesize synchronizeQueue=_synchronizeQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pcsUpdateSource; // @synthesize pcsUpdateSource=_pcsUpdateSource;
@property(retain, nonatomic) id <NSObject> contextObserver; // @synthesize contextObserver=_contextObserver;
@property(retain, nonatomic) NSString *liverpoolPublicKey; // @synthesize liverpoolPublicKey=_liverpoolPublicKey;
@property(retain, nonatomic) NSData *boundaryKeyData; // @synthesize boundaryKeyData=_boundaryKeyData;
@property(retain, nonatomic) NSArray *sharingIdentityFingerprints; // @synthesize sharingIdentityFingerprints=_sharingIdentityFingerprints;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic) struct _PCSIdentityData *debugIdentity; // @synthesize debugIdentity=_debugIdentity;
@property(retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDateForCurrentService; // @synthesize lastMissingManateeIdentityErrorDateForCurrentService=_lastMissingManateeIdentityErrorDateForCurrentService;
@property(retain, nonatomic) NSMutableDictionary *PCSIdentityWrappersByServiceName; // @synthesize PCSIdentityWrappersByServiceName=_PCSIdentityWrappersByServiceName;
@property(retain) NSString *currentAccountIdentifier; // @synthesize currentAccountIdentifier=_currentAccountIdentifier;
@property(retain, nonatomic) NSOperationQueue *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(readonly, nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (_Bool)_isValidIdentitySet:(struct _PCSIdentitySetData *)arg1 forServiceName:(id)arg2;
- (id)etagFromPCSData:(id)arg1;
- (struct _OpaquePCSShareProtection *)_copyShareProtectionFromExportedData:(id)arg1 identities:(struct _PCSIdentitySetData *)arg2 error:(struct __CFError **)arg3;
- (void)_onSynchronizeQueue:(CDUnknownBlockType)arg1;
- (void)synchronizeUserKeyRegistryForServiceType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_lockedSynchronizeUserKeyRegistryForServiceType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)keyRegistrySyncQueue;
- (void)boundaryKeyDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_lockedBoundaryKeyDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)wrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 withContextString:(id)arg3;
- (id)wrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 inContext:(id)arg3;
- (id)unwrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 withContextString:(id)arg3;
- (id)unwrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 inContext:(id)arg3;
- (id)referenceSignatureFromAssetKey:(id)arg1;
- (id)referenceIdentifierStringFromAssetKey:(id)arg1;
- (id)newAssetKeyWithType:(unsigned long long)arg1 withError:(id *)arg2;
- (id)wrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection *)arg2 inContext:(id)arg3 withError:(id *)arg4;
- (id)unwrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection *)arg2 inContext:(id)arg3 withError:(id *)arg4;
- (_Bool)containerSupportsEnhancedContext;
- (id)decryptChainPCSForRecordPCS:(id)arg1;
- (id)sharingIdentityDataFromPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)removePublicKeyID:(id)arg1 fromPCS:(struct _OpaquePCSShareProtection *)arg2;
- (void)removePublicKeys:(id)arg1 fromPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)removeEncryptedPCS:(id)arg1 fromSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)removeSharingIdentity:(struct _PCSIdentityData *)arg1 fromSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)removePublicIdentity:(struct _PCSPublicIdentityData *)arg1 fromSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)addSharingIdentity:(struct _PCSIdentityData *)arg1 toSharePCS:(struct _OpaquePCSShareProtection *)arg2 permission:(unsigned long long)arg3;
- (id)addIdentityBackToPCS:(struct _OpaquePCSShareProtection *)arg1;
- (id)addPublicIdentity:(struct _PCSPublicIdentityData *)arg1 toSharePCS:(struct _OpaquePCSShareProtection *)arg2 permission:(unsigned long long)arg3;
- (id)etagFromSharePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)pcsDataFromFetchedShare:(id)arg1 withServiceType:(unsigned long long)arg2 error:(id *)arg3;
- (id)decryptPCSDataOnSharePCS:(id)arg1;
- (struct _OpaquePCSShareProtection *)createSharePCSFromEncryptedData:(id)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 withService:(unsigned long long)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 withService:(unsigned long long)arg2 logFailure:(_Bool)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 sharingIdentity:(struct _PCSIdentityData *)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 sharingIdentity:(struct _PCSIdentityData *)arg2 logFailure:(_Bool)arg3 error:(id *)arg4;
- (id)dataFromSharePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createChainPCSWithError:(id *)arg1;
- (struct _OpaquePCSShareProtection *)createSharePublicPCSWithIdentity:(struct _PCSIdentityData *)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createSharePCSForService:(unsigned long long)arg1 withError:(id *)arg2;
- (struct _OpaquePCSShareProtection *)_addPublicIdentityForService:(unsigned long long)arg1 toSharePCS:(struct _OpaquePCSShareProtection *)arg2 withError:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createEmptySharePCSWithError:(id *)arg1;
- (id)etagFromRecordPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (_Bool)removeSharePCS:(struct _OpaquePCSShareProtection *)arg1 fromRecordPCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (_Bool)addSharePCS:(struct _OpaquePCSShareProtection *)arg1 toRecordPCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (_Bool)addSharePCS:(struct _OpaquePCSShareProtection *)arg1 toRecordPCS:(struct _OpaquePCSShareProtection *)arg2 permission:(unsigned long long)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 logFailure:(_Bool)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 zonePCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 zonePCS:(struct _OpaquePCSShareProtection *)arg2 logFailure:(_Bool)arg3 error:(id *)arg4;
- (id)dataFromRecordPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createRecordPCSWithEncryptedZonePCS:(struct __CFData *)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 createLite:(_Bool)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createRecordPCSWithZonePCS:(struct _OpaquePCSShareProtection *)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 createLite:(_Bool)arg3 error:(id *)arg4;
- (id)updateIdentityAndRollKeyForZonePCS:(struct _OpaquePCSShareProtection *)arg1 usingServiceIdentityWithType:(unsigned long long)arg2;
- (id)rollMasterKeyForRecordPCS:(struct _OpaquePCSShareProtection *)arg1;
- (id)updateServiceIdentityOnZonePCS:(struct _OpaquePCSShareProtection *)arg1;
- (_Bool)zonePCSNeedsUpdate:(struct _OpaquePCSShareProtection *)arg1;
- (_Bool)zonePCSNeedsKeyRolled:(struct _OpaquePCSShareProtection *)arg1;
- (id)repairZonePCSData:(id)arg1 error:(id *)arg2;
- (id)etagFromZonePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createZonePCSFromData:(id)arg1 usingServiceIdentityWithType:(unsigned long long)arg2 error:(id *)arg3;
- (void)preflightIdentitiesForService:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_preflightIdentitiesForService:(unsigned long long)arg1 withSyncKeyRegistryRetry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_locked_preflightIdentitiesForService:(unsigned long long)arg1 withSyncKeyRegistryRetry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createZonePCSFromData:(id)arg1 usingServiceIdentityWithType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_createZonePCSFromData:(id)arg1 usingServiceIdentityWithType:(unsigned long long)arg2 withSyncKeyRegistryRetry:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_locked_createZonePCSFromData:(id)arg1 usingServiceIdentityWithType:(unsigned long long)arg2 withSyncKeyRegistryRetry:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)dataFromZonePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createZonePCSWithError:(id *)arg1;
- (void)createZonePCSWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createZonePCSWithSyncKeyRegistryRetry:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_locked_createZonePCSWithSyncKeyRegistryRetry:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_fingerprintsFromIdentitySet:(struct _PCSIdentitySetData *)arg1;
- (id)addIdentityForService:(unsigned long long)arg1 toPCS:(struct _OpaquePCSShareProtection *)arg2;
- (void)_markServiceAsAwaitingUpdate:(id)arg1;
- (id)_addIdentity:(struct _PCSIdentitySetData *)arg1 withService:(unsigned long long)arg2 toPCS:(struct _OpaquePCSShareProtection *)arg3;
- (struct _PCSPublicIdentityData *)createPublicSharingIdentityFromPublicKey:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentityData *)createSharingIdentityFromData:(id)arg1 error:(id *)arg2;
- (id)dataFromSharingIdentity:(struct _PCSIdentityData *)arg1 error:(id *)arg2;
- (_Bool)canDecryptInvitedProtectionData:(id)arg1 participantProtectionInfo:(id)arg2 serviceType:(unsigned long long)arg3 error:(id *)arg4;
- (id)createProtectionInfoFromOONPrivateKey:(id)arg1 privateToken:(id)arg2 OONProtectionInfo:(id)arg3 error:(id *)arg4;
- (struct _PCSIdentityData *)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg1 publicSharingIdentity:(id)arg2;
- (struct _PCSIdentityData *)createRandomSharingIdentityWithError:(id *)arg1;
- (id)copyDiversifiedPublicKeyForService:(unsigned long long)arg1 withError:(id *)arg2;
- (struct _PCSPublicIdentityData *)copyDiversifiedIdentityForService:(unsigned long long)arg1 withError:(id *)arg2;
- (id)copyAllPublicKeysForService:(unsigned long long)arg1 withError:(id *)arg2;
- (id)_copyAllPublicKeyDatasForIdentitySet:(struct _PCSIdentitySetData *)arg1 withError:(id *)arg2;
- (id)copyPublicKeyForService:(unsigned long long)arg1 withError:(id *)arg2;
- (id)_copyPublicKeyDataForIdentitySet:(struct _PCSIdentitySetData *)arg1 withService:(unsigned long long)arg2 withError:(id *)arg3;
- (struct _PCSIdentitySetData *)_copyServiceIdentityWithType:(unsigned long long)arg1 withError:(id *)arg2;
- (struct _PCSIdentitySetData *)_copyServiceIdentityWithType:(unsigned long long)arg1 useCache:(_Bool)arg2 withError:(id *)arg3;
- (id)_PCSServiceStringFromCKServiceType:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool currentServiceIsManatee;
- (struct _PCSIdentitySetData *)_copyIdentityForService:(id)arg1 useCache:(_Bool)arg2 withError:(id *)arg3;
- (struct _PCSIdentitySetData *)_reallyCopyIdentityForService:(id)arg1 withValidation:(_Bool)arg2 error:(id *)arg3;
- (id)_internalServicesToCombineWithLiverpoolKey;
- (struct _PCSIdentitySetData *)_createIdentitySetByAddingLiverpoolIdentity:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)_createInMemoryIdentitySetForService:(id)arg1 error:(id *)arg2;
- (id)_addServiceIdentitiesOfType:(id)arg1 toSet:(struct _PCSIdentitySetData *)arg2 fromSet:(struct _PCSIdentitySetData *)arg3 markCurrent:(_Bool)arg4;
- (struct _PCSIdentitySetData *)_getPCSIdentitiesForService:(id)arg1 forFakeAccount:(id)arg2 withError:(id *)arg3;
- (struct _PCSIdentityData *)debugSharingIdentity;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;
- (id)_serviceNameForContainerID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

