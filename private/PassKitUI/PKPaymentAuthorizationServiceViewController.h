//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AKAppleIDAuthenticationInAppContextDelegate.h"
#import "PKAuthenticatorDelegate.h"
#import "PKPaymentAuthorizationFooterViewDelegate.h"
#import "PKPaymentAuthorizationServiceProtocol.h"
#import "PKPaymentAuthorizationStateMachineDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSLayoutConstraint, NSString, PKAuthenticator, PKPaymentAuthorizationFooterView, PKPaymentAuthorizationLayout, PKPaymentAuthorizationPasswordButtonView, PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationSummaryItemsView, PKPaymentAuthorizationTotalView, PKPaymentPreferencesViewController, PKPhysicalButtonView, UIBarButtonItem, UITableView, UIView;

@interface PKPaymentAuthorizationServiceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKPaymentAuthorizationFooterViewDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationStateMachineDelegate, AKAppleIDAuthenticationInAppContextDelegate, PKPaymentAuthorizationServiceProtocol>
{
    PKPaymentAuthorizationLayout *_layout;
    long long _authorizationMode;
    UIView *_contentView;
    UITableView *_detailTableView;
    PKPaymentAuthorizationSummaryItemsView *_summaryItemsView;
    PKPaymentAuthorizationTotalView *_totalView;
    PKPaymentAuthorizationFooterView *_footerView;
    PKPaymentAuthorizationPasswordButtonView *_passwordButtonView;
    NSLayoutConstraint *_passphraseBottomConstraint;
    UIBarButtonItem *_cancelBarButtonItem;
    UIView *_passphraseSeparatorView;
    NSLayoutConstraint *_contentViewRightConstraint;
    PKPaymentPreferencesViewController *_shippingMethodPreferencesController;
    PKPaymentPreferencesViewController *_shippingAddressPreferencesController;
    PKPaymentPreferencesViewController *_shippingContactPreferencesController;
    PKPaymentPreferencesViewController *_paymentCardPreferencesController;
    _Bool _viewAppeared;
    _Bool _visible;
    _Bool _authenticating;
    _Bool _allowCompactProcessing;
    UIViewController *_passcodeViewController;
    UIViewController *_passphraseViewController;
    _Bool _hostApplicationResignedActive;
    _Bool _hostApplicationEnteredBackground;
    _Bool _treatingHostAsBackgrounded;
    _Bool _bypassAuthenticator;
    double _keyboardHeight;
    _Bool _isPad;
    _Bool _needsFinalCallback;
    long long _preferencesStyle;
    struct __IOHIDEventSystemClient *_hidSystemClient;
    unsigned long long _biometryAttempts;
    _Bool _userIntentRequired;
    _Bool _shouldIgnorePhysicalButton;
    _Bool _cancelButtonDisabled;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    PKAuthenticator *_authenticator;
    PKPhysicalButtonView *_physicalButtonView;
    id <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> _delegate;
}

@property(readonly, nonatomic) _Bool cancelButtonDisabled; // @synthesize cancelButtonDisabled=_cancelButtonDisabled;
@property(nonatomic) __weak id <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPhysicalButtonView *physicalButtonView; // @synthesize physicalButtonView=_physicalButtonView;
@property(readonly, nonatomic) _Bool shouldIgnorePhysicalButton; // @synthesize shouldIgnorePhysicalButton=_shouldIgnorePhysicalButton;
@property(readonly, nonatomic, getter=isUserIntentRequired) _Bool userIntentRequired; // @synthesize userIntentRequired=_userIntentRequired;
@property(retain, nonatomic) PKAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(retain, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void).cxx_destruct;
- (void)contextWillBeginPresentingSecondaryUI:(id)arg1;
- (void)_removeSimulatorHIDListener;
- (void)_startSimulatorHIDListener;
- (void)_sendDidEncounterAuthorizationEventIfNecessary:(unsigned long long)arg1;
- (void)_updatePhysicalButtonInstruction;
- (void)_setUserIntentRequired:(_Bool)arg1 shouldIgnorePhysicalButton:(_Bool)arg2;
- (void)_updateUserIntentRequired;
- (void)_setPassphraseViewController:(id)arg1;
- (void)_setPasscodeViewController:(id)arg1;
- (void)_setAuthenticating:(_Bool)arg1;
- (void)_setVisible:(_Bool)arg1;
- (id)_evaluationRequest;
- (long long)_authenticatorPolicy;
- (id)_compactNavigationController;
- (long long)_totalViewStyle;
- (void)_updatePreferredContentSize;
- (void)_updatePreferencesWithErrors:(id)arg1;
- (void)_updateShippingMethods;
- (void)_setupPaymentPassAndBillingAddress;
- (void)_setupShippingContact;
- (void)_setupShippingAddress;
- (void)_setupShippingMethods;
- (void)_setupWithPaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (void)_handleModelUpdate;
- (Class)_viewPresenterClassForDataItem:(id)arg1;
- (Class)_tableViewClassForDataItem:(id)arg1;
- (void)_removePassphraseViewFromHierarchyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_addPassphraseViewControllerToHierarchy:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateFooterStateForBiometricMatchMissIfNecessary;
- (void)resumeAndUpdateContentSize;
- (void)cancelPressed:(id)arg1;
- (void)_payWithPasswordPressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)authorizationFooterViewDidChangeConstraints:(id)arg1;
- (void)authorizationFooterViewWillChangeConstraints:(id)arg1;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)arg1;
- (void)dismissPassphraseViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPassphraseViewController;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dismissPasscodeViewController;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)biometricAttemptFailed;
- (void)authenticatorDidEncounterBiometricLockout:(id)arg1;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticator:(id)arg1 didTransitionToPearlState:(long long)arg2;
- (void)_updatePendingTransaction:(id)arg1 withAuthorizationStateParam:(id)arg2;
- (void)_didSucceedWithAuthorizationStateParam:(id)arg1;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didFailWithError:(id)arg1;
- (void)_didCancel:(_Bool)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)_updateBackgroundedState:(_Bool)arg1;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(_Bool)arg1;
- (void)handleHostApplicationDidCancel;
- (void)setFooterState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3;
- (void)_selectOptionsForDataItem:(id)arg1;
- (void)_startEvaluation;
- (void)_suspendAuthenticationAndForceReset:(_Bool)arg1;
- (void)_suspendAuthentication;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1 animated:(_Bool)arg2;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (void)_processClientCallback:(id)arg1;
- (_Bool)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (void)invalidate;
- (id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_createSubviews;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

