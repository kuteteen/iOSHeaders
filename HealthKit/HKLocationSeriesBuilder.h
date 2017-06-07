//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKSeriesBuilder.h>

@class HKDevice, HKLocationSeriesSample, NSObject;
@protocol OS_dispatch_queue;

@interface HKLocationSeriesBuilder : HKSeriesBuilder
{
    HKLocationSeriesSample *_privateSeries;
    NSObject<OS_dispatch_queue> *_queue;
    HKDevice *_device;
}

- (void).cxx_destruct;
- (id)_locationsFromDatums:(id)arg1;
- (_Bool)_validate:(id)arg1 withError:(id *)arg2;
- (void)_discardWithHandler:(CDUnknownBlockType)arg1;
- (void)finishSeriesWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertSeriesData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithHealthStore:(id)arg1 device:(id)arg2;
- (void)dealloc;
- (id)init;

@end

