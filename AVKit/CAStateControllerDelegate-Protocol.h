//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CALayer, CAStateController, CAStateTransition;

@protocol CAStateControllerDelegate

@optional
- (void)stateController:(CAStateController *)arg1 transitionDidStop:(CAStateTransition *)arg2 completed:(_Bool)arg3;
- (void)stateController:(CAStateController *)arg1 transitionDidStart:(CAStateTransition *)arg2 speed:(float)arg3;
- (void)stateController:(CAStateController *)arg1 didSetStateOfLayer:(CALayer *)arg2;
@end

