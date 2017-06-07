//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class HKActivitySummary;

@interface _HKAchievementPredicateActivitySummaryEnvironment : _HKBaseAchievementPredicateEnvironment
{
    HKActivitySummary *_activitySummary;
    double _previousMovePercent;
}

@property(readonly, nonatomic) double previousMovePercent; // @synthesize previousMovePercent=_previousMovePercent;
@property(retain, nonatomic) HKActivitySummary *activitySummary; // @synthesize activitySummary=_activitySummary;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) double walkingRunningDistanceInKilometers;
@property(readonly, nonatomic) long long stepCount;
@property(readonly, nonatomic) double standHours;
@property(readonly, nonatomic) double briskMinutesPercent;
@property(readonly, nonatomic) double briskMinutes;
@property(readonly, nonatomic) double moveCalories;
@property(readonly, nonatomic) double standPercent;
@property(readonly, nonatomic) double movePercent;
@property(readonly, nonatomic) double moveGoalCalories;
- (id)initWithActivitySummary:(id)arg1;

@end
