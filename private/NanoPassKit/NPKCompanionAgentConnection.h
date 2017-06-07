//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKCompanionClientProtocol-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection, PKPaymentWebServiceContext;
@protocol NPKCompanionAgentConnectionDelegate, OS_dispatch_queue;

@interface NPKCompanionAgentConnection : NSObject <NPKCompanionClientProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    _Bool _queueAppropriateFailedActions;
    id <NPKCompanionAgentConnectionDelegate> _delegate;
    NSMutableSet *_cachedUniqueIDs;
    NSMutableDictionary *_cachedPasses;
    NSMutableDictionary *_connectionAvailableActions;
    PKPaymentWebServiceContext *_connectionUnavailableWebServiceContext;
}

+ (_Bool)isIssuerAppProvisioningSupported;
+ (_Bool)isSetupAssistantProvisioningSupported;
+ (id)watchProvisioningURLForPaymentPass:(id)arg1;
+ (id)watchProvisioningURL;
@property(retain, nonatomic) PKPaymentWebServiceContext *connectionUnavailableWebServiceContext; // @synthesize connectionUnavailableWebServiceContext=_connectionUnavailableWebServiceContext;
@property(retain, nonatomic) NSMutableDictionary *connectionAvailableActions; // @synthesize connectionAvailableActions=_connectionAvailableActions;
@property(retain) NSMutableDictionary *cachedPasses; // @synthesize cachedPasses=_cachedPasses;
@property(retain) NSMutableSet *cachedUniqueIDs; // @synthesize cachedUniqueIDs=_cachedUniqueIDs;
@property(nonatomic) __weak id <NPKCompanionAgentConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool queueAppropriateFailedActions; // @synthesize queueAppropriateFailedActions=_queueAppropriateFailedActions;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)_savePaymentPass:(id)arg1 atURL:(id)arg2 forDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (int)_isApplePaySupportedInCurrentRegion;
- (void)_applyPropertiesToPass:(id)arg1;
- (void)_clearCaches;
- (void)_removePassWithUniqueIDFromCache:(id)arg1;
- (void)_addPassToCache:(id)arg1;
- (id)_cachedPassForUniqueID:(id)arg1;
- (void)_setCachedUniqueIDs:(id)arg1;
- (id)_cachedUniqueIDs;
- (CDUnknownBlockType)_errorHandlerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (void)_sharedPaymentWebServiceContextForDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handlePotentialExpressPass:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)felicaStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2 fromDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)initiateLostModeExitAuthWithCompletion:(CDUnknownBlockType)arg1;
- (id)watchPaymentWebService;
- (void)shouldShowApplePaySettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;
- (id)sharedPaymentWebServiceContext;
- (id)sharedPaymentWebServiceContextForDevice:(id)arg1;
- (void)handlePendingiCloudSignoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)handlePendingUnpairingWithCompletion:(CDUnknownBlockType)arg1;
- (void)redownloadAllPaymentPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)consistencyCheckWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDefaultPaymentApplication:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)defaultPaymentApplicationForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)defaultCardUniqueID:(CDUnknownBlockType)arg1;
- (void)setDefaultCardUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePaymentPassWithUniqueID:(id)arg1 forDevice:(id)arg2 requireRemoteConfirmation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)savePaymentPass:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentPassWithDeviceAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)paymentPassesWithPrimaryAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)paymentPassWithUniqueID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)paymentPassUniqueIDs:(CDUnknownBlockType)arg1;
- (void)noteProvisioningPreflightCompleteWithSuccess:(_Bool)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginProvisioningFromWatchOfferForPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)noteWatchOfferShownForPaymentPass:(id)arg1;
- (void)shouldShowWatchOfferForPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handleDefaultCardChanged:(id)arg1;
- (void)_handleServerPaymentPassesChanged:(id)arg1;
@property(readonly) NSXPCConnection *xpcConnection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
