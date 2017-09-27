//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSTimer, PKPaymentDeviceConfigurationData, PKPaymentDeviceProvisioningData, PKSecureElement;

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSTimer *_timer;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    PKSecureElement *_secureElement;
    PKPaymentDeviceProvisioningData *_provisioningData;
    PKPaymentDeviceConfigurationData *_configurationData;
    NSMutableArray *_provisioningCompletions;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    _Bool _skipLocationCheck;
}

+ (id)clientHardwarePlatformInfoHTTPHeader;
+ (id)clientInfoHTTPHeader;
@property(nonatomic) _Bool skipLocationCheck; // @synthesize skipLocationCheck=_skipLocationCheck;
- (void).cxx_destruct;
- (void)configurationDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queueConnectionToTrustedServiceManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_executeProvisioningCompletionHandlers;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)primarySecureElementIdentifier;
- (void)SEPParingInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteApplicationWithAID:(id)arg1;
- (void)setRegistrationRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
- (_Bool)hasRegistrationRegionMap;
- (void)provisioningDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)trustedDeviceEnrollmentInfo;
- (id)configurationData;
- (id)rewrapDataWithDeviceIdentifier:(id)arg1 certificates:(id)arg2;
- (void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)registrationDataWithAuthToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

