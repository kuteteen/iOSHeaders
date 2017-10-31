//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NUCrossFadeViewAnimator, NUTextAndGlyphView, NUTitleViewUpdate, UIImageView, UILabel;

@interface NUCrossFadeTitleView : UIView
{
    id <NUTitleViewStyler> _styler;
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
    NUTextAndGlyphView *_textAndGlyphView;
    unsigned long long _displayValueType;
    NUCrossFadeViewAnimator *_animator;
    NUTitleViewUpdate *_update;
}

@property(retain, nonatomic) NUTitleViewUpdate *update; // @synthesize update=_update;
@property(readonly, nonatomic) NUCrossFadeViewAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) unsigned long long displayValueType; // @synthesize displayValueType=_displayValueType;
@property(readonly, nonatomic) NUTextAndGlyphView *textAndGlyphView; // @synthesize textAndGlyphView=_textAndGlyphView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) id <NUTitleViewStyler> styler; // @synthesize styler=_styler;
- (void).cxx_destruct;
- (id)_applyStylesToTextAndGlyph:(id)arg1 styleType:(unsigned long long)arg2;
- (id)_applyStylesToText:(id)arg1 styleType:(unsigned long long)arg2;
- (id)applyStylesToValueFromTitleViewUpdate:(id)arg1;
- (id)viewForValueType:(unsigned long long)arg1;
- (void)relayoutWithAnimation:(_Bool)arg1;
@property(readonly, nonatomic) struct CGRect visibleFrame;
- (void)updateTitleViewWithUpdate:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyler:(id)arg1;

@end

