//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIFocusEnvironment-Protocol.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIInterfaceAction, UIInterfaceActionVisualStyle;
@protocol UIInterfaceActionVisualBackgroundDisplaying;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionRepresentationView : UIView <UIFocusEnvironment, UIInterfaceActionDisplayPropertyObserver>
{
    _Bool _showingAsPressed;
    _Bool _hasLoadedBackgroundView;
    _Bool _canKeepContentsInHierarchy;
    _Bool _hasLoadedContentFirstTime;
    _Bool _enforcedOnlyKeepVisibleContentInHierarchy;
    _Bool _enforcedOnlyKeepVisibleContentInHierarchyValue;
    _Bool _contentsInsertedIntoViewHierarchy;
    _Bool _highlighted;
    _Bool _onlyKeepVisibleContentInHierarchy;
    UIInterfaceAction *_action;
    unsigned long long _visualCornerPosition;
    id _actionViewStateContext;
    UIView<UIInterfaceActionVisualBackgroundDisplaying> *_backgroundHighlightView;
    NSLayoutConstraint *_minimumWidthConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSArray *_viewsToDisappearWhenHighlighted;
    NSString *_sectionID;
}

@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(nonatomic) _Bool onlyKeepVisibleContentInHierarchy; // @synthesize onlyKeepVisibleContentInHierarchy=_onlyKeepVisibleContentInHierarchy;
@property(retain, nonatomic) NSArray *viewsToDisappearWhenHighlighted; // @synthesize viewsToDisappearWhenHighlighted=_viewsToDisappearWhenHighlighted;
@property(readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property(readonly, nonatomic) UIView<UIInterfaceActionVisualBackgroundDisplaying> *backgroundHighlightView; // @synthesize backgroundHighlightView=_backgroundHighlightView;
@property(retain, nonatomic) id actionViewStateContext; // @synthesize actionViewStateContext=_actionViewStateContext;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool contentsInsertedIntoViewHierarchy; // @synthesize contentsInsertedIntoViewHierarchy=_contentsInsertedIntoViewHierarchy;
@property(nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)_actionViewState;
- (void)_clearBackgroundPressedState;
- (id)_viewDisplayingBackground;
- (_Bool)_isVisibleWithinContainmentAncestor;
- (_Bool)_canLoadContentsIntoHierarchy;
- (void)_removeLoadedContentsFromHierarchyIfNotVisible;
- (void)_addLoadedContentsToHierarchyIfAllowed;
- (void)_addLoadedContentsToHierarchyFirstTime;
- (void)_updateLoadedContentsHierarchyByInsertingOrRemovingIfNecessary;
- (void)_loadContentsIntoHierarchyAndPrepareIfNecessary;
- (void)_updateHighlightAndPressedFeedback;
- (_Bool)isFocused;
- (void)_reloadBackgroundHighlightView;
- (void)_applyVisualStyleToBackgroundViewAndHighlighting;
- (void)_applyVisualStyleToLayoutMargins;
- (void)_initializeHorizontalMarginsForAction;
- (void)_setHorizontalMargins:(struct UIEdgeInsets)arg1 preservesSuperviewLayoutMargins:(_Bool)arg2;
- (void)_applyVisualStyleToMinimumSizeConstraints;
- (void)_applyVisualStyle;
- (void)_didScroll;
- (void)_showVisualFeedbackForPressed:(_Bool)arg1;
- (_Bool)_shouldShowPressFeedbackForEventWithPresses:(id)arg1;
- (_Bool)_handleVisualFeedbackForPress:(id)arg1 pressed:(_Bool)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)_showsFocusForFocusedView:(id)arg1;
- (_Bool)_fittingContentSizingViewIsAlertControllerRepresentation;
- (struct CGRect)_fittingContentSizingViewFrameInBounds:(struct CGRect)arg1;
- (struct CGSize)_fittingContentSizeWithFittingViewSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)_fittingContentSizingViewMargins;
- (id)_fittingContentSizingView;
- (id)__fittingContentSizingViewAllowingSelf;
- (id)__fittingContentSizingViewIfNotSelf;
- (void)_updateFittingContentSizingViewToFitSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)intrinsicContentSize;
- (void)layoutMarginsDidChange;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)_enforceActionRepresentationViewsOnlyKeepVisibleContentInHierarchy:(_Bool)arg1;
- (_Bool)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1;
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
- (void)invokeInterfaceAction;
- (void)updateContentsInsertedIntoHierarchy;
- (void)loadContents;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

