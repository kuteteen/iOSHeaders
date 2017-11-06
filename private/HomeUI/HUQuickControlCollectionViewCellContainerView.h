//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NAUILayoutConstraintSet, NSString, UILabel, UILayoutGuide;

@interface HUQuickControlCollectionViewCellContainerView : UIView
{
    UIView *_contentView;
    unsigned long long _titlePosition;
    UILayoutGuide *_preferredContentFrameLayoutGuide;
    UILabel *_titleLabel;
    NAUILayoutConstraintSet *_constraintSet;
    NAUILayoutConstraintSet *_preferredContentFrameConstraintSet;
    struct UIEdgeInsets _preferredContentLayoutFrameInset;
}

+ (double)preferredChromeHeightForTitlePosition:(unsigned long long)arg1;
+ (id)_titleFont;
+ (_Bool)requiresConstraintBasedLayout;
@property(readonly, nonatomic) NAUILayoutConstraintSet *preferredContentFrameConstraintSet; // @synthesize preferredContentFrameConstraintSet=_preferredContentFrameConstraintSet;
@property(readonly, nonatomic) NAUILayoutConstraintSet *constraintSet; // @synthesize constraintSet=_constraintSet;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILayoutGuide *preferredContentFrameLayoutGuide; // @synthesize preferredContentFrameLayoutGuide=_preferredContentFrameLayoutGuide;
@property(nonatomic) struct UIEdgeInsets preferredContentLayoutFrameInset; // @synthesize preferredContentLayoutFrameInset=_preferredContentLayoutFrameInset;
@property(nonatomic) unsigned long long titlePosition; // @synthesize titlePosition=_titlePosition;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_configureConstraintSets;
- (void)updateConstraints;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 titlePosition:(unsigned long long)arg2;

@end

