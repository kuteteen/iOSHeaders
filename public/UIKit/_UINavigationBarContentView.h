//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIBarContentView.h>

#import <UIKit/_UIBarButtonItemViewOwner-Protocol.h>
#import <UIKit/_UINavigationBarTitleViewDataSource-Protocol.h>
#import <UIKit/_UINavigationBarTransitionContextParticipant-Protocol.h>

@class NSArray, NSDictionary, NSString, UIBarButtonItem, UIColor, UIImage, UIView, _UINavigationBarContentViewLayout, _UINavigationBarTransitionContext;
@protocol _UINavigationBarContentViewDelegate;

__attribute__((visibility("hidden")))
@interface _UINavigationBarContentView : _UIBarContentView <_UIBarButtonItemViewOwner, _UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant>
{
    _UINavigationBarContentViewLayout *_layout;
    _UINavigationBarTransitionContext *_transitionContext;
    _Bool _deferResolvedSizeChange;
    _Bool _outstandingDeferredResolvedSizeChange;
    UIImage *_backIndicatorImage;
    _Bool _needsBackButtonUpdate;
    double _backButtonMargin;
    double _backButtonMaximumWidth;
    _Bool _backButtonHidden;
    _Bool _leadingItemsSupplementBackItem;
    long long _barMetrics;
    id <_UINavigationBarContentViewDelegate> _delegate;
    UIBarButtonItem *_backButtonItem;
    NSArray *_leadingBarButtonItems;
    NSArray *_trailingBarButtonItems;
    NSString *_title;
    UIView *_titleView;
    double _titleViewAlpha;
    NSDictionary *_titleAttributes;
    double _titleVerticalPositionAdjustment;
    UIColor *_textColor;
    double _overrideSize;
    long long _requestedContentSize;
}

@property(nonatomic) long long requestedContentSize; // @synthesize requestedContentSize=_requestedContentSize;
@property(nonatomic) double overrideSize; // @synthesize overrideSize=_overrideSize;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double titleVerticalPositionAdjustment; // @synthesize titleVerticalPositionAdjustment=_titleVerticalPositionAdjustment;
@property(copy, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(nonatomic) double titleViewAlpha; // @synthesize titleViewAlpha=_titleViewAlpha;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *trailingBarButtonItems; // @synthesize trailingBarButtonItems=_trailingBarButtonItems;
@property(nonatomic) _Bool leadingItemsSupplementBackItem; // @synthesize leadingItemsSupplementBackItem=_leadingItemsSupplementBackItem;
@property(copy, nonatomic) NSArray *leadingBarButtonItems; // @synthesize leadingBarButtonItems=_leadingBarButtonItems;
@property(nonatomic) _Bool backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
@property(retain, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property(nonatomic) __weak id <_UINavigationBarContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint)arg1;
- (id)_accessibility_barButtonItemAtPoint:(struct CGPoint)arg1;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)titleViewChangedMaximumBackButtonWidth:(id)arg1;
- (void)titleViewChangedPreferredDisplaySize:(id)arg1;
- (void)titleViewChangedStandardDisplayItems:(id)arg1;
- (void)titleViewChangedHeight:(id)arg1;
- (void)titleViewChangedUnderlayContent:(id)arg1;
- (void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2;
- (struct CGRect)_overlayRectForView:(id)arg1 inTargetView:(id)arg2;
- (void)_appearanceChanged;
@property(nonatomic, setter=_setBackButtonMaximumWidth:) double backButtonMaximumWidth;
@property(nonatomic) double backButtonMargin;
- (void)setBackIndicatorImage:(id)arg1;
- (id)backIndicatorImage;
- (_Bool)isRTL;
- (long long)barType;
- (double)defaultEdgeSpacing;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (void)tintColorDidChange;
- (void)adoptFinalStateFromTransition:(id)arg1 transitionCompleted:(_Bool)arg2;
- (void)recordToStateForTransition:(id)arg1;
- (void)recordFromStateForTransition:(id)arg1;
- (void)updateContent;
- (void)updateContentAnimated:(_Bool)arg1;
@property(readonly, nonatomic) UIView *accessibilityBackButtonView;
@property(readonly, nonatomic) UIView *accessibilityTitleView;
- (void)_updateLayoutMarginsForLayout:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)layoutMarginsDidChange;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)resolvedSizeDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)_intrinsicHeight;
- (void)_setupTitleView;
- (void)_applyTitleAttributesToLabel:(id)arg1 withString:(id)arg2;
- (id)defaultFontDescriptor;
- (id)_defaultInlineTitleAttributes;
- (void)_setupTrailingButtonBarAnimated:(_Bool)arg1;
- (void)_setupLeadingButtonBarAnimated:(_Bool)arg1;
- (void)setNeedsBackButtonUpdate;
- (void)_setupBackButtonAnimated:(_Bool)arg1;
- (void)__backButtonAction:(id)arg1;
@property(readonly, nonatomic) double currentHeight;
@property(nonatomic) long long barMetrics; // @synthesize barMetrics=_barMetrics;
@property(readonly, nonatomic) long long currentContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_newLayout;
- (long long)_currentContentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

