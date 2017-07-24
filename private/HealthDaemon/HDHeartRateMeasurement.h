//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

#import <HealthDaemon/HDDatumRendering-Protocol.h>

@class NSArray;

@interface HDHeartRateMeasurement : HDHealthServiceCharacteristic <HDDatumRendering>
{
    _Bool _hasEnergyExpended;
    _Bool _hasSensorContact;
    _Bool _sensorContact;
    long long _heartRateValue;
    long long _energyExpended;
    NSArray *_rrIntervals;
}

+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;
+ (id)uuid;
@property(retain, nonatomic) NSArray *rrIntervals; // @synthesize rrIntervals=_rrIntervals;
@property(nonatomic) _Bool sensorContact; // @synthesize sensorContact=_sensorContact;
@property(nonatomic) _Bool hasSensorContact; // @synthesize hasSensorContact=_hasSensorContact;
@property(nonatomic) long long energyExpended; // @synthesize energyExpended=_energyExpended;
@property(nonatomic) _Bool hasEnergyExpended; // @synthesize hasEnergyExpended=_hasEnergyExpended;
@property(nonatomic) long long heartRateValue; // @synthesize heartRateValue=_heartRateValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long derivedContactStatus;
- (id)description;
- (id)generateDatums:(id)arg1;

@end
