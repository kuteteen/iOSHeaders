//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewAnimationState.h>

__attribute__((visibility("hidden")))
@interface UIViewSpringAnimationState : UIViewAnimationState
{
    double _mass;
    double _stiffness;
    double _damping;
    double _velocity;
}

+ (id)defaultSpringAnimationForKey:(id)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 velocity:(double)arg5;
+ (void)computeDerivedSpringParameters:(double)arg1 zeta:(double)arg2 mass:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5 stiffness:(double *)arg6 damping:(double *)arg7 debugging:(id *)arg8;
+ (void)computeDerivedSpringParameters:(double)arg1 zeta:(double)arg2 mass:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5 stiffness:(double *)arg6 damping:(double *)arg7;
- (id)_defaultAnimationForKey:(id)arg1;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)generateSpringPropertiesForDuration:(double)arg1 damping:(double)arg2 velocity:(double)arg3;

@end

