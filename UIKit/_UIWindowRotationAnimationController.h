//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIWindowAnimationController.h>

__attribute__((visibility("hidden")))
@interface _UIWindowRotationAnimationController : _UIWindowAnimationController
{
    _Bool _skipCallbacks;
    _Bool _updateStatusBarIfNecessary;
    CDUnknownBlockType _animations;
    double _duration;
}

@property(nonatomic) _Bool updateStatusBarIfNecessary; // @synthesize updateStatusBarIfNecessary=_updateStatusBarIfNecessary;
@property(nonatomic) _Bool skipCallbacks; // @synthesize skipCallbacks=_skipCallbacks;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)dealloc;

@end

