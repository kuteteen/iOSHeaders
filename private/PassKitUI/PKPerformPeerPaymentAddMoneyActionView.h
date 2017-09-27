//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PKEnterCurrencyAmountViewDelegate.h"
#import "PKNumberPadSuggestionsViewDelegate.h"
#import "PKPeerPaymentPerformActionView.h"

@class NSDecimalNumber, NSNumberFormatter, NSString, PKEnterCurrencyAmountView, PKEnterValueNewBalanceView, PKNumberPadSuggestionsView, PKNumericSuggestionsEnterValueAlgorithm, PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentService, UITextField;

@interface PKPerformPeerPaymentAddMoneyActionView : UIView <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, PKPeerPaymentPerformActionView>
{
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_account;
    PKPaymentPass *_pass;
    id <PKPerformActionViewDelegate> _delegate;
    NSDecimalNumber *_currentAmount;
    NSNumberFormatter *_currentAmountFormatter;
    PKNumericSuggestionsEnterValueAlgorithm *_suggestionGenerator;
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
    PKEnterValueNewBalanceView *_newBalanceView;
    PKNumberPadSuggestionsView *_suggestionView;
    NSDecimalNumber *_cardBalance;
    NSDecimalNumber *_minBalance;
    NSDecimalNumber *_maxBalance;
    NSDecimalNumber *_minLoadAmount;
    NSDecimalNumber *_maxLoadAmount;
}

@property(copy, nonatomic) NSDecimalNumber *maxLoadAmount; // @synthesize maxLoadAmount=_maxLoadAmount;
@property(copy, nonatomic) NSDecimalNumber *minLoadAmount; // @synthesize minLoadAmount=_minLoadAmount;
@property(copy, nonatomic) NSDecimalNumber *maxBalance; // @synthesize maxBalance=_maxBalance;
@property(copy, nonatomic) NSDecimalNumber *minBalance; // @synthesize minBalance=_minBalance;
@property(copy, nonatomic) NSDecimalNumber *cardBalance; // @synthesize cardBalance=_cardBalance;
@property(retain, nonatomic) PKPeerPaymentAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <PKPerformActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_amountTopPadding;
- (_Bool)_shouldShakeCard:(id)arg1;
- (void)_createSubviews;
- (_Bool)_isCurrentAmountValid;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(_Bool)arg2;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(_Bool)arg2;
- (void)_setRightBarButtonEnabledState;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (_Bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;
- (void)amountTextFieldShouldAcceptTouches:(_Bool)arg1;
@property(readonly, nonatomic) UITextField *amountTextField;
- (void)willDismissViewController;
- (void)saveLastInputValues;
- (id)serviceProviderData;
- (id)pass;
- (id)transactionCurrency;
- (id)transactionAmount;
- (void)layoutSubviews;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2;
- (id)init;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

