//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (HealthKit)
+ (id)hk_componentsWithDays:(long long)arg1;
+ (id)hk_oneWeek;
+ (id)hk_oneDay;
- (id)hk_translateDateComponentsToCalendar:(id)arg1 calendarUnits:(unsigned long long)arg2;
- (id)hk_populatedCalendarGregorianCalendarDefault;
- (long long)hk_maxComponentValue;
- (id)_hk_dateByAddingFilteredInterval:(long long)arg1 toDate:(id)arg2;
- (id)hk_dateByAddingInterval:(long long)arg1 toDate:(id)arg2;
- (double)hk_approximateDuration;
@end

