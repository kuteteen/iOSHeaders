//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, NSString, UILabel;

@interface HKCenteredTitleTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_topLayoutConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSLayoutConstraint *_subtitleLabelBaselineConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSString *_titleText;
    NSString *_subtitleText;
}

+ (id)reuseIdentifier;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (double)_subtitleLabelBaselineToBottom;
- (id)_subtitleLabelFont;
- (double)_titleLabelBaselineToSubtitleBaseline;
- (double)_titleLabelTopToBaseline;
- (id)_titleLabelFont;
- (void)_setupUI;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

