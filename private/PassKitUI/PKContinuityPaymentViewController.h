//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKAuthenticatorDelegate.h"
#import "PKPaymentAuthorizationFooterViewDelegate.h"
#import "PKPaymentAuthorizationStateMachineDelegate.h"

@class NSArray, NSString, NSTimer, PKAuthenticator, PKContinuityPaymentCardSummaryView, PKContinuityPaymentFaviconView, PKPaymentAuthorizationFooterView, PKPaymentAuthorizationStateMachine, PKPhysicalButtonView, PKRemotePaymentRequest, UILabel, UIStackView, UIView, _UIBackdropView;

@interface PKContinuityPaymentViewController : UIViewController <PKAuthenticatorDelegate, PKPaymentAuthorizationFooterViewDelegate, PKPaymentAuthorizationStateMachineDelegate>
{
    _UIBackdropView *_backdropView;
    UIView *_dimmingBackgroundView;
    UIView *_compactRegion;
    PKPhysicalButtonView *_physicalButtonView;
    UILabel *_requestingDeviceLabel;
    UILabel *_requestingSiteLabel;
    UILabel *_priceLabel;
    UIView *_priceView;
    UIStackView *_summaryContainerView;
    PKContinuityPaymentCardSummaryView *_cardView;
    PKPaymentAuthorizationFooterView *_authorizationView;
    PKContinuityPaymentFaviconView *_faviconImage;
    UIViewController *_passcodeViewController;
    UIViewController *_passphraseViewController;
    _Bool _viewAppeared;
    _Bool _userIntentRequired;
    NSArray *_defaultConstraints;
    NSArray *_compactConstraints;
    _Bool _authenticating;
    PKAuthenticator *_authenticator;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    NSTimer *_timeoutTimer;
    _Bool _attemptedTimeout;
    id <PKPaymentAuthorizationHostProtocol> _delegate;
    PKRemotePaymentRequest *_remoteRequest;
}

@property(readonly, nonatomic) PKRemotePaymentRequest *remoteRequest; // @synthesize remoteRequest=_remoteRequest;
@property(nonatomic) id <PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)authorizationFooterViewDidChangeConstraints:(id)arg1;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)arg1;
- (void)dismissPassphraseViewController;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dismissPasscodeViewController;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticator:(id)arg1 didTransitionToPearlState:(long long)arg2;
- (_Bool)paymentPass:(id *)arg1 paymentApplication:(id *)arg2 fromAID:(id)arg3;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (void)_didCancel;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didFailWithError:(id)arg1;
- (void)_updatePendingTransaction:(id)arg1 withAuthorizationStateParam:(id)arg2;
- (void)_didSucceedWithAuthorizationStateParam:(id)arg1;
- (id)_evaluationRequest;
- (long long)_authenticatorPolicy;
- (void)_startEvaluation;
- (void)_suspendAuthentication;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)_processClientCallback:(id)arg1;
- (_Bool)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (void)invalidate;
- (void)updatePaymentWithClientUpdate:(id)arg1;
- (void)_updateCardView;
- (void)_timeoutFired;
- (void)_resetAndScheduleTimeout;
- (void)_cancelPassphrasePressed;
- (void)cancelPressed:(id)arg1;
- (void)_setUserIntentRequired:(_Bool)arg1;
- (void)_updateUserIntentRequired;
- (void)_setPassphraseViewController:(id)arg1;
- (void)_setPasscodeViewController:(id)arg1;
- (void)_setAuthenticating:(_Bool)arg1;
- (void)setProgressState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)setProgressState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithRemotePaymentRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

