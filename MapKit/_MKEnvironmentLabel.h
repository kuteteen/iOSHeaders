//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _MKEnvironmentLabel : UIView
{
    UILabel *_label;
    CAShapeLayer *_roundedCorner;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

