//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIAnimatablePropertyState, _UIViewAnimatablePropertyTransformer;
@protocol OS_dispatch_queue;

@interface UIViewFloatAnimatableProperty : NSObject
{
    NSObject<OS_dispatch_queue> *_animatablePropertyStateLockingQueue;
    NSObject<OS_dispatch_queue> *_presentationValueLockingQueue;
    NSObject<OS_dispatch_queue> *_invalidationLockingQueue;
    double _presentationValue;
    _Bool _invalidated;
    UIAnimatablePropertyState *_animatablePropertyState;
    _Bool _performingInterpolationBetweenTwoStates;
    double _value;
    _UIViewAnimatablePropertyTransformer *_transformer;
}

@property(nonatomic) _Bool performingInterpolationBetweenTwoStates; // @synthesize performingInterpolationBetweenTwoStates=_performingInterpolationBetweenTwoStates;
@property(retain, nonatomic) _UIViewAnimatablePropertyTransformer *transformer; // @synthesize transformer=_transformer;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) UIAnimatablePropertyState *animatablePropertyState;
@property(nonatomic) double presentationValue;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (void)invalidateAndStopImmediately:(_Bool)arg1;
- (void)invalidate;
@property(nonatomic) double velocity;
- (_Bool)_performAnimation;
- (id)init;

@end

