//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSSpecifierGroupController.h"
#import "RemoteUIControllerDelegate.h"

@class CTCarrierSpaceCapabilities, NSString, PSListController, PSSpecifier, PSUICarrierSpaceOptInSplashScreen, RemoteUIController;

@interface PSUICarrierSpaceGroupController : NSObject <RemoteUIControllerDelegate, PSSpecifierGroupController>
{
    RemoteUIController *_remoteUIController;
    PSListController *_listController;
    PSSpecifier *_groupSpecifier;
    CTCarrierSpaceCapabilities *_capabilities;
    PSUICarrierSpaceOptInSplashScreen *_optInSplashScreen;
}

@property(retain, nonatomic) PSUICarrierSpaceOptInSplashScreen *optInSplashScreen; // @synthesize optInSplashScreen=_optInSplashScreen;
@property(retain, nonatomic) CTCarrierSpaceCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
@property(retain, nonatomic) RemoteUIController *remoteUIController; // @synthesize remoteUIController=_remoteUIController;
- (void).cxx_destruct;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)disagreeOrCancelPressed;
- (void)agreePressed;
- (void)openURLWithSpecifier:(id)arg1;
- (void)showTermsAndConditions:(id)arg1 consentFlowInfo:(id)arg2;
- (void)showConsentFlow:(id)arg1;
- (void)carrierSpaceChanged;
- (id)descriptionForUsage:(id)arg1;
- (id)descriptionForPlans:(id)arg1;
- (void)newCarrierNotification;
- (id)carrierServicesSpecifier;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

