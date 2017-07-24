//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class CABasicAnimation, CAMediaTimingFunction, NSString, UIView;

@protocol _UIBasicAnimationFactory <NSObject>
- (CABasicAnimation *)_basicAnimationForView:(UIView *)arg1 withKeyPath:(NSString *)arg2;

@optional
- (_Bool)_shouldAnimateAdditivelyForView:(UIView *)arg1 withKeyPath:(NSString *)arg2;
- (CAMediaTimingFunction *)_timingFunctionForAnimationInView:(UIView *)arg1 withKeyPath:(NSString *)arg2;
- (CAMediaTimingFunction *)_timingFunctionForAnimation;
@end
