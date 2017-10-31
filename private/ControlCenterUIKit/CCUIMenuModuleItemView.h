//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImage, UIImageView, UILabel, UIView;

@interface CCUIMenuModuleItemView : UIControl
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImage *_glyphImage;
    UIView *_separatorView;
    UIImageView *_glyphImageView;
    UIView *_highlightedBackgroundView;
    _Bool _separatorVisible;
    _Bool _useTallLayout;
    CDUnknownBlockType _handler;
    double _preferredMaxLayoutWidth;
}

@property(nonatomic) _Bool useTallLayout; // @synthesize useTallLayout=_useTallLayout;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) _Bool separatorVisible; // @synthesize separatorVisible=_separatorVisible;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)_updateForStateChange;
- (struct NSDirectionalEdgeInsets)_labelInsets;
- (double)_glyphMargin;
- (double)_titleBaselineToBottom;
- (double)_titleBaselineToTop;
- (_Bool)_shouldCenterText;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 glyphImage:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 glyphImage:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

