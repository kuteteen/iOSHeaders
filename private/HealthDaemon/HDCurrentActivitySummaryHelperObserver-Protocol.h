//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDCurrentActivitySummaryHelper, HKActivitySummary;

@protocol HDCurrentActivitySummaryHelperObserver <NSObject>
- (void)currentActivitySummaryHelper:(HDCurrentActivitySummaryHelper *)arg1 didUpdateYesterdayActivitySummary:(HKActivitySummary *)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(HDCurrentActivitySummaryHelper *)arg1 didUpdateTodayActivitySummary:(HKActivitySummary *)arg2 changedFields:(unsigned long long)arg3;
@end

