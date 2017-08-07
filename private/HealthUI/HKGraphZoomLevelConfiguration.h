//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents;

@interface HKGraphZoomLevelConfiguration : NSObject
{
    NSDateComponents *_axisLabelIntervalComponents;
    NSDateComponents *_seriesPointIntervalComponents;
    NSDateComponents *_referencePointIntervalComponents;
    long long _intendedTimeScope;
    double _seriesBlockSize;
    double _zoomLevelThreshold;
    double _canonicalSize;
    unsigned long long _majorTickCalendarUnit;
    double _approximateSeriesPointInterval;
    double _todayOffsetSize;
    double _approximateAxisLabelInterval;
}

+ (id)_axisSpanDateComponentsWithTimeScope:(long long)arg1;
+ (id)_snappingStartDateWithStartDate:(id)arg1 velocity:(struct CGPoint)arg2 calendar:(id)arg3 timeScope:(long long)arg4;
+ (id)activeRangeFromCadenceRange:(id)arg1 timeScope:(long long)arg2 axisRange:(id)arg3 calendar:(id)arg4;
+ (id)snappingRangeForRange:(id)arg1 axisRange:(id)arg2 timeScope:(long long)arg3 velocity:(struct CGPoint)arg4 calendar:(id)arg5;
+ (id)chartVisibleRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 alignment:(long long)arg3 dataRange:(id)arg4 calendar:(id)arg5 firstWeekday:(long long)arg6 cadence:(long long)arg7;
+ (id)_fitRange:(id)arg1 toDateRange:(id)arg2 timeScope:(long long)arg3 alignment:(long long)arg4 calendar:(id)arg5 firstWeekday:(long long)arg6 cadence:(long long)arg7;
+ (id)_startDateForTimeScope:(long long)arg1 forDate:(id)arg2 alignment:(long long)arg3;
+ (id)chartDataRangeForTimeScope:(long long)arg1 dataRange:(id)arg2 firstWeekday:(long long)arg3 calendar:(id)arg4 cadence:(long long)arg5;
+ (long long)timeScopeForDateRange:(id)arg1;
+ (id)defaultCalendar;
+ (id)configurationForZoomLevel:(long long)arg1;
+ (id)_generateConfigurationForZoomLevel:(long long)arg1;
@property(readonly, nonatomic) double approximateAxisLabelInterval; // @synthesize approximateAxisLabelInterval=_approximateAxisLabelInterval;
@property(readonly, nonatomic) double todayOffsetSize; // @synthesize todayOffsetSize=_todayOffsetSize;
@property(readonly, nonatomic) double approximateSeriesPointInterval; // @synthesize approximateSeriesPointInterval=_approximateSeriesPointInterval;
@property(readonly, nonatomic) unsigned long long majorTickCalendarUnit; // @synthesize majorTickCalendarUnit=_majorTickCalendarUnit;
@property(readonly, nonatomic) double canonicalSize; // @synthesize canonicalSize=_canonicalSize;
@property(readonly, nonatomic) double zoomLevelThreshold; // @synthesize zoomLevelThreshold=_zoomLevelThreshold;
@property(readonly, nonatomic) double seriesBlockSize; // @synthesize seriesBlockSize=_seriesBlockSize;
@property(readonly, nonatomic) long long intendedTimeScope; // @synthesize intendedTimeScope=_intendedTimeScope;
@property(readonly, nonatomic) NSDateComponents *referencePointIntervalComponents; // @synthesize referencePointIntervalComponents=_referencePointIntervalComponents;
@property(readonly, nonatomic) NSDateComponents *seriesPointIntervalComponents; // @synthesize seriesPointIntervalComponents=_seriesPointIntervalComponents;
@property(readonly, nonatomic) NSDateComponents *axisLabelIntervalComponents; // @synthesize axisLabelIntervalComponents=_axisLabelIntervalComponents;
- (void).cxx_destruct;

@end

