//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIStatistics.h>

__attribute__((visibility("hidden")))
@interface _UIStatisticsDistribution : _UIStatistics
{
}

- (void)recordTimingForObject:(id)arg1;
- (void)cancelTimingForObject:(id)arg1;
- (void)startTimingForObject:(id)arg1;
- (_Bool)isTimingForObject:(id)arg1;
- (void)recordDistributionValue:(double)arg1;
- (void)resetDistributionToValue:(double)arg1;
- (void)resetDistribution;

@end

