//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIDimmingViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, NSTimer, UIDimmingView, UIInputSwitcherSelectionExtraView, UIInputSwitcherShadowView, UIInputSwitcherTableView, UIKBKeyView, UIKBTree, UIKeyboardLayoutStar, UISelectionFeedbackGenerator;

__attribute__((visibility("hidden")))
@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate>
{
    UIInputSwitcherTableView *m_table;
    UIInputSwitcherShadowView *m_shadowView;
    UIInputSwitcherSelectionExtraView *m_selExtraView;
    struct CGRect m_referenceRect;
    double m_pointerOffset;
    _Bool m_scrollable;
    _Bool m_startAutoscroll;
    _Bool m_scrolling;
    _Bool m_shouldFade;
    struct CGPoint m_point;
    double m_scrollStartTime;
    int m_scrollDirection;
    NSTimer *m_scrollTimer;
    unsigned long long m_visibleRows;
    unsigned long long m_firstVisibleRow;
    long long m_mode;
    UIDimmingView *m_dimmingView;
    UIView *m_inputView;
    struct CGPoint m_referenceLocation;
    UIKBKeyView *m_backgroundKeyView;
    double m_timeDismissed;
    UISelectionFeedbackGenerator *m_slideBehavior;
    _Bool _usesStraightLeftEdge;
    _Bool _usesDarkTheme;
    UIKBTree *_referenceKey;
    UIKeyboardLayoutStar *_layout;
}

@property(nonatomic) UIKeyboardLayoutStar *layout; // @synthesize layout=_layout;
@property(nonatomic) UIKBTree *referenceKey; // @synthesize referenceKey=_referenceKey;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic) _Bool usesStraightLeftEdge; // @synthesize usesStraightLeftEdge=_usesStraightLeftEdge;
@property(nonatomic) long long mode; // @synthesize mode=m_mode;
- (void).cxx_destruct;
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;
- (id)fontForItemAtIndex:(unsigned long long)arg1;
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1;
- (struct CGSize)preferredSize;
- (unsigned long long)defaultSelectedIndex;
- (unsigned long long)numberOfItems;
- (void)willFadeForSelectionAtIndex:(unsigned long long)arg1;
- (void)willFade;
- (void)willShow;
- (_Bool)shouldShow;
- (struct CGRect)popupRect;
- (void)setRenderConfig:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(_Bool)arg2;
- (void)selectItemAtPoint:(struct CGPoint)arg1;
- (_Bool)shouldShowSelectionExtraViewForIndexPath:(id)arg1;
- (void)highlightRow:(unsigned long long)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (struct CGRect)interactiveBounds;
- (id)indexPathForInputSwitcherCellIncludingInteractiveInsetsAtPoint:(struct CGPoint)arg1;
- (void)autoscrollTimerFired:(id)arg1;
- (void)stopAnyAutoscrolling;
- (void)endScrolling:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayForTopBottomCells;
- (void)setNeedsDisplayForCell:(id)arg1;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)hide;
- (void)removeFromSuperview;
- (void)clear;
- (void)fadeWithDelay:(double)arg1 forSelectionAtIndex:(unsigned long long)arg2;
- (void)fadeWithDelay:(double)arg1;
- (void)fade;
- (void)_delayedFade;
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;
- (int)_internationalKeyRoundedCornerInLayout:(id)arg1;
- (double)minYOfLastTableCellForSelectionExtraView;
- (id)maskForShadowViewBlurredBackground;
- (id)containerView;
- (void)showAsHUD;
- (void)showAsHUDFromLocation:(struct CGPoint)arg1 withInputView:(id)arg2 touchBegan:(double)arg3;
- (void)setupShadowViewWithSize:(struct CGSize)arg1;
- (void)setupBackgroundKeyViewWithSize:(struct CGSize)arg1;
- (void)show;
- (void)insertSelExtraView;
- (_Bool)usesShadowView;
- (_Bool)usesDimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (id)dimmingView;
- (id)inputView;
- (void)setKeyboardDimmed:(_Bool)arg1;
- (void)performShowAnimation;
- (_Bool)isVisible;
- (void)setFrame:(struct CGRect)arg1;
- (id)font;
- (id)subtitleFont;
- (void)applicationWillSuspend:(id)arg1;
- (_Bool)centerPopUpOverKey;
@property(readonly) _Bool usesTable;
- (id)table;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

