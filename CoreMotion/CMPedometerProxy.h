//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMPedometerProxy : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fHandler;
    long long fStepCountFromStart;
    long long fPushCountFromStart;
    long long fStepCountOffset;
    long long fPushCountOffset;
    double fDistanceFromStart;
    double fDistanceOffset;
    int fFloorAscendedStart;
    int fFloorAscendedOffset;
    int fFloorDescendedStart;
    int fFloorDescendedOffset;
    double fActiveTimeFromStart;
    double fActiveTimeOffset;
    double fValidStartDate;
    _Bool fStopUpdates;
    _Bool fFloorCountingAvailable;
    _Bool fPaceAndCadenceAvailable;
    CDUnknownBlockType fEventHandler;
    _Bool fStopEventUpdates;
    int fWorkoutType;
}

- (id)_strideCalibrationDump;
- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;
- (void)_stopPedometerEventUpdates;
- (void)_startPedometerEventUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_handleRecordQueryResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 onQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_stopPedometerUpdates;
- (void)_startPedometerUpdatesFromDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_internalQueryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 onQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

