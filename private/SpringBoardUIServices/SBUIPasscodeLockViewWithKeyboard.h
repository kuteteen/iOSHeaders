//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>

#import <SpringBoardUIServices/SBPasscodeKeyboardAnimatorDelegate-Protocol.h>
#import <SpringBoardUIServices/SBUIPasscodeEntryFieldDelegate-Protocol.h>

@class NSString, SBPasscodeKeyboardAnimator, SBUIAlphanumericPasscodeEntryField, SBUIRingViewLabelButton, UILabel, UIView;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate, SBPasscodeKeyboardAnimatorDelegate>
{
    SBPasscodeKeyboardAnimator *_keyboardAnimator;
    SBUIAlphanumericPasscodeEntryField *_alphaEntryField;
    UIView *_statusFieldBackground;
    SBUIRingViewLabelButton *_emergencyCallButton;
    _Bool _usesLightStyle;
    _Bool _isResigningResponderStatus;
    _Bool _keyboardVisible;
    double _keyboardHeightOffset;
    _Bool _keyboardTracksLockView;
    UIView *_keyboardTrackingView;
    UILabel *_statusField;
    UILabel *_statusSubtitleView;
}

@property(retain, nonatomic) UILabel *statusSubtitleView; // @synthesize statusSubtitleView=_statusSubtitleView;
@property(retain, nonatomic) UILabel *statusField; // @synthesize statusField=_statusField;
- (void).cxx_destruct;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_updateKeyboardHeightOffsetForKeyboardNotification:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateFont;
- (void)_layoutStatusView;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(_Bool)arg3;
- (double)_largeTextEmergencyButtonMaxWidth;
- (double)_statusTitleWidth;
- (double)_statusFieldHeightWithWidth:(double)arg1;
- (double)_keyboardToEntryFieldOffset;
- (struct CGRect)_keyboardFrameForInterfaceOrientation:(long long)arg1;
- (void)_layoutForMinimizationState:(_Bool)arg1;
- (void)_toggleForStatusField;
- (void)_toggleForEmergencyCall;
- (void)_acceptOrCancelReturnKeyPress;
- (id)_newStatusSubtitleView;
- (id)_newStatusField;
- (id)_alphanumericPasscodeEntryField;
- (id)_statusSubtitleView;
- (id)_statusTitleView;
- (void)passcodeEntryFieldDidResignFirstResponder:(id)arg1;
- (_Bool)passcodeEntryFieldShouldShowSystemKeyboard:(id)arg1;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (_Bool)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;
- (void)_notifyDelegatePasscodeEntered;
- (void)_hardwareReturnKeyPressed:(id)arg1;
- (void)passcodeKeyboardAnimatorAnimationDidComplete:(id)arg1;
- (void)becomeActiveWithAnimationSettings:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (void)_setKeyboardTracksLockView:(_Bool)arg1;
- (id)_viewForKeyboardTracking;
- (void)updateForTransitionToPasscodeView:(_Bool)arg1;
- (void)setShowsStatusField:(_Bool)arg1;
- (void)setShowsEmergencyCallButton:(_Bool)arg1;
- (id)passcode;
- (void)_luminanceBoostDidChange;
- (void)dealloc;
- (id)initWithLightStyle:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

