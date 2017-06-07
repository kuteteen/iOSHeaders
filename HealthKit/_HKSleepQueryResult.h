//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>
#import <HealthKit/_HKDateBounded-Protocol.h>

@class NSDateInterval, NSDictionary, NSString;

@interface _HKSleepQueryResult : NSObject <_HKDateBounded, NSSecureCoding>
{
    NSDictionary *_resultsByCategoryValue;
    NSDateInterval *_resultInterval;
}

+ (_Bool)supportsSecureCoding;
+ (id)_preferredSourceFromSources:(id)arg1 sourceOrder:(id)arg2;
@property(readonly, nonatomic) NSDateInterval *resultInterval; // @synthesize resultInterval=_resultInterval;
- (void).cxx_destruct;
- (id)endDate;
- (id)startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_calculatePreferredDuration:(double *)arg1 categoryValue:(long long *)arg2;
- (id)preferredDateIntervals;
- (id)dateIntervalsForCategoryValue:(long long)arg1;
- (id)initWithResultInterval:(id)arg1 dateIntervalsByCategoryValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

