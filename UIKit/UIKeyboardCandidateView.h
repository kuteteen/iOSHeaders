//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInputView.h>

@class UIImageView, UIKeyboardCandidateBar, UIKeyboardCandidateGrid, UIKeyboardCandidateSortControl, UIKeyboardCandidateSplitKeyboardToggleButton, UIKeyboardCandidateUnsplitKeyboardToggleButton, UIView;
@protocol UIKeyboardCandidateList;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView : UIInputView
{
    UIKeyboardCandidateBar *_bar;
    UIKeyboardCandidateSortControl *_sortControl;
    UIKeyboardCandidateGrid *_extendedView;
    UIView<UIKeyboardCandidateList> *_inlineView;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UIKeyboardCandidateUnsplitKeyboardToggleButton *_leftButton;
    UIKeyboardCandidateSplitKeyboardToggleButton *_rightButton;
    struct {
        unsigned int isExtended;
        unsigned int didMinimizeKeyboard;
        unsigned int isSplit;
        unsigned int isFloating;
    } _candidateBarFlags;
}

+ (double)defaultExtendedControlHeight;
+ (id)activeCandidateList;
+ (void)setActiveCandidateView:(id)arg1;
+ (id)activeCandidateView;
+ (id)sharedInstanceForInlineView:(_Bool)arg1;
+ (id)sharedInstanceForInlineView;
+ (id)sharedInstance;
@property(retain, nonatomic) UIView<UIKeyboardCandidateList> *inlineView; // @synthesize inlineView=_inlineView;
- (_Bool)_needsBackdrop;
- (double)extendedViewAnimationDuration;
- (void)setCandidatesToExtendedViewFromCollapsedView:(id)arg1;
- (unsigned long long)_numberOfColumns:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)_toggleExtendedCandidateView:(id)arg1;
- (void)setCandidateViewExtended:(_Bool)arg1;
- (void)candidatesDidChange;
- (id)activeCandidateList;
- (void)setCandidateBarCanExtend:(_Bool)arg1;
- (_Bool)shouldUseKeyboardBackground:(id)arg1;
- (double)extendedViewHeight;
- (int)candidatesVisualStyle;
- (void)setIsFloating:(_Bool)arg1;
- (_Bool)isFloating;
- (_Bool)isSplit;
- (_Bool)isExtended;
- (void)updatePageControlStatus;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

