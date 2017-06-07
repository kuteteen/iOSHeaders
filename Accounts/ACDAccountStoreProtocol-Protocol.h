//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Accounts/NSObject-Protocol.h>

@class ACAccount, ACAccountCredential, ACAccountType, ACCredentialItem, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@protocol ACDAccountStoreProtocol <NSObject>
- (void)reportTelemetryForLandmarkEvent:(void (^)(_Bool, NSError *))arg1;
- (void)triggerKeychainMigrationIfNecessary:(void (^)(_Bool, NSError *))arg1;
- (void)removeAccountsFromPairedDeviceWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)saveAccount:(ACAccount *)arg1 toPairedDeviceWithOptions:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)notifyRemoteDevicesOfModifiedAccount:(ACAccount *)arg1 withChangeType:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)notifyRemoteDevicesOfModifiedAccount:(ACAccount *)arg1 withChangeType:(NSString *)arg2;
- (void)openAuthenticationURLForAccount:(ACAccount *)arg1 withDelegateClassName:(NSString *)arg2 fromBundleAtPath:(NSString *)arg3 shouldConfirm:(_Bool)arg4 completion:(void (^)(_Bool, NSDictionary *, NSError *))arg5;
- (void)openAuthenticationURL:(NSURL *)arg1 forAccount:(ACAccount *)arg2 shouldConfirm:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)discoverPropertiesForAccount:(ACAccount *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(ACAccount *, NSError *))arg3;
- (void)clientTokenForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)addClientToken:(NSString *)arg1 forAccountIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)handleURL:(NSURL *)arg1;
- (void)accountIdentifiersEnabledForDataclasses:(NSArray *)arg1 withAccountTypeIdentifiers:(NSArray *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)isPushSupportedForAccount:(ACAccount *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)tetheredSyncSourceTypeForDataclass:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)isTetheredSyncingEnabledForDataclass:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)renewCredentialsForAccount:(ACAccount *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSNumber *, NSError *))arg3;
- (void)verifyCredentialsForAccount:(ACAccount *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(ACAccount *, NSError *))arg3;
- (void)clearAllPermissionsGrantedForAccountType:(ACAccountType *)arg1 withHandler:(void (^)(id, NSError *))arg2;
- (void)typeIdentifierForDomain:(NSString *)arg1 withHandler:(void (^)(NSString *, NSError *))arg2;
- (void)clearGrantedPermissionsForAccountType:(ACAccountType *)arg1 withHandler:(void (^)(NSError *))arg2;
- (void)grantedPermissionsForAccountType:(ACAccountType *)arg1 withHandler:(void (^)(NSSet *, NSError *))arg2;
- (void)permissionForAccountType:(ACAccountType *)arg1 withHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)setPermissionGranted:(NSNumber *)arg1 forBundleID:(NSString *)arg2 onAccountType:(ACAccountType *)arg3 withHandler:(void (^)(id, NSError *))arg4;
- (void)appPermissionsForAccountType:(ACAccountType *)arg1 withHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestAccessForAccountTypeWithIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 withHandler:(void (^)(NSNumber *, NSError *))arg3;
- (void)removeAccountType:(ACAccountType *)arg1 withHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)insertAccountType:(ACAccountType *)arg1 withHandler:(void (^)(ACAccountType *, NSError *))arg2;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(NSString *)arg1 withHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)saveAccount:(ACAccount *)arg1 verify:(_Bool)arg2 dataclassActions:(NSDictionary *)arg3 completion:(void (^)(NSURL *, NSError *))arg4;
- (void)saveAccount:(ACAccount *)arg1 withHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)canSaveAccount:(ACAccount *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)removeAccount:(ACAccount *)arg1 withDataclassActions:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)accessKeysForAccountType:(ACAccountType *)arg1 handler:(void (^)(NSSet *, NSError *))arg2;
- (void)isPerformingDataclassActionsForAccount:(ACAccount *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)dataclassActionsForAccountDeletion:(ACAccount *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)dataclassActionsForAccountSave:(ACAccount *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)syncableDataclassesForAccountType:(ACAccountType *)arg1 handler:(void (^)(NSSet *, NSError *))arg2;
- (void)supportedDataclassesForAccountType:(ACAccountType *)arg1 handler:(void (^)(NSSet *, NSError *))arg2;
- (void)dataclassesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)provisionedDataclassesForAccountWithIdentifier:(NSString *)arg1 handler:(void (^)(NSSet *, NSError *))arg2;
- (void)enabledDataclassesForAccountWithIdentifier:(NSString *)arg1 handler:(void (^)(NSSet *, NSError *))arg2;
- (void)removeCredentialItem:(ACCredentialItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)saveCredentialItem:(ACCredentialItem *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)insertCredentialItem:(ACCredentialItem *)arg1 completion:(void (^)(ACCredentialItem *, NSError *))arg2;
- (void)credentialItemForAccount:(ACAccount *)arg1 serviceName:(NSString *)arg2 completion:(void (^)(ACCredentialItem *, NSError *))arg3;
- (void)credentialItemsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)setCredential:(ACAccountCredential *)arg1 forAccount:(ACAccount *)arg2 serviceID:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)credentialForAccount:(ACAccount *)arg1 serviceID:(NSString *)arg2 handler:(void (^)(ACAccountCredential *, NSError *))arg3;
- (void)credentialForAccountWithIdentifier:(NSString *)arg1 handler:(void (^)(ACAccountCredential *, NSError *))arg2;
- (void)accountTypeWithIdentifier:(NSString *)arg1 handler:(void (^)(ACAccountType *, NSError *))arg2;
- (void)displayAccountTypeForAccountWithIdentifier:(NSString *)arg1 handler:(void (^)(ACAccountType *, NSError *))arg2;
- (void)childAccountsWithAccountTypeIdentifier:(NSString *)arg1 parentAccountIdentifier:(NSString *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (void)accountsOnPairedDeviceWithAccountType:(ACAccountType *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)accountsWithAccountTypeIdentifiers:(NSArray *)arg1 preloadedProperties:(NSArray *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)kerberosAccountsForDomainFromURL:(NSURL *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)accountExistsWithDescription:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)accountIdentifiersEnabledForDataclass:(NSString *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)accountIdentifiersEnabledToSyncDataclass:(NSString *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)childAccountsForAccountWithIdentifier:(NSString *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)parentAccountForAccountWithIdentifier:(NSString *)arg1 handler:(void (^)(ACAccount *, NSError *))arg2;
- (void)accountsWithAccountType:(ACAccountType *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)accountWithIdentifier:(NSString *)arg1 handler:(void (^)(ACAccount *, NSError *))arg2;
- (void)accountTypesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)accountsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)setNotificationsEnabled:(_Bool)arg1;
- (void)setClientBundleID:(NSString *)arg1 withHandler:(void (^)(_Bool, NSError *))arg2;
@end

