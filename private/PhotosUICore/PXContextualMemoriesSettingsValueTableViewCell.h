//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIButton, UILabel, UIView;

@interface PXContextualMemoriesSettingsValueTableViewCell : UITableViewCell
{
    UILabel *_valueLabel;
    CDUnknownBlockType _resetHandler;
    UIButton *_resetButton;
    UIView *_containerView;
    NSLayoutConstraint *_topLayoutMarginConstraint;
    NSLayoutConstraint *_bottomLayoutMarginConstraint;
    NSLayoutConstraint *_leftLayoutMarginConstraint;
    NSLayoutConstraint *_rightLayoutMarginConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *rightLayoutMarginConstraint; // @synthesize rightLayoutMarginConstraint=_rightLayoutMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftLayoutMarginConstraint; // @synthesize leftLayoutMarginConstraint=_leftLayoutMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomLayoutMarginConstraint; // @synthesize bottomLayoutMarginConstraint=_bottomLayoutMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topLayoutMarginConstraint; // @synthesize topLayoutMarginConstraint=_topLayoutMarginConstraint;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(copy, nonatomic) CDUnknownBlockType resetHandler; // @synthesize resetHandler=_resetHandler;
- (void).cxx_destruct;
- (void)layoutMarginsDidChange;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
- (void)_didPressReset:(id)arg1;
- (void)_setUpConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
