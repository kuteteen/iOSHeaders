//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class OFUIViewController;
@protocol OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning;

@protocol OFViewControllerTransitioningDelegate <NSObject>

@optional
- (id <OFViewControllerInteractiveTransitioning>)interactionControllerForDismissal:(id <OFViewControllerAnimatedTransitioning>)arg1;
- (id <OFViewControllerInteractiveTransitioning>)interactionControllerForPresentation:(id <OFViewControllerAnimatedTransitioning>)arg1;
- (id <OFViewControllerAnimatedTransitioning>)animationControllerForDismissedController:(OFUIViewController *)arg1;
- (id <OFViewControllerAnimatedTransitioning>)animationControllerForPresentedController:(OFUIViewController *)arg1 presentingController:(OFUIViewController *)arg2 sourceController:(OFUIViewController *)arg3;
@end
