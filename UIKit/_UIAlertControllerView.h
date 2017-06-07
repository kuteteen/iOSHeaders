//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIGestureRecognizerDelegatePrivate-Protocol.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate-Protocol.h>
#import <UIKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIAlertAction, UIAlertController, UIAlertControllerVisualStyle, UILabel, _UIAlertControllerActionViewMetrics, _UIAlertControllerInterfaceActionGroupView, _UIKeyboardLayoutAlignmentView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerView : UIView <UIInterfaceActionHandlerInvocationDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate>
{
    UIAlertController *_alertController;
    UIAlertControllerVisualStyle *_visualStyle;
    UIView *_contentView;
    UIView *_contentViewTopItemsView;
    _UIAlertControllerInterfaceActionGroupView *_mainInterfaceActionsGroupView;
    _UIAlertControllerInterfaceActionGroupView *_discreteCancelActionGroupView;
    UILabel *_titleLabel;
    _Bool _hasAppliedTitleConstraints;
    UILabel *_messageLabel;
    _Bool _hasAppliedMessageConstraints;
    UILabel *_detailMessageLabel;
    _Bool _hasAppliedDetailConstraints;
    UIView *_contentViewControllerContainerView;
    UIView *_textFieldViewControllerContainerView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    UIView *_dimmingView;
    NSMutableArray *_actionViews;
    struct CGPoint _actionSelectionInitialLocation;
    _Bool _inPopover;
    _Bool _hasDimmingView;
    _Bool _showsCancelAction;
    _Bool _cancelActionIsDiscrete;
    _Bool _shouldHaveBackdropView;
    _Bool _alignsToKeyboard;
    NSArray *_dimmingViewConstraints;
    NSArray *_dimmingViewForegroundViewTopConstraints;
    NSArray *_dimmingViewForegroundViewBottomConstraints;
    NSArray *_dimmingViewConstraintsForAlertStyle;
    NSArray *_dimmingViewConstraintsForActionSheetStyle;
    NSArray *_noDimmingViewConstraints;
    _Bool _hasCachedLargestActionDimension;
    struct CGSize _largestActionDimension;
    UIAlertAction *_effectivePreferredAction;
    long long _coalescingActionsChangedCount;
    _Bool _needsActionsChangedHandling;
    _Bool _actionsReversed;
    _Bool _presentationContextPrefersCancelActionShown;
    _UIAlertControllerActionViewMetrics *_actionViewMetrics;
    NSLayoutConstraint *_foregroundViewWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_contentViewMaxHeightConstraint;
    NSLayoutConstraint *_titleLabelTopAlignmentConstraint;
    NSLayoutConstraint *_messageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_detailMessageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewLeftConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewRightConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewTopConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewBottomConstraint;
    NSLayoutConstraint *_contentScrollViewBottomConstraint;
    NSLayoutConstraint *_contentScrollViewMaximumWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_textFieldViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_textFieldViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_textFieldViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewWidthConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewHeightConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewHorizontalAlignmentConstraint;
    NSLayoutConstraint *_discreteActionGroupViewHorizontalLayoutTrailingConstraint;
    NSLayoutConstraint *_actionGroupEqualsContentViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;
    struct CGSize _layoutSize;
}

+ (_Bool)_retroactivelyRequiresConstraintBasedLayout;
+ (void)initialize;
@property(retain) NSLayoutConstraint *discreteCancelActionViewHeightConstraint; // @synthesize discreteCancelActionViewHeightConstraint=_discreteCancelActionViewHeightConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewWidthConstraint; // @synthesize discreteCancelActionViewWidthConstraint=_discreteCancelActionViewWidthConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewLeadingConstraint; // @synthesize discreteCancelActionViewLeadingConstraint=_discreteCancelActionViewLeadingConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewTopConstraint; // @synthesize discreteCancelActionViewTopConstraint=_discreteCancelActionViewTopConstraint;
@property(retain) NSLayoutConstraint *actionGroupEqualsContentViewWidthConstraint; // @synthesize actionGroupEqualsContentViewWidthConstraint=_actionGroupEqualsContentViewWidthConstraint;
@property(retain) NSLayoutConstraint *discreteActionGroupViewHorizontalLayoutTrailingConstraint; // @synthesize discreteActionGroupViewHorizontalLayoutTrailingConstraint=_discreteActionGroupViewHorizontalLayoutTrailingConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewHorizontalAlignmentConstraint; // @synthesize mainActionButtonSequenceViewHorizontalAlignmentConstraint=_mainActionButtonSequenceViewHorizontalAlignmentConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewHeightConstraint; // @synthesize mainActionButtonSequenceViewHeightConstraint=_mainActionButtonSequenceViewHeightConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewWidthConstraint; // @synthesize mainActionButtonSequenceViewWidthConstraint=_mainActionButtonSequenceViewWidthConstraint;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain) NSLayoutConstraint *centerYConstraint; // @synthesize centerYConstraint=_centerYConstraint;
@property(retain) NSLayoutConstraint *centerXConstraint; // @synthesize centerXConstraint=_centerXConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerContainerViewHeightConstraint; // @synthesize textFieldViewControllerContainerViewHeightConstraint=_textFieldViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerContainerViewWidthConstraint; // @synthesize textFieldViewControllerContainerViewWidthConstraint=_textFieldViewControllerContainerViewWidthConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerContainerViewTopAlignmentConstraint; // @synthesize textFieldViewControllerContainerViewTopAlignmentConstraint=_textFieldViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewHeightConstraint; // @synthesize contentViewControllerContainerViewHeightConstraint=_contentViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewWidthConstraint; // @synthesize contentViewControllerContainerViewWidthConstraint=_contentViewControllerContainerViewWidthConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewTopAlignmentConstraint; // @synthesize contentViewControllerContainerViewTopAlignmentConstraint=_contentViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentScrollViewMaximumWidthConstraint; // @synthesize contentScrollViewMaximumWidthConstraint=_contentScrollViewMaximumWidthConstraint;
@property(retain) NSLayoutConstraint *contentScrollViewBottomConstraint; // @synthesize contentScrollViewBottomConstraint=_contentScrollViewBottomConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewBottomConstraint; // @synthesize textFieldViewControllerViewBottomConstraint=_textFieldViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewTopConstraint; // @synthesize textFieldViewControllerViewTopConstraint=_textFieldViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewRightConstraint; // @synthesize textFieldViewControllerViewRightConstraint=_textFieldViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewLeftConstraint; // @synthesize textFieldViewControllerViewLeftConstraint=_textFieldViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewBottomConstraint; // @synthesize contentViewControllerViewBottomConstraint=_contentViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewTopConstraint; // @synthesize contentViewControllerViewTopConstraint=_contentViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewRightConstraint; // @synthesize contentViewControllerViewRightConstraint=_contentViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewLeftConstraint; // @synthesize contentViewControllerViewLeftConstraint=_contentViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint *detailMessageLabelTopAlignmentConstraint; // @synthesize detailMessageLabelTopAlignmentConstraint=_detailMessageLabelTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *messageLabelTopAlignmentConstraint; // @synthesize messageLabelTopAlignmentConstraint=_messageLabelTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *titleLabelTopAlignmentConstraint; // @synthesize titleLabelTopAlignmentConstraint=_titleLabelTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentViewMaxHeightConstraint; // @synthesize contentViewMaxHeightConstraint=_contentViewMaxHeightConstraint;
@property(retain) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewTopConstraint; // @synthesize contentViewTopConstraint=_contentViewTopConstraint;
@property(retain) NSLayoutConstraint *foregroundViewWidthConstraint; // @synthesize foregroundViewWidthConstraint=_foregroundViewWidthConstraint;
@property(nonatomic) _Bool presentationContextPrefersCancelActionShown; // @synthesize presentationContextPrefersCancelActionShown=_presentationContextPrefersCancelActionShown;
@property(nonatomic, getter=_layoutSize, setter=_setLayoutSize:) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic, getter=_actionsReversed, setter=_setActionsReversed:) _Bool actionsReversed; // @synthesize actionsReversed=_actionsReversed;
@property(retain, nonatomic) _UIAlertControllerActionViewMetrics *actionViewMetrics; // @synthesize actionViewMetrics=_actionViewMetrics;
@property(readonly) UIView *_dimmingView; // @synthesize _dimmingView;
@property(readonly) UIView *_contentView; // @synthesize _contentView;
- (void).cxx_destruct;
- (_Bool)_forceLayoutEngineSolutionInRationalEdges;
- (_Bool)shouldChangeFocusedItem:(id)arg1 heading:(unsigned long long)arg2;
- (id)preferredFocusedView;
- (long long)tintAdjustmentMode;
- (void)setTintAdjustmentMode:(long long)arg1;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;
@property(nonatomic) double effectAlpha;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)_reevaluateSuperviewSizingConstraints;
- (void)_ensureActionViewRepresentationsHaveMetrics;
- (void)_recomputeActionMetrics;
- (void)_sizeOfTextFieldViewControllerChanged;
- (void)_sizeOfContentViewControllerChanged;
- (void)_removeContentViewController;
- (void)_didAddContentViewController;
@property _Bool alignsToKeyboard;
@property _Bool shouldHaveBackdropView;
@property _Bool cancelActionIsDiscrete;
- (void)_updateCancelActionBeingDiscrete;
- (id)__cancelActionView;
- (_Bool)showsCancelAction;
@property _Bool hasDimmingView;
@property _Bool inPopover;
- (id)textFields;
- (double)_spaceRequiredForActionSectionsSpacing;
- (id)_indexesOfActionSectionSeparators;
- (id)_preferredActionView;
- (id)_focusedAction;
- (id)cancelAction;
- (id)actions;
- (id)contentViewController;
- (id)_textFieldViewController;
- (_Bool)_hasTextFields;
- (_Bool)_hasDetailMessage;
- (_Bool)_hasAttributedMessage;
- (_Bool)_hasMessage;
- (_Bool)_hasAttributedTitle;
- (_Bool)_hasTitle;
- (id)_attributedDetailMessage;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (id)message;
- (id)title;
- (void)_setAttributedDetailMessage:(id)arg1;
- (void)_setAttributedMessage:(id)arg1;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_accessibilityColorsChanged;
- (void)_contentSizeChanged;
- (void)_updateTintColor;
- (void)_updateConstraintConstants;
- (void)_updateActionViewVisualStyle:(id)arg1;
- (void)_updateContentView;
- (void)_updateInsets;
- (void)_updateLabelMaximumLines;
- (void)_updateLabelTextColor;
- (void)_updateLabelFontSizes;
- (void)_updateMessageLabelFontSize;
- (void)_updateDetailLabelFontSize;
- (void)_updateTitleLabelFontSize;
- (void)_updateMessageLabelContents;
- (void)_updateDetailLabelContents;
- (void)_updateTitleLabelContents;
- (void)_updateStyleForIdiomChange:(_Bool)arg1;
@property(retain, nonatomic, setter=_setVisualStyle:) UIAlertControllerVisualStyle *_visualStyle;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (struct CGSize)_minimumSizeForAllActions;
- (double)_labelHorizontalInsets;
- (struct CGSize)_contentViewControllerSize;
- (double)_marginBetweenContentAndDiscreteCancelAction;
- (_Bool)hasDiscreteHorizontalCancelAction;
- (_Bool)_actionLayoutIsVertical;
- (void)_updatePreferredAction;
- (id)_effectivePreferredAction;
- (long long)_numberOfActionsForMainActionButtonSequenceView;
- (id)_presentableAlertActions;
- (id)_unlocalizedOrderedPresentableAlertActions;
- (id)_unlocalizedOrderedPresentableAlertActionViewRepresentations;
- (_Bool)_shouldHaveCancelActionInMainActionButtonSequenceView;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_scrollInitialActionToVisibleForPresentation;
- (void)_reloadInterfaceActionsGroupViewPreferredAction;
- (void)_reloadInterfaceActionViewRepresentations;
- (id)_interfaceActionForAlertAction:(id)arg1 inActionGroupView:(id)arg2;
- (void)_textFieldsChanged;
- (void)_actionsChanged;
- (void)_performBatchActionChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)_propertiesChanged;
- (void)_updateMainScrollableHeaderViewHasRealContent;
- (void)_actionLayoutDirectionChanged;
- (void)_configureActionGroupViewToAllowHorizontalLayout:(_Bool)arg1;
- (void)_recomputeAlertControllerWidth;
- (_Bool)_hasDiscreteCancelAction;
- (id)_discreteCancelActionView;
- (_Bool)_canLayOutActionsHorizontally;
- (struct CGSize)_mainActionButtonSequenceViewSizeForHorizontalLayout:(_Bool)arg1 itemSize:(struct CGSize)arg2;
- (struct CGSize)_itemSizeForHorizontalLayout:(_Bool)arg1;
- (struct CGSize)_itemSizeForHorizontalLayout:(_Bool)arg1 visualStyleRequiresActionRepresentationToFitItemSize:(_Bool *)arg2;
- (double)_idealLayoutWidth;
- (double)_layoutWidthForHorizontalLayout:(_Bool)arg1;
- (double)_availableWidthForHorizontalLayout:(_Bool)arg1;
- (_Bool)_horizontalLayoutCanUseFullWidth;
- (double)_verticalLayoutWidth;
- (struct CGSize)_sizeForLayoutWidthDetermination;
- (_Bool)_buttonsAreTopMost;
- (void)_applyTextFieldViewControllerContainerViewConstraints;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyDetailMessageConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTitleConstraints;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_prepareDimmingViewConstraints;
- (void)_prepareDimmingViewConstraintsIfNeeded;
- (void)_applyViewConstraints;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareDimmingView;
- (void)_updateActionsGroupPresentationStyles;
- (id)_newStyledBackgroundView;
- (void)_prepareDiscreteCancelActionGroupView;
- (void)_prepareMainInterfaceActionsGroupView;
- (void)_prepareTextFieldViewControllerContainerView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareDetailMessageLabel;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (void)_prepareContentViewTopItemsView;
- (void)_prepareContentView;
- (void)_prepareViewsAndAddConstraints;
@property __weak UIAlertController *alertController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

