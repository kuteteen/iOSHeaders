//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class UIImageView, UILabel;

@interface AMPOnboardingHeaderView : UIScrollView
{
    _Bool _isPresentedInFormSheet;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    double _containerHeight;
}

@property(nonatomic) _Bool isPresentedInFormSheet; // @synthesize isPresentedInFormSheet=_isPresentedInFormSheet;
@property(nonatomic) double containerHeight; // @synthesize containerHeight=_containerHeight;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)updateContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)adjustedContentInsetDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

