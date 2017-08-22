//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PreferencesUI/CTCarrierSpaceClientDelegate-Protocol.h>

@class CTCarrierSpaceAppsInfo, CTCarrierSpaceCapabilities, CTCarrierSpaceClient, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo, CTCarrierSpaceUserConsentFlowInfo, NSNumber, NSString, PSUIAppInstallController;
@protocol OS_dispatch_queue;

@interface PSUICarrierSpaceManager : NSObject <CTCarrierSpaceClientDelegate>
{
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    CTCarrierSpaceCapabilities *_capabilities;
    CTCarrierSpaceUsageInfo *_usageInfo;
    CTCarrierSpacePlansInfo *_plansInfo;
    CTCarrierSpaceAppsInfo *_appsInfo;
    PSUIAppInstallController *_carrierAppInstallController;
    NSNumber *_hasUserConsent;
    CTCarrierSpaceUserConsentFlowInfo *_userConsentFlowInfo;
    struct __CTServerConnection *_serverConnection;
    CTCarrierSpaceClient *_carrierSpaceClient;
}

+ (long long)bytesFromString:(id)arg1 carrierSpaceUnits:(long long)arg2;
+ (int)carrierMetricTypeForString:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
- (void).cxx_destruct;
- (void)userConsentFlowInfoDidChange;
- (void)appsDidChange;
- (void)plansDidChange;
- (void)usageDidChange;
- (void)capabilitiesDidChange:(id)arg1;
- (id)localizedDataStringFromBytes:(unsigned long long)arg1;
- (_Bool)shouldShowPlanMetrics:(id)arg1;
- (id)descriptionForPlanMetrics:(id)arg1;
- (_Bool)planChangeIsRestricted;
- (id)carrierAppInstallController;
- (id)appsInfo;
- (id)planMetrics;
- (id)subscribedDomesticPlanOptions;
- (id)subscribedPlanOptions;
- (id)plansInfo;
- (id)usageInfo;
- (id)capabilities;
- (_Bool)supportsSweetgum;
- (void)refresh;
- (void)refreshAndReload;
- (void)reset;
- (void)setUserConsent:(_Bool)arg1;
- (id)userConsentFlowInfo;
- (_Bool)hasUserConsent;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

