//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKitUI/AKBaseSignInViewController.h>

#import <AuthKitUI/AKAppleIDAuthenticationInAppContextAlertDelegate-Protocol.h>
#import <AuthKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, PKContinuousButton, UIButton, UIControl, UILabel, UITextField, UIView;

@interface AKModalSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationInAppContextAlertDelegate, UITextFieldDelegate>
{
    UIControl *_firstResponder;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UITextField *_passwordField;
    UIButton *_passwordRecoveryButton;
    PKContinuousButton *_signInButton;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) PKContinuousButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain, nonatomic) UIButton *passwordRecoveryButton; // @synthesize passwordRecoveryButton=_passwordRecoveryButton;
@property(retain, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)displayAlertForContext:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_provideDelegateWithAuthResults:(id)arg1 error:(id)arg2;
- (void)_hidebusyWorkUI;
- (void)_startBusyWorkUI;
- (struct UIEdgeInsets)_signInButtonEdgeInsets;
- (void)_signInButtonTapped:(id)arg1;
- (void)_passwordRecoveryButtonWasTapped:(id)arg1;
- (void)_updateViewConstraints;
- (void)_setupConstraints;
- (void)_createViews;
- (void)_setupViews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

