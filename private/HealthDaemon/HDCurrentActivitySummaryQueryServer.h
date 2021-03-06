//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import "HDCurrentActivitySummaryHelperObserver.h"

@class HDCurrentActivitySummaryHelper, HKActivitySummary, NSDictionary, NSString;

@interface HDCurrentActivitySummaryQueryServer : HDQueryServer <HDCurrentActivitySummaryHelperObserver>
{
    HDCurrentActivitySummaryHelper *_currentSummaryHelper;
    HKActivitySummary *_lastActivitySummary;
    NSDictionary *_collectionIntervals;
}

- (void).cxx_destruct;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (_Bool)_shouldListenForUpdates;
- (void)_queue_stopDataCollection;
- (void)_queue_startDataCollection;
- (void)_queue_stop;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

