//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class HKQuantity;

@interface _HKWorkoutGoalFilter : _HKFilter
{
    HKQuantity *_comparisonQuantity;
    unsigned long long _goalType;
    unsigned long long _operatorType;
}

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithComparisonQuantity:(id)arg1 goalType:(unsigned long long)arg2 operatorType:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
@property(readonly, nonatomic) HKQuantity *comparisonQuantity; // @synthesize comparisonQuantity=_comparisonQuantity;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end

