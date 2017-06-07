//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UIInputSwitcherTableCellBackgroundView, UILabel;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCellSegmentView : UIView
{
    UIImage *_invertedImage;
    UIImage *_originalImage;
    _Bool _selected;
    _Bool _usesDarkTheme;
    UILabel *_label;
    UIImageView *_imageView;
    UIInputSwitcherTableCellBackgroundView *_backgroundView;
}

+ (id)_fontForBiasLabel;
@property(readonly, nonatomic) UIInputSwitcherTableCellBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

