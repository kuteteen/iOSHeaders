//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UITextFieldDelegate-Protocol.h>

@class NSMutableArray, NSString, UILabel, UIToolbar, UIWindow;
@protocol UIModalViewDelegate;

@interface UIModalView : UIView <UITextFieldDelegate>
{
    id <UIModalViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_bodyTextLabel;
    UILabel *_taglineTextLabel;
    double _startX;
    double _startY;
    id _context;
    long long _cancelButton;
    long long _defaultButton;
    long long _firstOtherButton;
    UIToolbar *_toolbar;
    UIWindow *_originalWindow;
    UIWindow *_dimWindow;
    long long _suspendTag;
    long long _dismissButtonIndex;
    double _bodyTextHeight;
    NSMutableArray *_buttons;
    NSMutableArray *_textFields;
    UIView *_keyboard;
    UIView *_table;
    UIView *_dimView;
    UIView *_sheetView;
    struct {
        unsigned int numberOfRows:7;
        unsigned int delegateAlertSheetButtonClicked:1;
        unsigned int delegateDidPresentAlertSheet:1;
        unsigned int delegateDidDismissAlertSheet:1;
        unsigned int hideButtonBar:1;
        unsigned int alertStyle:3;
        unsigned int dontDimBackground:1;
        unsigned int dismissSuspended:1;
        unsigned int dontBlockInteraction:1;
        unsigned int sheetWasPoppedUp:1;
        unsigned int animating:1;
        unsigned int hideWhenDoneAnimating:1;
        unsigned int layoutWhenDoneAnimating:1;
        unsigned int titleMaxLineCount:2;
        unsigned int bodyTextMaxLineCount:3;
        unsigned int runsModal:1;
        unsigned int runningModal:1;
        unsigned int addedTextView:1;
        unsigned int addedTableShadows:1;
        unsigned int showOverSBAlerts:1;
        unsigned int showMinTableContent:1;
        unsigned int bodyTextTruncated:1;
        unsigned int orientation:3;
        unsigned int groupsTextFields:1;
        unsigned int delegateBodyTextAlignment:1;
        unsigned int delegateClickedButtonAtIndex:1;
        unsigned int delegateCancel:1;
        unsigned int delegateWillPresent:1;
        unsigned int delegateDidPresent:1;
        unsigned int delegateWillDismiss:1;
        unsigned int delegateDidDismiss:1;
        unsigned int popupFromPoint:1;
        unsigned int extra:20;
        unsigned int dontCallDismissDelegate:1;
        unsigned int useAutomaticKB:1;
        unsigned int shouldHandleFirstKeyUpEvent:1;
        unsigned int cancelWhenDoneAnimating:1;
    } _modalViewFlags;
}

+ (id)visibleAlert;
+ (id)topMostAlert;
+ (_Bool)atLeastOneAlertVisible;
+ (id)_popupAlertBackground;
+ (struct CGSize)minimumSize;
- (void).cxx_destruct;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (long long)firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
@property(nonatomic) long long cancelButtonIndex;
- (long long)defaultButtonIndex;
- (void)setDefaultButtonIndex:(long long)arg1;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic) long long numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)addButtonWithTitle:(id)arg1;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) __weak id <UIModalViewDelegate> delegate;
- (void)dealloc;
- (id)_initWithTelephoneNumber:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(long long)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_prepareToBeReplaced;
- (void)replaceAlert:(id)arg1;
- (void)_prepareForDisplay;
- (id)taglineTextView;
- (id)bodyTextView;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)layout;
- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect)arg2 withMinimumHeight:(double)arg3;
- (long long)numberOfLinesInTitle;
- (double)_buttonHeight;
- (double)_maxHeight;
- (struct CGRect)titleRect;
- (_Bool)runsModal;
- (void)setRunsModal:(_Bool)arg1;
- (_Bool)blocksInteraction;
- (void)setBlocksInteraction:(_Bool)arg1;
- (long long)suspendTag;
- (void)setSuspendTag:(long long)arg1;
- (_Bool)dimsBackground;
- (void)setDimsBackground:(_Bool)arg1;
- (void)setAlertSheetStyle:(int)arg1;
- (int)alertSheetStyle;
- (long long)numberOfRows;
- (void)setNumberOfRows:(long long)arg1;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_appSuspended:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (double)_bottomVerticalInset;
- (double)_titleHorizontalInset;
- (double)_titleVerticalBottomInset;
- (double)_titleVerticalTopInset;
- (struct CGSize)backgroundSize;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)_slideSheetOut:(_Bool)arg1;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (id)_dimView;
- (void)setDimView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)_presentSheetFromView:(id)arg1 above:(_Bool)arg2;
- (void)popupAlertAnimated:(_Bool)arg1;
- (void)userDidCancelPopoverView:(id)arg1;
- (void)popupAlertAnimated:(_Bool)arg1 fromBarButtonItem:(id)arg2;
- (void)popupAlertAnimated:(_Bool)arg1 atOffset:(double)arg2;
- (void)_layoutIfNeeded;
- (void)_layoutPopupAlertWithOrientation:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)isBodyTextTruncated;
- (void)layoutAnimated:(_Bool)arg1;
- (void)layoutAnimated:(_Bool)arg1 withDuration:(double)arg2;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (void)_setupInitialFrame;
- (void)_cancelAnimated:(_Bool)arg1;
- (void)_hideAnimated:(_Bool)arg1;
- (void)_temporarilyHideAnimated:(_Bool)arg1;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (_Bool)_canShowAlerts;
- (_Bool)_dimsBackground;
- (void)_repopup;
- (void)_repopupNoAnimation;
- (void)_performPopoutAnimationAnimated:(_Bool)arg1;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (_Bool)_isAnimating;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_performPopup:(_Bool)arg1;
- (_Bool)showsOverSpringBoardAlerts;
- (void)setShowsOverSpringBoardAlerts:(_Bool)arg1;
- (_Bool)_manualKeyboardIsVisible;
- (_Bool)_needsKeyboard;
- (id)tableView;
- (_Bool)tableShouldShowMinimumContent;
- (void)setTableShouldShowMinimumContent:(_Bool)arg1;
- (void)_cleanupAfterPopupAnimation;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (_Bool)_isSBAlert;
- (void)_buttonClicked:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (long long)buttonCount;
- (id)_addButtonWithTitleText:(id)arg1;
- (id)_addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)destructiveButton;
- (void)setDestructiveButton:(id)arg1;
- (id)_defaultButton;
- (void)_setDefaultButton:(id)arg1;
- (id)defaultButton;
- (void)setDefaultButton:(id)arg1;
- (id)keyboard;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (id)textField;
- (long long)textFieldCount;
- (id)textFieldAtIndex:(long long)arg1;
- (void)_setTextFieldsHidden:(_Bool)arg1;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (long long)bodyMaxLineCount;
- (void)setBodyTextMaxLineCount:(long long)arg1;
- (long long)titleMaxLineCount;
- (void)setTitleMaxLineCount:(long long)arg1;
- (id)bodyText;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)_setupTitleStyle;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_createBodyTextLabelIfNeeded;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createTitleLabelIfNeeded;
- (id)buttons;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (long long)_currentOrientation;
- (_Bool)requiresPortraitOrientation;
@property(nonatomic) _Bool groupsTextFields;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(long long)arg3 delegate:(id)arg4 context:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

