//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIDynamicAnimation.h>

__attribute__((visibility("hidden")))
@interface _UIDynamicValueConvergenceAnimation : _UIDynamicAnimation
{
    CDUnknownBlockType _applier;
    double _value;
    double _targetValue;
    double _convergenceRate;
    double _minimumDifference;
}

@property(nonatomic) double minimumDifference; // @synthesize minimumDifference=_minimumDifference;
@property(nonatomic) double convergenceRate; // @synthesize convergenceRate=_convergenceRate;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (_Bool)_animateForInterval:(double)arg1;
- (void)runWithValueApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithValue:(double)arg1 targetValue:(double)arg2 convergenceRate:(double)arg3 minimumDifference:(double)arg4;

@end

