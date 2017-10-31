//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface CAMInstructionLabel : UIView
{
    _Bool _useModeDialFontSize;
    NSString *_text;
    id <CAMInstructionLabelDelegate> _delegate;
    long long _style;
    UILabel *__label;
}

@property(readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property(nonatomic) _Bool useModeDialFontSize; // @synthesize useModeDialFontSize=_useModeDialFontSize;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <CAMInstructionLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
@property(readonly, nonatomic) double _backgroundAlpha;
@property(readonly, nonatomic) struct UIEdgeInsets _textInsets;
- (void)_updateLayer;
- (void)_updateLabel;
- (id)_textAttributes;
- (void)layoutSubviews;
- (void)updateToContentSize:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

