//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIGroupedBar.h>

@class NSLayoutConstraint, UIBarButtonItem, UIBarButtonItemGroup, UIKeyboardBIUImageGenerator, UIKeyboardCandidatePocketShadow, UITextInputAssistantItem;

__attribute__((visibility("hidden")))
@interface UIKeyboardAssistantBar : _UIGroupedBar
{
    UIKeyboardBIUImageGenerator *m_BIUImageGenerator;
    UIBarButtonItemGroup *m_dismissGroup;
    UIBarButtonItem *m_dismissButton;
    UIBarButtonItem *m_writeboardButton;
    UIBarButtonItemGroup *m_predictionGroup;
    NSLayoutConstraint *m_predictionWidthConstraint;
    UITextInputAssistantItem *m_defaultAssistantItem;
    UITextInputAssistantItem *m_currentAssistantItem;
    UIKeyboardCandidatePocketShadow *m_rightBorder;
    int m_validateGuard;
    _Bool m_useLargeButton;
    _Bool m_isLandscape;
    _Bool m_lightKeyboard;
    _Bool m_needsDismissButton;
    _Bool m_needsUpdateBarOnMoveToWindow;
    _Bool m_show;
    struct CGRect m_splitGap;
    _Bool m_suppressAXSHairlineThickening;
    _Bool _hideAssistantBar;
    _Bool _shouldShow;
}

+ (double)sideBarWidthForOrientation:(long long)arg1;
+ (double)assistantBarHeight;
+ (id)activeInstance;
+ (id)sharedInstance;
@property(nonatomic) _Bool shouldShow; // @synthesize shouldShow=_shouldShow;
@property(nonatomic) _Bool hideAssistantBar; // @synthesize hideAssistantBar=_hideAssistantBar;
- (_Bool)statisticForCalloutBarButtonSelection:(id)arg1;
- (void)statisticForShortcutBarHideWithSwitcher;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)updateBar:(_Bool)arg1;
- (void)updateBar;
- (void)updatePredictionViewForCustomButtons;
- (void)setInputAssistantButtonItems;
- (void)setInputAssistantButtonItemsForResponder:(id)arg1;
- (_Bool)enableInputClicksWhenVisible;
- (_Bool)hasItems;
- (_Bool)hasCustomButtons;
- (id)currentAssistantItem;
- (id)defaultAssistantItem;
- (id)newAssistantItemWithDefaultItems;
- (void)dimKeys:(id)arg1;
@property(nonatomic) _Bool show;
- (void)updateButtons;
- (double)sideBarWidthForOrientation:(long long)arg1;
- (void)assistantWriteboard;
- (void)assistantDismiss;
- (void)assistantUnderline;
- (void)assistantItalic;
- (void)assistantBold;
- (void)assistantPaste;
- (void)assistantRedo;
- (void)assistantUndo;
- (void)assistantCopy;
- (void)assistantCut;
- (void)executeAction:(int)arg1;
- (_Bool)canPerformAction:(int)arg1;
- (SEL)action:(int)arg1;
- (double)assistantBarHeight;
- (double)assistantBarHeightForOrientation:(long long)arg1;
- (double)assistantBarWidth;
- (double)deleteKeyWidth;
- (struct CGRect)handwritingCandidateSelectionFrame;
- (_Bool)enabled;
- (_Bool)showSwitch;
- (_Bool)disabledByPrediction;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showKeyboard:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)barButtonItem:(unsigned long long)arg1;
- (id)deleteButtonItem;
- (id)BIUGenerator;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;

@end

