//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/VSIdentityProviderPickerViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSIdentityProviderViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSRemoteNotifierDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSSupportedAppsViewControllerDelegate-Protocol.h>

@class NSArray, NSOperationQueue, NSString, VSPersistentStorage, VSPreferences, VSRemoteNotifier;
@protocol VSSetupFlowControllerDelegate;

@interface VSSetupFlowController : NSObject <VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate, VSSupportedAppsViewControllerDelegate>
{
    _Bool _signingIn;
    id <VSSetupFlowControllerDelegate> _delegate;
    VSPreferences *_preferences;
    VSPersistentStorage *_storage;
    NSOperationQueue *_privateQueue;
    VSRemoteNotifier *_remoteNotifier;
    NSArray *_freeOnBoardingBundleIDs;
}

@property(nonatomic, getter=isSigningIn) _Bool signingIn; // @synthesize signingIn=_signingIn;
@property(copy, nonatomic) NSArray *freeOnBoardingBundleIDs; // @synthesize freeOnBoardingBundleIDs=_freeOnBoardingBundleIDs;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSPersistentStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) __weak id <VSSetupFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)supportedAppsViewControllerDidFinish:(id)arg1;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 supportingApps:(id)arg3 forRequest:(id)arg4;
- (void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;
- (void)identityProviderViewControllerDidCancel:(id)arg1;
- (void)dismissIdentityProviderViewController:(id)arg1;
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;
- (void)_dismissAboutPrivacy:(id)arg1;
- (void)showAboutPrivacy;
- (void)showSupportedApps;
- (void)notNow;
- (void)_offerFreeOnBoardingIfNeededAfterOfferingOptions:(_Bool)arg1 endingUndoGrouping:(_Bool)arg2 arrivedViaNotNowButton:(_Bool)arg3 arrivedAfterSigningIn:(_Bool)arg4 goingBack:(_Bool)arg5;
- (void)startSigningIn;
- (void)_startLoadingAfterOfferingOptions:(_Bool)arg1 endingUndoGrouping:(_Bool)arg2 arrivedViaNotNowButton:(_Bool)arg3 arrivedAfterSigningIn:(_Bool)arg4 goingBack:(_Bool)arg5;
- (void)startLoadingWhenGoingBack:(_Bool)arg1;
- (void)_obtainConsentForBundleIDs:(id)arg1 vouchers:(id)arg2 withAppleAccount:(id)arg3 identityProvider:(id)arg4 endingUndoGrouping:(_Bool)arg5 arrivedViaNotNowButton:(_Bool)arg6 arrivedAfterSigningIn:(_Bool)arg7 goingBack:(_Bool)arg8;
- (void)_presentError:(id)arg1;
- (void)_appleAccountDidChange:(id)arg1;
- (void)_finishAfterOfferingOptions:(_Bool)arg1 endingUndoGrouping:(_Bool)arg2;
- (void)_dismissViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestAccessWithViewController:(id)arg1;
- (void)_pickProviderWithViewController:(id)arg1;
- (void)_offerAuthenticationWithSupportedAppsButton:(_Bool)arg1;
- (void)_didStartLoading;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

