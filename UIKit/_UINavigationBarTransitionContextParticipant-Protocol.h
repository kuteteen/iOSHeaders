//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class _UINavigationBarTransitionContext;

@protocol _UINavigationBarTransitionContextParticipant <NSObject>
- (void)adoptFinalStateFromTransition:(_UINavigationBarTransitionContext *)arg1 transitionCompleted:(_Bool)arg2;
- (void)recordToStateForTransition:(_UINavigationBarTransitionContext *)arg1;
- (void)recordFromStateForTransition:(_UINavigationBarTransitionContext *)arg1;
@end

