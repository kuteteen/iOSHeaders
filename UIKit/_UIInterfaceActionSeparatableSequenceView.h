//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIInterfaceActionVisualStyle, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSeparatableSequenceView : UIView
{
    UIInterfaceActionVisualStyle *_visualStyle;
    long long _axis;
    long long _distribution;
    NSArray *_arrangedContentViews;
    unsigned long long _visualCornerPosition;
    UIStackView *_stackView;
    NSArray *_arrangedContentSeparatorViews;
    NSArray *_arrangedContentViewsDistributionConstraints;
}

@property(readonly, nonatomic) NSArray *arrangedContentViewsDistributionConstraints; // @synthesize arrangedContentViewsDistributionConstraints=_arrangedContentViewsDistributionConstraints;
@property(readonly, nonatomic) NSArray *arrangedContentSeparatorViews; // @synthesize arrangedContentSeparatorViews=_arrangedContentSeparatorViews;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(retain, nonatomic) NSArray *arrangedContentViews; // @synthesize arrangedContentViews=_arrangedContentViews;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
- (void).cxx_destruct;
- (_Bool)_isVerticalLayout;
- (void)_setRoundedCornersOfView:(id)arg1 toCornerPosition:(unsigned long long)arg2;
- (void)_markRoundedCornerPositionOnNoCornersOfView:(id)arg1;
- (void)_markRoundedCornerPositionOnAllCornersOfView:(id)arg1;
- (void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)arg1;
- (void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)arg1;
- (void)_updateRoundedCornerPositionForActionRepViews;
- (void)_updateSeparatorConstantSizedAxis;
- (long long)_separatorConstantSizedAxis;
- (void)_addSeparatorToStackAndMutableArray:(id)arg1 preferSectionStyle:(_Bool)arg2;
- (void)_reloadStackViewArrangement;
- (long long)_dimensionAttributeToConstrainEqual;
- (void)_reloadContentDistributionConstraintsForArrangedContentViews;
- (struct CGSize)_systemLayoutSizeFittingStackView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateConstraints;
- (void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(CDUnknownBlockType)arg1;
- (void)_setLayoutDebuggingIdentifier:(id)arg1;
- (struct CGRect)_stackViewFrameForViewBounds:(struct CGRect)arg1;
- (struct CGRect)_viewBoundsForStackViewFrame:(struct CGRect)arg1;
- (void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
- (void)reloadDisplayedContentVisualStyle;
- (double)fittingWidthForLayoutAxis:(long long)arg1;
- (void)_updateActionRepresentationViewsOnlyKeepVisibleContentInHierarchySetting;
- (id)initWithVisualStyle:(id)arg1;

@end

