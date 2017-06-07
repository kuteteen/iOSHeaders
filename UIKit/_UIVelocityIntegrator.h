//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIVelocityIntegrator : NSObject
{
    _Bool _hasMemoizedVelocity;
    NSMutableArray *_samples;
    double _hysteresisTimeInterval;
    double _resetHysteresisOnSampleThetaDiff;
    CDUnknownBlockType _didResetHysteresisOnThetaDiffHandler;
    struct CGVector _offset;
    struct CGVector _totalTranslation;
    struct CGVector _memoizedVelocity;
}

@property(copy, nonatomic) CDUnknownBlockType didResetHysteresisOnThetaDiffHandler; // @synthesize didResetHysteresisOnThetaDiffHandler=_didResetHysteresisOnThetaDiffHandler;
@property(nonatomic) double resetHysteresisOnSampleThetaDiff; // @synthesize resetHysteresisOnSampleThetaDiff=_resetHysteresisOnSampleThetaDiff;
@property(nonatomic) double hysteresisTimeInterval; // @synthesize hysteresisTimeInterval=_hysteresisTimeInterval;
@property(nonatomic) struct CGVector memoizedVelocity; // @synthesize memoizedVelocity=_memoizedVelocity;
@property(nonatomic) _Bool hasMemoizedVelocity; // @synthesize hasMemoizedVelocity=_hasMemoizedVelocity;
@property(nonatomic) struct CGVector totalTranslation; // @synthesize totalTranslation=_totalTranslation;
@property(retain, nonatomic) NSMutableArray *samples; // @synthesize samples=_samples;
@property(nonatomic) struct CGVector offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (struct CGVector)_computedVelocity;
@property(readonly, nonatomic) struct CGVector velocity;
- (void)reset;
- (_Bool)hasVelocity;
- (void)addSample:(struct CGPoint)arg1;
- (id)init;

@end

