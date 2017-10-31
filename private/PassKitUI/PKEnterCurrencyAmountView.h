//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSDecimalNumber, NSNumber, NSNumberFormatter, NSString, PKNumberPadInputView, UIColor, UIFont, UILabel, UITextField;

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate>
{
    UIView *_internalInputAccessoryView;
    _Bool _showsDecimalPointButton;
    _Bool _enabled;
    UITextField *_amountTextField;
    NSString *_currency;
    UIColor *_textColor;
    UIFont *_amountFont;
    NSNumber *_kerning;
    UIFont *_currencySymbolFont;
    id <PKEnterCurrencyAmountViewDelegate> _delegate;
    UILabel *_currencySymbolLabel;
    UILabel *_amountLabel;
    PKNumberPadInputView *_numberPad;
    NSNumberFormatter *_currentAmountFormatter;
    NSString *_localizedAmountString;
}

@property(retain, nonatomic) NSString *localizedAmountString; // @synthesize localizedAmountString=_localizedAmountString;
@property(retain, nonatomic) NSNumberFormatter *currentAmountFormatter; // @synthesize currentAmountFormatter=_currentAmountFormatter;
@property(retain, nonatomic) PKNumberPadInputView *numberPad; // @synthesize numberPad=_numberPad;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *currencySymbolLabel; // @synthesize currencySymbolLabel=_currencySymbolLabel;
@property(nonatomic) __weak id <PKEnterCurrencyAmountViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) UIFont *currencySymbolFont; // @synthesize currencySymbolFont=_currencySymbolFont;
@property(copy, nonatomic) NSNumber *kerning; // @synthesize kerning=_kerning;
@property(copy, nonatomic) UIFont *amountFont; // @synthesize amountFont=_amountFont;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, nonatomic) UITextField *amountTextField; // @synthesize amountTextField=_amountTextField;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool showsDecimalPointButton; // @synthesize showsDecimalPointButton=_showsDecimalPointButton;
- (void).cxx_destruct;
- (void)_createSubviews;
- (double)_topPaddingForCurrencySymbol;
- (void)_updateContent;
- (void)_createAmountFormatter;
- (unsigned long long)_numberOfDecimalPlacesInString:(id)arg1 decimalSeperator:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)showKeyboard;
- (void)dismissKeyboard;
@property(retain, nonatomic) UIView *inputAccessoryView;
@property(retain, nonatomic) NSDecimalNumber *currentAmount;
- (id)initWithCurrency:(id)arg1 amount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

