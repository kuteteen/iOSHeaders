//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/NSObject-Protocol.h>

@class CAAnimation;

@protocol CAAnimationDelegate <NSObject>

@optional
- (void)animationDidStop:(CAAnimation *)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(CAAnimation *)arg1;
@end

