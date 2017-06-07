//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKAnimatableObjectPropertyAnimation : NSObject
{
    CDUnknownBlockType _animationTimingFunction;
    double _currentAnimationTime;
    double _duration;
    CDUnknownBlockType _completionHandler;
}

+ (id)animationWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (CDUnknownBlockType)linearTimingFunction;
+ (CDUnknownBlockType)timingFunctionForMediaTimingFunction:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)callAndReleaseCompletionHandler;
- (id)valueByAddingCurrentValueToValue:(id)arg1;
- (_Bool)isFinishedAnimating;
- (void)_updateWithProgress:(float)arg1;
- (void)update:(double)arg1;
- (void)_setCurrentValue:(id)arg1;
- (void)_setEndValue:(id)arg1;
- (void)_setStartValue:(id)arg1;
- (id)_currentValue;
- (id)_endValue;
- (id)_startValue;

@end

