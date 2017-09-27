//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentServiceExportedInterface.h"
#import "PKXPCServiceDelegate.h"

@class NSString, PKExpressTransactionState, PKFieldProperties, PKPaymentWebServiceContext, PKXPCService;

@interface PKPaymentService : NSObject <PKXPCServiceDelegate, PKPaymentServiceExportedInterface>
{
    PKXPCService *_remoteService;
    unsigned long long _interfaceType;
    // Error parsing type: AB, name: _cachedFieldPropertiesValid
    _Bool _hasPaymentDeviceFieldProperties;
    id <PKPaymentServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPaymentServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_hasInterfaceOfType:(unsigned long long)arg1;
- (void)_defaultPaymentPassUniqueIdentifier:(CDUnknownBlockType)arg1;
- (void)_messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sharedPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) PKPaymentWebServiceContext *sharedPaymentWebServiceContext;
@property(retain, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
@property(readonly, nonatomic) PKExpressTransactionState *outstandingExpressTransactionState;
@property(readonly, nonatomic) __weak PKFieldProperties *paymentDeviceFieldProperties;
@property(readonly, nonatomic) _Bool hasPaymentDeviceFieldProperties;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (void)passbookUIServiceDidLaunch;
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)scheduleSetupReminders;
- (void)consistencyCheck;
- (void)downloadAllPaymentPasses;
- (void)simulatePaymentPush;
- (void)felicaStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)simulateDefaultExpressTransitPassIdentifier:(id)arg1;
- (void)processFelicaTransitTransactionEventWithHistory:(id)arg1 transactionDate:(id)arg2 forPaymentApplication:(id)arg3 withPassUniqueIdentifier:(id)arg4;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)expressPassInformationForMode:(id)arg1;
- (id)expressPassesInformation;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)defaultExpressFelicaTransitPassIdentifier;
- (void)sanitizeExpressPasses;
- (void)initializeSecureElementIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)archiveMessageWithIdentifier:(id)arg1;
- (void)deleteMessagesForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)deleteAllTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)passUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)passUniqueIdentifierForTransactionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionWithServiceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionWithTransactionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionsWithTransactionSource:(unsigned long long)arg1 withBackingData:(unsigned long long)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transactionCountByYearForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2;
- (void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)paymentDeviceDidExitField;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (id)_extendedSynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithSemaphore:(id)arg1;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)remoteServiceDidSuspend:(id)arg1;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

