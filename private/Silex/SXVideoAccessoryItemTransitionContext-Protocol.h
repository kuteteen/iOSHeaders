//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol SXVideoAccessoryItemTransitionContext <NSObject>
@property(readonly, nonatomic) _Bool transitionWasCancelled;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic) UIView *toView;
@property(readonly, nonatomic) UIView *fromView;
- (void)completeTransition:(_Bool)arg1;
@end

