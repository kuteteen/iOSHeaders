//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTAgentDiagnosticDelegate.h"
#import "MTAgentNotificationListener.h"
#import "MTAlarmObserver.h"

@class CMSleepData, CMSleepTracker, MTAlarmScheduler, MTAlarmStorage, MTSleepMetrics, NSString;

@interface MTSleepMonitor : NSObject <MTAlarmObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate>
{
    _Bool _monitoring;
    id <NAScheduler> _serializer;
    MTSleepMetrics *_sleepMetrics;
    MTAlarmStorage *_alarmStorage;
    MTAlarmScheduler *_alarmScheduler;
    CMSleepTracker *_sleepTracker;
    CMSleepData *_lastRecord;
    CDUnknownBlockType _currentDateProvider;
}

+ (long long)_sleepMonitorWindowInMinutes;
@property(copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(retain, nonatomic) CMSleepData *lastRecord; // @synthesize lastRecord=_lastRecord;
@property(retain, nonatomic) CMSleepTracker *sleepTracker; // @synthesize sleepTracker=_sleepTracker;
@property(retain, nonatomic) MTAlarmScheduler *alarmScheduler; // @synthesize alarmScheduler=_alarmScheduler;
@property(retain, nonatomic) MTAlarmStorage *alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(retain, nonatomic) MTSleepMetrics *sleepMetrics; // @synthesize sleepMetrics=_sleepMetrics;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(nonatomic) _Bool monitoring; // @synthesize monitoring=_monitoring;
- (void).cxx_destruct;
- (void)printDiagnostics;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)_queue_handleEarlyWakeUp;
- (void)_queue_handleTestWakeup;
- (void)_scheduleWakeUpForMonitorOnDate:(id)arg1;
- (void)handleNotification:(id)arg1;
- (_Bool)handlesNotification:(id)arg1;
- (void)_checkMonitoring;
- (id)_lookupSleepMonitorWindowForDate:(id)arg1;
- (id)_nextScheduledWakeUpAlarmForDate:(id)arg1;
- (id)_lookupCurrentSleepMonitorWindow;
- (void)_queue_checkForOutOfBedEventInData:(id)arg1;
- (void)_queue_handleSleepTrackingEvent;
- (void)checkMonitoring;
- (void)_stopMonitoring;
- (void)stopMonitoring;
- (void)_beginMonitoring;
- (void)beginMonitoring;
- (void)userWokeUpEarly:(id)arg1;
- (void)userWokeUp:(id)arg1;
- (void)userWentToSleep:(id)arg1;
- (id)initWithAlarmStorage:(id)arg1 alarmScheduler:(id)arg2 sleepMetrics:(id)arg3 sleepTracker:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;
- (id)initWithAlarmStorage:(id)arg1 alarmScheduler:(id)arg2 sleepMetrics:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

