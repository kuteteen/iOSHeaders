//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"
#import "CAMBadgeViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CAMAnimationGenerator, CAMLightingDialBackground, CAMLightingFrameCache, CAMLightingNameBadge, NSArray, NSDate, NSDictionary, NSString, NSTimer, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISelectionFeedbackGenerator, UITapGestureRecognizer;

@interface CAMLightingControl : UIView <UIGestureRecognizerDelegate, CAMBadgeViewDelegate, CAAnimationDelegate>
{
    struct {
        _Bool respondsToWillChangeExpanded;
        _Bool respondsToDidChangeExpanded;
    } _delegateFlags;
    _Bool _tracking;
    _Bool _expanded;
    _Bool _highlighted;
    _Bool _showAllItemsWhenCollapsed;
    _Bool _nameBadgeHidden;
    id <CAMLightingControlDelegate> _delegate;
    long long _selectedLightingType;
    long long _orientation;
    NSArray *__effectTypes;
    NSDictionary *__effectItemsForType;
    double __selectionAngularOffset;
    unsigned long long __selectionIndex;
    CAMLightingFrameCache *__frameCache;
    NSDictionary *__itemViewsForType;
    NSDictionary *__itemShadowViewsForType;
    NSDictionary *__itemOutlineViewsForType;
    CAMLightingDialBackground *__backgroundView;
    UIImageView *__selectionOverlay;
    UIImageView *__selectionUnderlay;
    CAMLightingNameBadge *__nameBadge;
    UIPanGestureRecognizer *__panGesture;
    UILongPressGestureRecognizer *__pressGesture;
    UITapGestureRecognizer *__tapGesture;
    NSDate *__timeTrackingBegan;
    CAMAnimationGenerator *__animationGenerator;
    NSTimer *__collapseTimer;
    unsigned long long __expandedAnimationCounter;
    UISelectionFeedbackGenerator *__selectionFeedbackGenerator;
}

@property(readonly, nonatomic) UISelectionFeedbackGenerator *_selectionFeedbackGenerator; // @synthesize _selectionFeedbackGenerator=__selectionFeedbackGenerator;
@property(nonatomic, setter=_setExpandedAnimationCounter:) unsigned long long _expandedAnimationCounter; // @synthesize _expandedAnimationCounter=__expandedAnimationCounter;
@property(retain, nonatomic, setter=_setCollapseTimer:) NSTimer *_collapseTimer; // @synthesize _collapseTimer=__collapseTimer;
@property(readonly, nonatomic) CAMAnimationGenerator *_animationGenerator; // @synthesize _animationGenerator=__animationGenerator;
@property(retain, nonatomic, setter=_setTimeTrackingBegan:) NSDate *_timeTrackingBegan; // @synthesize _timeTrackingBegan=__timeTrackingBegan;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGesture; // @synthesize _tapGesture=__tapGesture;
@property(readonly, nonatomic) UILongPressGestureRecognizer *_pressGesture; // @synthesize _pressGesture=__pressGesture;
@property(readonly, nonatomic) UIPanGestureRecognizer *_panGesture; // @synthesize _panGesture=__panGesture;
@property(retain, nonatomic, setter=_setNameBadge:) CAMLightingNameBadge *_nameBadge; // @synthesize _nameBadge=__nameBadge;
@property(retain, nonatomic, setter=_setSelectionUnderlay:) UIImageView *_selectionUnderlay; // @synthesize _selectionUnderlay=__selectionUnderlay;
@property(retain, nonatomic, setter=_setSelectionOverlay:) UIImageView *_selectionOverlay; // @synthesize _selectionOverlay=__selectionOverlay;
@property(retain, nonatomic, setter=_setBackgroundView:) CAMLightingDialBackground *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(retain, nonatomic, setter=_setItemOutlineViewsForType:) NSDictionary *_itemOutlineViewsForType; // @synthesize _itemOutlineViewsForType=__itemOutlineViewsForType;
@property(retain, nonatomic, setter=_setItemShadowViewsForType:) NSDictionary *_itemShadowViewsForType; // @synthesize _itemShadowViewsForType=__itemShadowViewsForType;
@property(retain, nonatomic, setter=_setItemViewsForType:) NSDictionary *_itemViewsForType; // @synthesize _itemViewsForType=__itemViewsForType;
@property(readonly, nonatomic) CAMLightingFrameCache *_frameCache; // @synthesize _frameCache=__frameCache;
@property(readonly, nonatomic) unsigned long long _selectionIndex; // @synthesize _selectionIndex=__selectionIndex;
@property(nonatomic, setter=_setSelectionAngularOffset:) double _selectionAngularOffset; // @synthesize _selectionAngularOffset=__selectionAngularOffset;
@property(retain, nonatomic, setter=_setEffectItemsForType:) NSDictionary *_effectItemsForType; // @synthesize _effectItemsForType=__effectItemsForType;
@property(retain, nonatomic, setter=_setEffectTypes:) NSArray *_effectTypes; // @synthesize _effectTypes=__effectTypes;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isNameBadgeHidden) _Bool nameBadgeHidden; // @synthesize nameBadgeHidden=_nameBadgeHidden;
@property(nonatomic) _Bool showAllItemsWhenCollapsed; // @synthesize showAllItemsWhenCollapsed=_showAllItemsWhenCollapsed;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isTracking, setter=_setTracking:) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic) long long selectedLightingType; // @synthesize selectedLightingType=_selectedLightingType;
@property(nonatomic) __weak id <CAMLightingControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateToContentSize:(id)arg1;
- (void)_performFeedback;
- (void)_prepareFeedback;
- (void)_createNameBadgeIfNeeded;
- (void)_createSelectionViewsIfNeeded;
- (void)_createBackgroundViewIfNeeded;
- (void)_createItemViewsIfNeeded;
- (unsigned long long)_itemCount;
- (void)_loadItemsIfNeeded;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (void)_updateNameBadgeAnimated:(_Bool)arg1;
- (void)setNameBadgeHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateItemViewsWithSelectionOffsetAngle:(double)arg1;
- (void)setShowAllItemsWhenCollapsed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_handleSettlingSelectionViewsFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3;
- (void)_settleSelectionViewsFromSelectionOffsetAngle:(double)arg1;
- (void)_updateSelectionViewsWithSelectionOffsetAngle:(double)arg1;
- (void)_updateSelectionOverlayColorAnimated:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)preloadEffectChangeAnimation;
- (void)_handleTapRotationFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3;
- (void)_rotateForTapFromSelectionIndex:(unsigned long long)arg1 offset:(double)arg2 toSelectionIndex:(unsigned long long)arg3;
- (void)_handleSnapFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3;
- (void)_snapFromSelectionOffsetAngle:(double)arg1 toAngle:(double)arg2 animated:(_Bool)arg3;
- (void)_setSelectedLightingType:(long long)arg1 atIndex:(unsigned long long)arg2 shouldNotify:(_Bool)arg3 shouldSuppressHaptic:(_Bool)arg4;
- (void)ppt_selectLightingType:(long long)arg1;
@property(readonly, nonatomic) long long defaultLightingType;
- (void)_cancelDelayedCollapse;
- (void)_handleCollapseTimer:(id)arg1;
- (void)_collapseWithDelay:(double)arg1;
- (void)_setExpanded:(_Bool)arg1 animated:(_Bool)arg2 shouldNotify:(_Bool)arg3;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleTapGesture:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (double)_offsetAngleForRubberBandOffsetAngle:(double)arg1 selectionIndex:(unsigned long long)arg2;
- (double)_rubberBandOffsetAngleForOffsetAngle:(double)arg1;
- (_Bool)_isOverDialedWithSelectionAngularOffset:(double)arg1 selectionIndex:(unsigned long long)arg2;
- (double)_rotationForPanGesture:(id)arg1;
- (double)_compressedItemOffsetForFractionalItemOffset:(double)arg1;
- (double)_offsetXForItemAtIndex:(unsigned long long)arg1;
- (double)_offsetAngleForItemAtIndex:(unsigned long long)arg1 withSelectionOffset:(double)arg2;
- (double)_angleFromCenterToPoint:(struct CGPoint)arg1;
- (double)_dialCenterDistanceBelowBoundsForWidth:(double)arg1;
- (struct CGPoint)_dialCenterForWidth:(double)arg1;
- (struct CGPoint)_dialCenter;
- (double)_dialBadgePaddingExpanded:(_Bool)arg1;
- (double)_spacingForLinearLayout;
- (double)_angularSpacingForRadialLayout;
- (double)_dialRadiusForWidth:(double)arg1;
- (double)_dialRadius;
- (double)_dialVisibleHeightExpanded:(_Bool)arg1;
- (struct CGPoint)_selectionPointForExpanded:(_Bool)arg1;
- (void)_layoutNameBadgeExpanded:(_Bool)arg1;
- (void)_layoutSelectionViewsExpanded:(_Bool)arg1;
- (void)_layoutBackgroundExpanded:(_Bool)arg1;
- (void)_layoutItemViewsLinear;
- (void)_layoutItemViewsRadialWithSelectionOffsetAngle:(double)arg1;
- (double)_safeWidthForWidth:(double)arg1;
- (double)contentHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

