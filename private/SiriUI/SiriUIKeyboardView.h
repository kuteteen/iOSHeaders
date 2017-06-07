//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInputView.h>

#import <SiriUI/UITextFieldDelegate-Protocol.h>

@class NSString, UIButton, UITextField;
@protocol SiriUIKeyboardViewDelegate;

@interface SiriUIKeyboardView : UIInputView <UITextFieldDelegate>
{
    UIButton *_helpButton;
    UIButton *_dismissButton;
    UITextField *_textField;
    id <SiriUIKeyboardViewDelegate> _delegate;
}

+ (double)heightForWidthSizeClass:(_Bool)arg1;
@property(nonatomic) __weak id <SiriUIKeyboardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)_createTextFieldWithFrame:(struct CGRect)arg1;
- (void)_dismissButtonLongPressed:(id)arg1;
- (id)_createDismissButton:(struct CGRect)arg1;
- (void)_dismissButtonTapped:(id)arg1;
- (void)_helpButtonLongPressed:(id)arg1;
- (void)_helpButtonTapped:(id)arg1;
- (id)_createHelpButton:(struct CGRect)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (_Bool)_isSoftKeyboardWithoutDefaultDismissButtonMinimized;
- (_Bool)_isDefaultDismissKeyboardButtonVisible;
- (void)layoutSubviews;
- (void)setKeyboardEnabled:(_Bool)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 inputViewStyle:(long long)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
