//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMWorkoutManagerInternal;
@protocol CMWorkoutManagerDelegate;

@interface CMWorkoutManager : NSObject
{
    CMWorkoutManagerInternal *_internal;
}

+ (_Bool)isAvailable;
@property(readonly, nonatomic) CMWorkoutManagerInternal *_internal; // @synthesize _internal;
- (unsigned long long)supportedMetricsForWorkoutType:(long long)arg1;
- (void)stopWorkout:(id)arg1;
- (void)startWorkout:(id)arg1;
@property(nonatomic) id <CMWorkoutManagerDelegate> delegate;
- (void)dealloc;
- (id)init;

@end

