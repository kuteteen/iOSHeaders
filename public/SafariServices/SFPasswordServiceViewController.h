//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SFPasswordServiceViewControllerProtocol.h"
#import "_SFAuthenticationClient.h"
#import "_SFAuthenticationContextDelegate.h"

@class NSString, WBUPasswordPickerViewController, _SFAuthenticationContext;

__attribute__((visibility("hidden")))
@interface SFPasswordServiceViewController : UIViewController <_SFAuthenticationClient, _SFAuthenticationContextDelegate, SFPasswordServiceViewControllerProtocol>
{
    WBUPasswordPickerViewController *_passwordPickerViewController;
    _Bool _presentInPopover;
    _Bool _hasAuthenticationForOtherPasswords;
    NSString *_applicationIdentifier;
    _SFAuthenticationContext *_context;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void).cxx_destruct;
- (void)authenticateToPresentInPopover:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_authenticateToViewOtherPasswordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_hintStringsForAppID:(id)arg1 appName:(id)arg2 credentials:(id)arg3;
- (void)gatherAndShowPasswords;
- (void)_willAppearInRemoteViewController;
- (void)_dismiss;
- (id)_context;
- (_Bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (_Bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (_Bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (_Bool)authenticationEnabledForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

