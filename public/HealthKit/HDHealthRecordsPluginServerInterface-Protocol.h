//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKClinicalBrand, HKMedicalCodingCollection, HKMedicalRecord, HKSource, NSArray, NSFileHandle, NSNumber, NSSet, NSString, NSUUID;

@protocol HDHealthRecordsPluginServerInterface <NSObject>
- (void)remote_fetchLogoDataForFeaturedBrandsAtScaleKey:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)remote_fetchLogoDataForBrand:(HKClinicalBrand *)arg1 scaleKey:(NSString *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)remote_fetchRemoteGatewayWithExternalID:(NSString *)arg1 batchID:(NSString *)arg2 completion:(void (^)(HKClinicalGateway *, NSError *))arg3;
- (void)remote_fetchRemoteProviderWithExternalID:(NSString *)arg1 batchID:(NSString *)arg2 completion:(void (^)(HKClinicalProvider *, NSError *))arg3;
- (void)remote_cancelInFlightSearchQueriesWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_fetchRemoteSearchResultsPageForQuery:(NSString *)arg1 latitude:(NSNumber *)arg2 longitude:(NSNumber *)arg3 from:(long long)arg4 completion:(void (^)(HKClinicalProviderSearchResultsPage *, NSError *))arg5;
- (void)remote_notifyForNewHealthRecordsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_badgeForNewHealthRecordsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_createStaticAccountWithTitle:(NSString *)arg1 completion:(void (^)(HKClinicalAccount *, NSError *))arg2;
- (void)remote_resetClinicalContentAnalyticsAnchorsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_triggerClinicalContentAnalyticsForReason:(long long)arg1 options:(unsigned long long)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)remote_fetchClinicalOptInDataCollectionFilePathsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_resetClinicalOptInDataCollectionAnchorsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_triggerClinicalOptInDataCollectionForReason:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_performCodingTasks:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)remote_conceptForCodings:(HKMedicalCodingCollection *)arg1 preferredSystems:(NSArray *)arg2 completion:(void (^)(HKMedicalConcept *, NSError *))arg3;
- (void)remote_displayStringForMedicalCodingSystem:(NSString *)arg1 code:(NSString *)arg2 version:(NSString *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (void)remote_fetchRawSourceStringForHealthRecord:(HKMedicalRecord *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)remote_fetchFHIRJSONDocumentWithAccountIdentifier:(NSUUID *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)remote_setHealthRecordsIngestionFrequency:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_getHealthRecordsIngestionFrequencyWithCompletion:(void (^)(_Bool, long long, NSError *))arg1;
- (void)remote_resetHealthRecordsLastExtractedRowIDWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_ingestHealthRecordsWithFHIRDocumentHandle:(NSFileHandle *)arg1 accountIdentifier:(NSUUID *)arg2 options:(unsigned long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_ingestHealthRecordsWithOptions:(unsigned long long)arg1 completion:(void (^)(_Bool, NSString *, NSError *))arg2;
- (void)remote_invalidateCredentialForAccountWithIdentifier:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_deleteAccountWithIdentifier:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_accountWithIdentifier:(NSUUID *)arg1 setUserEnabled:(_Bool)arg2 completion:(void (^)(HKClinicalAccount *, NSError *))arg3;
- (void)remote_fetchAccountForSource:(HKSource *)arg1 completion:(void (^)(HKClinicalAccount *, NSError *))arg2;
- (void)remote_fetchAccountsForGatewaysWithExternalIDs:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_fetchAllAccountsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_pruneAuthenticationDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_replaceAccountWithNewAccountForAccountWithIdentifier:(NSUUID *)arg1 usingCredentialWithPersistentID:(NSNumber *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_endLoginSessionWithState:(NSUUID *)arg1 code:(NSString *)arg2 completion:(void (^)(_Bool, HKClinicalAccountLoginCompletionState *, NSError *))arg3;
- (void)remote_beginReloginSessionForAccountWithIdentifier:(NSUUID *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)remote_beginInitialLoginSessionForGatewayWithExternalID:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
@end

