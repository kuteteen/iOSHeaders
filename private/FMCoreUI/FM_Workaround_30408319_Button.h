//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSLayoutConstraint;

@interface FM_Workaround_30408319_Button : UIButton
{
    NSLayoutConstraint *_fm_workaround_height_constraint;
}

@property(retain, nonatomic) NSLayoutConstraint *fm_workaround_height_constraint; // @synthesize fm_workaround_height_constraint=_fm_workaround_height_constraint;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg1;

@end

