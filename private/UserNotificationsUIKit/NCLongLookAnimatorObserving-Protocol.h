//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCLongLookAnimator;

@protocol NCLongLookAnimatorObserving <NSObject>

@optional
- (void)longLookAnimatorDidFinishFirstResponderChanges:(NCLongLookAnimator *)arg1;
- (void)longLookAnimator:(NCLongLookAnimator *)arg1 willBeginDismissalAnimationWithTransitionContext:(id <UIViewControllerContextTransitioning>)arg2;
- (void)longLookAnimator:(NCLongLookAnimator *)arg1 willBeginPresentationAnimationWithTransitionContext:(id <UIViewControllerContextTransitioning>)arg2;
@end

