//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BSStopWatch : NSObject
{
    double _startTimestamp;
}

- (double)_timeIntervalSinceInternalClockReference;
@property(readonly, nonatomic) double elapsedTime;
- (void)reset;
- (id)_initWithStartTime:(double)arg1;
- (id)initWithDistantPast;
- (id)init;

@end

