//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import "HKWorkoutRouteQueryClientInterface.h"

@class HKLocationSeriesSample, NSString;

@interface HKLocationSeriesQuery : HKQuery <HKWorkoutRouteQueryClientInterface>
{
    CDUnknownBlockType _dataHandler;
    HKLocationSeriesSample *_series;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
@property(copy) CDUnknownBlockType dataHandler; // @synthesize dataHandler=_dataHandler;
- (void).cxx_destruct;
- (id)_locationDatumsFromLocations:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)client_deliverWorkoutRouteLocations:(id)arg1 isFinal:(_Bool)arg2 query:(id)arg3;
- (id)initWithSeries:(id)arg1 dataHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

