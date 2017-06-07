//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class HKLocationSeriesSample;

@interface HKLocationSeriesQuery : HKQuery
{
    CDUnknownBlockType _dataHandler;
    HKLocationSeriesSample *_series;
}

+ (Class)_queryServerDataObjectClass;
@property(copy) CDUnknownBlockType dataHandler; // @synthesize dataHandler=_dataHandler;
- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_validate;
- (CDUnknownBlockType)_queue_errorHandler;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (void)deliverLocationSeriesDatum:(id)arg1 final:(_Bool)arg2 forQuery:(id)arg3;
- (id)initWithSeries:(id)arg1 dataHandler:(CDUnknownBlockType)arg2;

@end

