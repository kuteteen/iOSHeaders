//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface UICheckeredPatternView : UIView
{
    UIColor *_patternColor;
    double _scale;
    UIColor *_checkerColor;
}

@property(retain, nonatomic) UIColor *checkerColor; // @synthesize checkerColor=_checkerColor;
- (void).cxx_destruct;
- (void)updatePatternColor;
- (void)didMoveToWindow;
- (_Bool)_canDrawContent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

