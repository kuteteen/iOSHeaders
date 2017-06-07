//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDateInterval;

__attribute__((visibility("hidden")))
@interface _HKStatisticsQueryServerConfiguration : HKQueryServerConfiguration
{
    unsigned long long _options;
    unsigned long long _mergeStrategy;
    NSDateInterval *_dateInterval;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

