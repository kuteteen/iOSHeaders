//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDatabaseProtectedDataObserver.h"
#import "HDDiagnosticObject.h"
#import "HDHealthDaemonReadyObserver.h"

@class HDProfile, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, _HDAWDPeriodicAction;

@interface HDAWDSubmissionManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject>
{
    HDProfile *_profile;
    NSMutableDictionary *_serverConnectionsByComponentId;
    NSMutableArray *_actions;
    NSObject<OS_dispatch_queue> *_queue;
    _HDAWDPeriodicAction *_fitnessDailyAction;
    _Bool _started;
    int _fitnessDailyCollectionEnabledNotifyToken;
    CDUnknownBlockType _testHandler;
}

@property(copy, nonatomic) CDUnknownBlockType testHandler; // @synthesize testHandler=_testHandler;
@property(readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (_Bool)_computeAndSubmitSleepAlarmStatistics:(_Bool)arg1;
- (id)_sleepConsistencyEventForMonthPriorToDate:(id)arg1 calendar:(id)arg2;
- (id)_statisticsForTimeDeltas:(id)arg1;
- (_Bool)_computeAndSubmitSleepAlarmDailyReportWithAction:(id)arg1 force:(_Bool)arg2;
- (id)_sleepNightEventFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4;
- (id)_sleepSamplesBeforeDate:(id)arg1 days:(long long)arg2 startDate:(id *)arg3 endDate:(id *)arg4 calendar:(id)arg5;
- (_Bool)_computeAndSubmitFitnessDailyReportWithAction:(id)arg1 force:(_Bool)arg2;
- (id)motionToken;
- (id)_exerciseMinuteHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id *)arg3;
- (_Bool)_enumerateAppleStandHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)_activitySummaryForActivitySummaryIndex:(long long)arg1 activitySummaryOut:(id *)arg2 error:(id *)arg3;
- (id)_newActivitySummaryQueryHelperWithFilter:(id)arg1 initialResultsHandler:(CDUnknownBlockType)arg2;
- (id)_hourlyStatisticsCollectionForStartDate:(id)arg1 endDate:(id)arg2 quantityType:(id)arg3 statisticsOptions:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)_computeAndSubmitDatabaseStatsMetric:(_Bool)arg1;
- (_Bool)_addRowCountDeltaToEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3;
- (_Bool)_updateDatabaseStatsEvent:(id)arg1 withSizeFromDatabase:(id)arg2 profile:(id)arg3 currentDate:(id)arg4;
- (id)_updateMonthDeltaToInt64:(long long)arg1 forKey:(id)arg2 profile:(id)arg3 currentDate:(id)arg4 error:(id *)arg5;
- (_Bool)_setInt64:(long long)arg1 keyPrefix:(id)arg2 profile:(id)arg3 date:(id)arg4 error:(id *)arg5;
- (long long)_int64ForKeyPrefix:(id)arg1 profile:(id)arg2 date:(id *)arg3 error:(id *)arg4;
- (long long)_nonAppleSourcesWithDataSince:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (long long)_nonAppleSourcesCountWithDatabase:(id)arg1 error:(id *)arg2;
- (id)_hasWatchSourcesWithDatabase:(id)arg1 error:(id *)arg2;
- (long long)_manuallyEnteredTypesCountWithDatabase:(id)arg1 error:(id *)arg2;
- (long long)_CDACountWithDatabase:(id)arg1 error:(id *)arg2;
- (long long)_deletedRowCountWithDatabase:(id)arg1 error:(id *)arg2;
- (long long)_objectRowCountWithDatabase:(id)arg1 afterRowId:(long long)arg2 error:(id *)arg3;
- (long long)_countOfObjectsWithSQLQuery:(id)arg1 database:(id)arg2 error:(id *)arg3 bindingHandler:(CDUnknownBlockType)arg4;
- (_Bool)_computeAndSubmitHealthTypesDifferentialPrivacyMetric;
- (_Bool)_computeAndSubmitAchievementCountMetric:(_Bool)arg1;
- (_Bool)_submitAchievementCountMetricWithConnection:(id)arg1 container:(id)arg2 earnedAchievements:(id)arg3 calorieGoal:(id)arg4 force:(_Bool)arg5;
- (_Bool)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3 force:(_Bool)arg4;
- (void)resetTask:(id)arg1;
- (_Bool)runTask:(id)arg1 error:(id *)arg2;
- (id)diagnosticDescription;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
- (void)_queue_start;
- (void)_registerForFitnessDailyCollection;
- (void)_queue_updateFitnessDailyCollectionEnabled;
- (void)updateFitnessDailyCollectionEnabled;
- (_Bool)isFitnessDailyCollectionEnabled;
- (id)_actions;
- (id)_serverConnectionForComponentId:(unsigned int)arg1;
@property(readonly, nonatomic) double activitySummaryQueryTimeout;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

