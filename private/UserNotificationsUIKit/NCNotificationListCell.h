//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <UserNotificationsUIKit/MTContentSizeCategoryAdjusting-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerObserving-Protocol.h>
#import <UserNotificationsUIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UserNotificationsUIKit/UIScrollViewDelegate-Protocol.h>

@class NCNotificationListCellActionButtonsView, NCNotificationViewController, NSString, UIPanGestureRecognizer, UIView, UIViewFloatAnimatableProperty;
@protocol NCNotificationListCellDelegate;

@interface NCNotificationListCell : UICollectionViewCell <UIScrollViewDelegate, UIGestureRecognizerDelegate, NCNotificationViewControllerObserving, MTContentSizeCategoryAdjusting>
{
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _configured;
    _Bool _shouldOverrideForReveal;
    _Bool _executingDefaultAction;
    _Bool _performingSwipeHinting;
    _Bool _performingOrbHinting;
    NCNotificationViewController *_contentViewController;
    id <NCNotificationListCellDelegate> _delegate;
    double _overrideAlpha;
    NSString *_backgroundGroupName;
    NCNotificationListCellActionButtonsView *_leftActionButtonsView;
    NCNotificationListCellActionButtonsView *_rightActionButtonsView;
    UIView *_leftActionButtonsClippingRevealView;
    UIView *_rightActionButtonsClippingRevealView;
    unsigned long long _actionsRevealState;
    CDUnknownBlockType _sideSwipeHintingHideAnimationBlock;
    UIViewFloatAnimatableProperty *_targetPositionAnimatableProperty;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _panGestureStartingPosition;
    struct CGPoint _overrideCenter;
    struct UIEdgeInsets _insetMargins;
}

@property(nonatomic, getter=isPerformingOrbHinting) _Bool performingOrbHinting; // @synthesize performingOrbHinting=_performingOrbHinting;
@property(nonatomic) double panGestureStartingPosition; // @synthesize panGestureStartingPosition=_panGestureStartingPosition;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *targetPositionAnimatableProperty; // @synthesize targetPositionAnimatableProperty=_targetPositionAnimatableProperty;
@property(copy, nonatomic) CDUnknownBlockType sideSwipeHintingHideAnimationBlock; // @synthesize sideSwipeHintingHideAnimationBlock=_sideSwipeHintingHideAnimationBlock;
@property(nonatomic, getter=isPerformingSwipeHinting) _Bool performingSwipeHinting; // @synthesize performingSwipeHinting=_performingSwipeHinting;
@property(nonatomic) unsigned long long actionsRevealState; // @synthesize actionsRevealState=_actionsRevealState;
@property(nonatomic, getter=isExecutingDefaultAction) _Bool executingDefaultAction; // @synthesize executingDefaultAction=_executingDefaultAction;
@property(retain, nonatomic) UIView *rightActionButtonsClippingRevealView; // @synthesize rightActionButtonsClippingRevealView=_rightActionButtonsClippingRevealView;
@property(retain, nonatomic) UIView *leftActionButtonsClippingRevealView; // @synthesize leftActionButtonsClippingRevealView=_leftActionButtonsClippingRevealView;
@property(retain, nonatomic) NCNotificationListCellActionButtonsView *rightActionButtonsView; // @synthesize rightActionButtonsView=_rightActionButtonsView;
@property(retain, nonatomic) NCNotificationListCellActionButtonsView *leftActionButtonsView; // @synthesize leftActionButtonsView=_leftActionButtonsView;
@property(copy, nonatomic) NSString *backgroundGroupName; // @synthesize backgroundGroupName=_backgroundGroupName;
@property(nonatomic) struct CGPoint overrideCenter; // @synthesize overrideCenter=_overrideCenter;
@property(nonatomic) double overrideAlpha; // @synthesize overrideAlpha=_overrideAlpha;
@property(nonatomic) _Bool shouldOverrideForReveal; // @synthesize shouldOverrideForReveal=_shouldOverrideForReveal;
@property(nonatomic, getter=isConfigured) _Bool configured; // @synthesize configured=_configured;
@property(nonatomic) struct UIEdgeInsets insetMargins; // @synthesize insetMargins=_insetMargins;
@property(nonatomic) __weak id <NCNotificationListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NCNotificationViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (_Bool)_shouldPerformClipping;
- (void)_resetClipping;
- (void)_setupClipping;
- (void)_configureClippingIfNecessary;
- (void)_performSideSwipeHintingHideAnimation;
- (void)_performSideSwipeHintingRevealAnimation;
- (void)_performSideSwipeHinting;
- (void)_updateRevealForActionButtonsClippingRevealView:(id)arg1 actionButtonsView:(id)arg2 forRevealPercentage:(double)arg3 actionButtonsViewNeedsClipping:(_Bool)arg4;
- (void)_updateRevealForRightActionButtonsClippingRevealViewForRevealPercentage:(double)arg1;
- (void)_updateRevealForLeftActionButtonsClippingRevealViewForRevealPercentage:(double)arg1;
- (double)_alphaForActionButtonsView:(id)arg1 revealPercentage:(double)arg2;
- (void)_executeClearAction;
- (void)_executeDefaultAction;
- (void)_layoutContentView;
- (void)_resetActionButtonViews;
- (void)_configureActionButtonsView:(id)arg1;
- (id)_cellActionButtonsView;
- (id)_openActionButtonsView;
- (void)_configureActionButtonViewsIfNecessary;
- (void)_configureClippingRevealView:(id)arg1;
- (void)_configureClippingRevealViewsIfNecessary;
- (void)_performDefaultActionForRight;
- (void)_performDefaultActionForLeft;
- (void)_resetRevealOverrides;
- (void)notificationViewControllerDidEndUserInteraction:(id)arg1;
- (void)notificationViewControllerWillBeginUserInteraction:(id)arg1;
- (void)_updateTargetPosition:(double)arg1;
- (void)_setupContentOffsetFloatAnimatableProperty;
- (double)_actionButtonTriggerDistanceForView:(id)arg1;
- (id)_notificationCellView;
- (void)_resetNotificationCellPositionAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setNotificationCellPosition:(double)arg1 withVelocity:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateNotificationCellPosition:(double)arg1;
- (void)_updateActionButtonRevealPercentageForTargetPosition:(double)arg1;
- (double)_updateActionRevealStateForTargetPosition:(double)arg1 currentPosition:(double)arg2 velocity:(double)arg3;
- (void)_handlePanGesture:(id)arg1;
- (void)_removePanGestureRecognizer;
- (void)_setupPanGestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hintSideSwipeForDefaultAction;
- (void)applyLayoutAttributes:(id)arg1;
- (_Bool)_disableRasterizeInAnimations;
- (void)resetCellScrollPositionAnimated:(_Bool)arg1;
- (void)prepareForReuse;
- (void)cellOpenButtonPressed:(id)arg1;
- (void)cellClearButtonPressed:(id)arg1;
- (void)cellViewButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)updateCellForContentViewController:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

