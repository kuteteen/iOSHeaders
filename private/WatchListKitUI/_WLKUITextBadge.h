//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSString, UIColor, UIImage;

@interface _WLKUITextBadge : UIView
{
    int _textBlendMode;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    double _strokeSize;
    double _cornerRadius;
    UIImage *_backgroundImage;
    unsigned long long _badgeStyle;
    UIColor *_tintColor;
    double _fontSize;
    struct UIEdgeInsets _badgeInsets;
}

+ (id)attributedTextFromString:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) unsigned long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct UIEdgeInsets badgeInsets; // @synthesize badgeInsets=_badgeInsets;
@property(nonatomic) double strokeSize; // @synthesize strokeSize=_strokeSize;
@property(nonatomic) int textBlendMode; // @synthesize textBlendMode=_textBlendMode;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 tintColor:(id)arg2 fontSize:(double)arg3 cornerRadius:(double)arg4;
- (id)initWithAttributedString:(id)arg1 tintColor:(id)arg2 cornerRadius:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

