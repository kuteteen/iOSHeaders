//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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

