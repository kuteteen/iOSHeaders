//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _HKCurrentActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDictionary *_collectionIntervals;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *collectionIntervals; // @synthesize collectionIntervals=_collectionIntervals;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

