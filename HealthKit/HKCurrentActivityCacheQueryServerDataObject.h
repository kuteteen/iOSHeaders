//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKQueryServerDataObject.h>

@class NSDateComponents;

__attribute__((visibility("hidden")))
@interface HKCurrentActivityCacheQueryServerDataObject : _HKQueryServerDataObject
{
    NSDateComponents *_statisticsIntervalComponents;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDateComponents *statisticsIntervalComponents; // @synthesize statisticsIntervalComponents=_statisticsIntervalComponents;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

