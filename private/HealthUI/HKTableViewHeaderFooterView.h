//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface HKTableViewHeaderFooterView : UIView
{
    UILabel *_label;
    double _preferredMaxLayoutWidth;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)updateFont;
- (void)layoutSubviews;
- (id)init;

@end

