//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import "PDPeerPaymentServiceExportedInterface.h"

@class NSString, PDDatabaseManager, PDPeerPaymentWebServiceCoordinator, PDRemoteInterfacePresenter, PKEntitlementWhitelist;

@interface PDPeerPaymentService : PDXPCService <PDPeerPaymentServiceExportedInterface>
{
    PKEntitlementWhitelist *_whitelist;
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;
    PDDatabaseManager *_databaseManager;
}

@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) PDRemoteInterfacePresenter *remoteInterfacePresenter; // @synthesize remoteInterfacePresenter=_remoteInterfacePresenter;
@property(retain, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // @synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator;
- (void).cxx_destruct;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)lastUsedAlternateFundingSourcePassUniqueIdentifier:(CDUnknownBlockType)arg1;
- (void)balanceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateMemo:(id)arg1 forTransactionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)noteAccountDeletedWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 orientation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 orientation:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentIdentityVerificationFlowWithResponseData:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSharedPeerPaymentWebServiceContext:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)sharedPeerPaymentWebServiceContextWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

