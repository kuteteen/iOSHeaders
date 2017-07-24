//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIUIUnitManager;

@interface FIUIFormattingManager : NSObject
{
    FIUIUnitManager *_unitManager;
}

+ (id)localizedShortPowerUnitString;
+ (id)localizedShortCadenceUnitString;
+ (id)percentStringWithNumber:(id)arg1;
+ (id)stringWithNumber:(id)arg1 decimalPrecision:(unsigned long long)arg2 roundingMode:(unsigned long long)arg3;
+ (id)stringWithNumber:(id)arg1 decimalPrecision:(unsigned long long)arg2;
@property(readonly, nonatomic) FIUIUnitManager *unitManager; // @synthesize unitManager=_unitManager;
- (void).cxx_destruct;
- (id)localizedDistanceByStrokeStyle:(id)arg1 isPoolSwim:(_Bool)arg2;
- (id)localizedHeartRateUnitString;
- (id)localizedStringWithBeatsPerMinute:(double)arg1 requirePositiveValue:(_Bool)arg2;
- (id)localizedStringWithBeatsPerMinute:(double)arg1;
- (id)localizedStringWithHeartRate:(id)arg1 unitStyle:(unsigned long long)arg2 requirePositiveValue:(_Bool)arg3;
- (id)localizedStringWithHeartRate:(id)arg1 unitStyle:(unsigned long long)arg2;
- (id)localizedStringWithHeartRate:(id)arg1;
- (id)localizedTitleForSplit:(id)arg1 unit:(id)arg2 lapIndex:(long long)arg3 useShortFormat:(_Bool)arg4;
- (id)localizedPaceValueForSplit:(id)arg1 activityType:(id)arg2;
- (id)localizedShareTextWithWorkout:(id)arg1 shareValue:(id)arg2;
- (id)_localizedOpenGoalKeyMetricStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2;
- (id)_localizedKeyMetricCyclingStringWithWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2;
- (id)_localizedKeyMetricDurationStringWithWorkout:(id)arg1;
- (id)_localizedKeyMetricDistanceStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2;
- (id)_localizedKeyMetricEnergyBurnedStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2;
- (id)localizedKeyMetricStringForWorkout:(id)arg1 unitStyle:(unsigned long long)arg2;
- (id)localizedGoalDescriptionForGoalType:(unsigned long long)arg1 goalValue:(double)arg2 activityType:(id)arg3;
- (_Bool)_workoutSupportsDistanceMetricForGoalDisplay:(id)arg1;
- (unsigned long long)_effectiveGoalTypeForWorkout:(id)arg1;
- (id)localizedGoalDescriptionForWorkout:(id)arg1 withValue:(id *)arg2 appendActivityType:(_Bool)arg3;
- (id)_energyBurnedUnitStringForUnit:(id)arg1 useShortString:(_Bool)arg2;
- (id)localizedLongActiveEnergyUnitStringWithTextCase:(unsigned long long)arg1;
- (id)localizedLongActiveEnergyUnitString;
- (id)localizedShortTypeDistinguishingUnitStringForEnergyType:(unsigned long long)arg1;
- (id)localizedShortActiveEnergyUnitString;
- (id)localizedStringWithEnergyInCalories:(double)arg1 energyType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3;
- (id)localizedStringWithEnergy:(id)arg1 energyType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3;
- (id)localizedStringWithActiveEnergy:(id)arg1 unitStyle:(unsigned long long)arg2;
- (id)localizedStringWithActiveEnergy:(id)arg1;
- (double)caloriesForEnergyBurnedInUserUnit:(double)arg1;
- (double)energyBurnedInUserUnitForCalories:(double)arg1;
- (double)roundedDailyMoveGoalForCalories:(double)arg1;
- (id)localizedStringWithPersonHeight:(id)arg1 unitStyle:(long long)arg2;
- (unsigned long long)userDistanceUnitForSwimmingLapLength;
- (id)localizedDistinguishingPaceUnitStringWithMetricType:(unsigned long long)arg1 distanceType:(unsigned long long)arg2 distanceUnit:(unsigned long long)arg3 paceFormat:(long long)arg4;
- (id)localizedPaceUnitStringWithDistanceType:(unsigned long long)arg1 distanceUnit:(unsigned long long)arg2;
- (id)localizedSpeedUnitString;
- (id)localizedShortTypeDistinguishingUnitStringForPowerType:(unsigned long long)arg1 unitString:(id)arg2;
- (id)localizedPowerUnitStringForPower:(double)arg1;
- (id)localizedStrokeCountStringWithCount:(long long)arg1 overDistance:(id)arg2 paceFormat:(long long)arg3;
- (id)localizedSwimmingPaceStringWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3;
- (id)localizedPaceStringWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3;
- (id)localizedLongUnitStringForDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2 textCase:(unsigned long long)arg3;
- (id)localizedLongUnitStringForDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2;
- (id)localizedShortUnitStringForDistanceType:(unsigned long long)arg1;
- (id)localizedShortUnitStringForDistanceUnit:(unsigned long long)arg1 textCase:(unsigned long long)arg2;
- (id)localizedShortUnitStringForDistanceUnit:(unsigned long long)arg1;
- (id)_localizedStringWithDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2 unitStyle:(long long)arg3 decimalPrecision:(unsigned long long)arg4;
- (unsigned long long)_naturalScaleUnitForDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2;
- (id)localizedNaturalScaleStringWithDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 usedUnit:(unsigned long long *)arg4;
- (id)localizedStringWithDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3;
- (id)localizedStringWithDistanceInMeters:(double)arg1 distanceUnit:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 decimalPrecision:(unsigned long long)arg4;
- (double)distanceInDistanceUnit:(unsigned long long)arg1 forDistanceInMeters:(double)arg2;
- (double)distanceInUserDistanceUnitForDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2;
- (double)distanceInMetersForDistanceInUserUnit:(double)arg1 distanceType:(unsigned long long)arg2;
- (id)stringWithDuration:(double)arg1 durationFormat:(unsigned long long)arg2;
- (id)localizationKeyForDistanceBaseKey:(id)arg1 distanceType:(unsigned long long)arg2;
- (id)localizationKeyForEnergyBaseKey:(id)arg1;
- (id)applyTextCase:(unsigned long long)arg1 toString:(id)arg2;
- (id)decimalSeparator;
- (id)initWithUnitManager:(id)arg1;

@end
