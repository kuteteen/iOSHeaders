//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupPINScrollView : UIScrollView
{
    UIView *_contentView;
    double _visibleHeight;
}

@property(nonatomic) double visibleHeight; // @synthesize visibleHeight=_visibleHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (_Bool)_scrollsToMakeFirstResponderVisible;
- (void)layoutSubviews;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)dealloc;
- (id)initWithContentView:(id)arg1;

@end

