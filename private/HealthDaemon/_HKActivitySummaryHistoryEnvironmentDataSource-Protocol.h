//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDateInterval, _HKAchievementPredicateMonthlyAggregatesEnvironment;

@protocol _HKActivitySummaryHistoryEnvironmentDataSource <NSObject>
- (_HKAchievementPredicateMonthlyAggregatesEnvironment *)aggregateEnvironmentForMonthOffsetFromNow:(long long)arg1;
- (NSArray *)dayEnvironmentsInDateInterval:(NSDateInterval *)arg1;
@end

