//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDStatisticsBuilder.h>

@class HDCumulativeCollectionCalculator;

@interface HDCumulativeStatisticsBuilder : HDStatisticsBuilder
{
    HDCumulativeCollectionCalculator *_collectionCalculator;
}

- (void).cxx_destruct;
- (_Bool)_setupStatistics:(id)arg1 withCalculator:(id)arg2;
- (id)collectionCalculatorWithStatisticsCollection:(id)arg1;
- (id)collectionCalculatorWithTimePeriod:(id)arg1;
- (id)_statisticsFromCalculator:(id)arg1 samples:(id)arg2;
- (id)_updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 error:(id *)arg3;

@end

