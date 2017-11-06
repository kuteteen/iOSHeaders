//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString, UIButton, UILabel, UITextView;

@interface HKTitledBuddyHeaderView : UIView
{
    UITextView *_bodyTextView;
    UIButton *_optionalLinkButton;
    NSLayoutConstraint *_logoTitleGapConstraint;
    NSLayoutConstraint *_bodyZeroHeightConstraint;
    NSLayoutConstraint *_bodyBottomConstraint;
    NSLayoutConstraint *_titleBottomConstraint;
    NSLayoutConstraint *_bodyFirstBaselineConstraint;
    NSLayoutConstraint *_bodyLastBaselineToLinkConstraint;
    NSLayoutConstraint *_linkButtonLastBaselineToBottomConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    id <HKTitledBuddyHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
}

@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HKTitledBuddyHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)deactivateDefaultTitleLabelBaselineConstraint;
- (void)_linkButtonTapped:(id)arg1;
- (id)bodyTextView;
@property(retain, nonatomic) NSString *bodyText;
@property(retain, nonatomic) NSString *titleText;
- (double)bottomPadding;
- (void)_updateForCurrentSizeCategory;
- (id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2;

@end

