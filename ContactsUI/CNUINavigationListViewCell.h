//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface CNUINavigationListViewCell : UITableViewCell
{
    _Bool _accessoryControlExpanded;
    _Bool _contentViewConstraintsLoaded;
    UIImageView *_accessoryImageView;
    UILabel *_subtitleLabel;
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
    NSLayoutConstraint *_contentViewBottomAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelLeadingAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelTrailingAnchorConstraint;
    NSLayoutConstraint *_titleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_titleLabelLeadingAnchorConstraint;
    NSLayoutConstraint *_titleLabelTrailingAnchorConstraint;
    UILayoutGuide *_accessoryImageViewLayoutGuide;
    UILayoutGuide *_titleImageViewLayoutGuide;
}

+ (id)expandedAccessoryImageViewAccessibilityLabel;
+ (id)accessoryImageViewAccessibilityLabel;
+ (id)highlightedDisclosureImage;
+ (id)disclosureImage;
+ (id)templateDisclosureImage;
+ (id)expandedBackgroundColor;
+ (double)titleLabelFirstBaselineAnchorConstraintConstant;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
+ (double)contentViewBottomAnchorConstraintConstant;
+ (id)reuseIdentifier;
+ (double)desiredContentWidthForTitle:(id)arg1 subTitle:(id)arg2;
+ (double)minimumContentHeight;
+ (id)titleFont;
+ (id)subtitleFont;
+ (id)subtitleColor;
+ (id)highlightedBackgroundColor;
+ (id)backgroundColor;
@property(readonly, nonatomic) UILayoutGuide *titleImageViewLayoutGuide; // @synthesize titleImageViewLayoutGuide=_titleImageViewLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *accessoryImageViewLayoutGuide; // @synthesize accessoryImageViewLayoutGuide=_accessoryImageViewLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorConstraint; // @synthesize titleLabelTrailingAnchorConstraint=_titleLabelTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorConstraint; // @synthesize titleLabelLeadingAnchorConstraint=_titleLabelLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelFirstBaselineAnchorConstraint; // @synthesize titleLabelFirstBaselineAnchorConstraint=_titleLabelFirstBaselineAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelTrailingAnchorConstraint; // @synthesize subtitleLabelTrailingAnchorConstraint=_subtitleLabelTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelLeadingAnchorConstraint; // @synthesize subtitleLabelLeadingAnchorConstraint=_subtitleLabelLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelFirstBaselineAnchorConstraint; // @synthesize subtitleLabelFirstBaselineAnchorConstraint=_subtitleLabelFirstBaselineAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint; // @synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint;
@property(nonatomic, getter=isContentViewConstraintsLoaded) _Bool contentViewConstraintsLoaded; // @synthesize contentViewConstraintsLoaded=_contentViewConstraintsLoaded;
@property(nonatomic, getter=isAccessoryControlExpanded) _Bool accessoryControlExpanded; // @synthesize accessoryControlExpanded=_accessoryControlExpanded;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
- (void).cxx_destruct;
- (void)updateVisualStateAnimated:(_Bool)arg1;
- (void)updateFonts;
- (void)updateConstraintsConstants;
- (void)updateConstraints;
- (void)loadContentViewConstraints;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setAccessoryControlExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setupAccessoryImageViewInView:(id)arg1;
- (void)loadContentView;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

