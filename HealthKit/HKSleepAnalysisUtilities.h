//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKSleepAnalysisUtilities : NSObject
{
}

+ (id)sleepAnalysisIntervalForStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3;
+ (id)sleepAnalysisForSleepDays:(id)arg1 dateInterval:(id)arg2;
+ (id)sleepDaysFromQueryResult:(id)arg1 calendar:(id)arg2;
+ (id)sleepPeriodsFromQueryResult:(id)arg1 calendar:(id)arg2;
+ (void)categorizeSleepPeriods:(id)arg1 dateInterval:(id)arg2 calendar:(id)arg3;
+ (id)sortedSleepPeriodSegmentsFromSleepSamples:(id)arg1;
+ (void)updateSleepPeriodsWithConsistencyAndBedtimeConformance:(id)arg1 dateInterval:(id)arg2 calendar:(id)arg3;
+ (id)dateIntervalBoundingSleepPeriods:(id)arg1;
+ (_Bool)findBedtimeAlarmAndUpdateSleepPeriods:(id)arg1 calendar:(id)arg2;
+ (void)enumerateSleepPeriodsForAnalysis:(id)arg1 calendar:(id)arg2 dateInterval:(id)arg3 dateComponents:(id)arg4 analysisBlock:(CDUnknownBlockType)arg5;
+ (void)updateSleepPeriodsWithConsistency:(id)arg1 calendar:(id)arg2;
+ (id)sleepPeriodSegmentsFromSleepSamples:(id)arg1 minimumInterSegmentTimeInterval:(double)arg2 categoryValue:(long long)arg3;
+ (id)filterSleepDays:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)filterSleepPeriods:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)filterSleepSamples:(id)arg1 categoryValue:(long long)arg2;
+ (id)sleepAnalysisDateIntervalWithCalendar:(id)arg1 visibleRangeStartDate:(id)arg2 visibleRangeEndDate:(id)arg3;

@end
