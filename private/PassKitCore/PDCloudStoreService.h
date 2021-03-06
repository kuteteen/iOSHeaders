//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import "PDCloudStoreServiceExportedInterface.h"

@class NSString, PDCloudStoreNotificationCoordinator, PKEntitlementWhitelist;

@interface PDCloudStoreService : PDXPCService <PDCloudStoreServiceExportedInterface>
{
    PKEntitlementWhitelist *_whitelist;
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;
}

@property(retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator; // @synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator;
- (void).cxx_destruct;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)simulateCloudStorePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithHandler:(CDUnknownBlockType)arg1;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)allTransactionsAndStoreLocally:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeTransactionsWithRecordNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

