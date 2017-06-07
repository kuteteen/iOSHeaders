//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface PUProgressView : UIView
{
    UIActivityIndicatorView *_spinner;
    long long _style;
}

@property(readonly) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)hideAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2 afterDelay:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;

@end

