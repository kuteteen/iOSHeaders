//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont, UILabel;

@interface TKLabelContainerView : UIView
{
    UILabel *_label;
    double _labelDefaultLastBaselineOffsetFromBottom;
    struct UIEdgeInsets _labelPaddingInsets;
}

@property(nonatomic) double labelDefaultLastBaselineOffsetFromBottom; // @synthesize labelDefaultLastBaselineOffsetFromBottom=_labelDefaultLastBaselineOffsetFromBottom;
@property(nonatomic) struct UIEdgeInsets labelPaddingInsets; // @synthesize labelPaddingInsets=_labelPaddingInsets;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) struct UIOffset labelShadowOffset;
@property(retain, nonatomic) UIColor *labelShadowColor;
@property(retain, nonatomic) UIColor *labelTextColor;
@property(retain, nonatomic) UIFont *labelFont;
@property(copy, nonatomic) NSString *labelText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

