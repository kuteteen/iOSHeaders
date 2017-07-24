//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (TSUAdditions)
- (_Bool)tsu_isEqualToDate:(id)arg1;
- (id)tsu_fullFormattedDateWithPeriod;
- (id)p_ruleForOverAYearAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForOverAWeekAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForYesterday:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForYesterdayShortAsPossible:(id)arg1;
- (id)p_rule1To23HoursAgo:(long long)arg1;
- (id)p_rule1To59MinutesAgo:(long long)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2 shortAsPossible:(_Bool)arg3;
@property(readonly, nonatomic) CDStruct_d65e47c4 tsu_DOSTime;
- (id)tsu_initWithDOSTime:(CDStruct_d65e47c4)arg1;
@end
