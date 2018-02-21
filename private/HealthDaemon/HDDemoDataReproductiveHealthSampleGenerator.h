//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataReproductiveHealthSampleGenerator : HDDemoDataBaseSampleGenerator
{
    NSArray *_basalBodyTempMultiplierTable;
    NSArray *_cervicalMucusTable;
    double _nextOvulationTestSampleTime;
    double _nextSexualActivitySampleTime;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double nextSexualActivitySampleTime; // @synthesize nextSexualActivitySampleTime=_nextSexualActivitySampleTime;
@property(nonatomic) double nextOvulationTestSampleTime; // @synthesize nextOvulationTestSampleTime=_nextOvulationTestSampleTime;
@property(copy, nonatomic) NSArray *cervicalMucusTable; // @synthesize cervicalMucusTable=_cervicalMucusTable;
@property(copy, nonatomic) NSArray *basalBodyTempMultiplierTable; // @synthesize basalBodyTempMultiplierTable=_basalBodyTempMultiplierTable;
- (void).cxx_destruct;
- (long long)_computeNextLuteinizingHormoneSurgeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (_Bool)_isDemoPersonOvulating:(id)arg1 atTime:(double)arg2;
- (id)_basalBodyTempMultiplier;
- (struct HDDemoDataMenstrualFlow)menstrualFlowForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)ovulationTestResultForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)cervicalMucusQualityForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)basalBodyTempForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)sexualActivityForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

