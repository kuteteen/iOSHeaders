//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDPedometerDataCollector.h>

@interface HDDistanceDataCollector : HDPedometerDataCollector
{
}

+ (double)defaultCollectionInterval;
+ (id)domain;
+ (id)observedType;
- (id)quantitySamplesFromPedometerData:(id)arg1 toPedometerData:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 containsWorkoutSamples:(_Bool)arg5;

@end
