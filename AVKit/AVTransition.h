//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerViewController, UIView, UIViewController, UIViewPropertyAnimator;
@protocol UIViewControllerContextTransitioning;

@interface AVTransition : NSObject
{
    _Bool _wasInitiallyInteractive;
    id <UIViewControllerContextTransitioning> _transitionContext;
    AVPlayerViewController *_playerViewController;
    UIView *_backgroundView;
    UIViewPropertyAnimator *_currentAnimator;
}

+ (struct CGAffineTransform)transformForPercentComplete:(double)arg1 fromScale:(double)arg2 toScale:(double)arg3 rotation:(double)arg4 translation:(struct CGPoint)arg5;
+ (id)transitionWithTransitionContext:(id)arg1 playerViewController:(id)arg2;
@property(nonatomic) _Bool wasInitiallyInteractive; // @synthesize wasInitiallyInteractive=_wasInitiallyInteractive;
@property(nonatomic) __weak UIViewPropertyAnimator *currentAnimator; // @synthesize currentAnimator=_currentAnimator;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(readonly, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
- (void).cxx_destruct;
- (void)animateAlongsideInteractiveTransitionAnimationForCancelling;
- (void)animateAlongsideInteractiveTransitionAnimationForFinishing;
- (void)animateAlongsideNonInteractiveTransitionAnimation;
- (void)updateWithPercentComplete:(double)arg1 translation:(struct CGPoint)arg2 rotation:(double)arg3;
- (void)transitionWillBegin;
- (struct CGRect)frameForPlayerViewControllerInContainerView;
- (void)animateNonInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
@property(readonly, nonatomic) struct CGRect finalFrameForToViewController;
@property(readonly, nonatomic) struct CGRect initialFrameForToViewController;
@property(readonly, nonatomic) struct CGRect finalFrameForFromViewController;
@property(readonly, nonatomic) struct CGRect initialFrameForFromViewController;
- (void)completeTransition:(_Bool)arg1;
- (void)pauseInteractiveTransition;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) UIViewController *fromViewController;
@property(readonly, nonatomic) UIViewController *toViewController;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic) UIView *fromView;
@property(readonly, nonatomic) UIView *toView;
@property(readonly, nonatomic) double duration;
- (void)dealloc;
- (id)initWithTransitionContext:(id)arg1 playerViewController:(id)arg2;

@end

