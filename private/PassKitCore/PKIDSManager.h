//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class IDSService, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PKProximityAdvertiser;

@interface PKIDSManager : NSObject <IDSServiceDelegate>
{
    NSMutableArray *_remoteDevices;
    NSMutableArray *_paymentRequests;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_thumbnailCompletionHandlers;
    PKProximityAdvertiser *_proximityAdvertiser;
    NSHashTable *_delegates;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _requestCLTMThrottleUncapToken;
    id <PKIDSManagerDataSource> _dataSource;
    NSMutableArray *_pendingCancellations;
    NSMutableDictionary *_pendingDiscoveries;
    IDSService *_service;
    NSMutableDictionary *_recentlySeenUUIDs;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMutableDictionary *recentlySeenUUIDs; // @synthesize recentlySeenUUIDs=_recentlySeenUUIDs;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSMutableDictionary *pendingDiscoveries; // @synthesize pendingDiscoveries=_pendingDiscoveries;
@property(retain, nonatomic) NSMutableArray *pendingCancellations; // @synthesize pendingCancellations=_pendingCancellations;
@property(nonatomic) id <PKIDSManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_populateDevicesIfNeeded;
- (id)_remoteDevicesWithArchive;
- (void)_archiveDevicesToDisk;
- (void)deleteArchivedDevices;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (id)_fetchPaymentInstrumentsForRequestingDevice:(id)arg1;
- (id)_preparePaymentDeviceResponseForRequestingDevice:(id)arg1;
- (void)_registerListeners;
- (void)_postCTLMThrottleUncapNotification;
- (void)_unregisterCTLMThrottleUncapNotification;
- (void)_registerCTLMThrottleUncapNotification;
- (void)_queue_logCloudPairingState;
- (_Bool)_queue_deviceIsRegistered:(id)arg1;
- (_Bool)_queue_hasRegisteredAccounts;
- (id)_queue_cancelRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_sendDiscoveryResponse:(id)arg1 toDeviceWithFromID:(id)arg2;
- (void)_queue_sendDeviceDiscoveryRequestWithProximity:(_Bool)arg1 devices:(id)arg2;
- (void)_queue_sendDeviceDiscoveryRequestToAllDevicesWithProximity:(_Bool)arg1;
- (void)_queue_removeThumbnailCompletionHandlersForKeys:(id)arg1;
- (void)_queue_addThumbnailCompletionHandler:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)_queue_requestForIdentifier:(id)arg1;
- (_Bool)_queue_hasRemoteDevices;
- (void)_thumbnailResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentDiscoveryResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_thumbnailRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentClientUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentHostUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentCancellationReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentDiscoveryRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentSetupRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)requestForIdentifier:(id)arg1;
- (void)invalidateMessage:(id)arg1;
- (id)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (id)cancelRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)sendSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)discoverRemoteDevicesWithProximity:(_Bool)arg1;
- (void)discoverRemoteDevices;
- (_Bool)hasRemoteDevices;
@property(readonly, nonatomic) NSArray *paymentRequests;
@property(readonly, nonatomic) __weak NSArray *remoteDevices;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly, nonatomic) NSArray *delegates;
- (void)dealloc;
- (id)initWithIDSService:(id)arg1;
- (id)initWithTargetQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

