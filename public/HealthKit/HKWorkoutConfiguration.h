//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HKQuantity;

@interface HKWorkoutConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _activityType;
    long long _locationType;
    long long _swimmingLocationType;
    HKQuantity *_lapLength;
}

+ (id)_workoutConfigurationFromDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy) HKQuantity *lapLength; // @synthesize lapLength=_lapLength;
@property long long swimmingLocationType; // @synthesize swimmingLocationType=_swimmingLocationType;
@property long long locationType; // @synthesize locationType=_locationType;
@property unsigned long long activityType; // @synthesize activityType=_activityType;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

