//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIColor, UIView;

@interface TPTableViewCell : UITableViewCell
{
    _Bool _accessiblityConstraintsEnabled;
    _Bool _constraintsLoaded;
    _Bool _foregroundViewLoaded;
    UIView *_foregroundView;
    NSLayoutConstraint *_foregroundViewLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_foregroundViewTrailingAnchorLayoutConstraint;
    NSLayoutConstraint *_foregroundViewTopAnchorLayoutConstraint;
    NSLayoutConstraint *_foregroundViewBottomAnchorLayoutConstraint;
}

+ (struct UIEdgeInsets)separatorInsetForContentSizeCategory:(id)arg1;
+ (_Bool)requiresConstraintBasedLayout;
@property(readonly, nonatomic) NSLayoutConstraint *foregroundViewBottomAnchorLayoutConstraint; // @synthesize foregroundViewBottomAnchorLayoutConstraint=_foregroundViewBottomAnchorLayoutConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *foregroundViewTopAnchorLayoutConstraint; // @synthesize foregroundViewTopAnchorLayoutConstraint=_foregroundViewTopAnchorLayoutConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *foregroundViewTrailingAnchorLayoutConstraint; // @synthesize foregroundViewTrailingAnchorLayoutConstraint=_foregroundViewTrailingAnchorLayoutConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *foregroundViewLeadingAnchorLayoutConstraint; // @synthesize foregroundViewLeadingAnchorLayoutConstraint=_foregroundViewLeadingAnchorLayoutConstraint;
@property(nonatomic, getter=isForegroundViewLoaded) _Bool foregroundViewLoaded; // @synthesize foregroundViewLoaded=_foregroundViewLoaded;
@property(nonatomic, getter=isConstraintsLoaded) _Bool constraintsLoaded; // @synthesize constraintsLoaded=_constraintsLoaded;
@property(nonatomic, getter=isAccessiblityConstraintsEnabled) _Bool accessiblityConstraintsEnabled; // @synthesize accessiblityConstraintsEnabled=_accessiblityConstraintsEnabled;
- (void).cxx_destruct;
- (void)setForegroundView:(id)arg1;
@property(readonly, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct UIEdgeInsets intrinsicSeparatorInset;
@property(retain, nonatomic) UIColor *foregroundColor;
- (void)updateFonts;
- (void)updateConstraintsConstants;
- (void)updateConstraints;
- (void)unloadConstraints;
- (void)loadConstraints;
- (void)loadContentView;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

