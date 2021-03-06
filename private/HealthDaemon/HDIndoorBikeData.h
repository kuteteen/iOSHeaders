//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>

#import "HDDatumRendering.h"

@class HDFitnessMachineCharacteristicDoubleField, HDFitnessMachineCharacteristicInt16Field, HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt24Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDIndoorBikeData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering>
{
    HDFitnessMachineCharacteristicDoubleField *_instantaneousSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_averageSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_instantaneousCadenceField;
    HDFitnessMachineCharacteristicDoubleField *_averageCadenceField;
    HDFitnessMachineCharacteristicUInt24Field *_totalDistanceField;
    HDFitnessMachineCharacteristicInt16Field *_resistanceLevelField;
    HDFitnessMachineCharacteristicInt16Field *_instantaneousPowerField;
    HDFitnessMachineCharacteristicInt16Field *_averagePowerField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
}

+ (unsigned char)flagFieldLength;
+ (id)uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned short remainingTime;
@property(readonly, nonatomic) _Bool remainingTimeIsSet;
@property(readonly, nonatomic) unsigned short elapsedTime;
@property(readonly, nonatomic) _Bool elapsedTimeIsSet;
@property(readonly, nonatomic) unsigned char metabolicEquivalent;
@property(readonly, nonatomic) _Bool metabolicEquivalentIsSet;
@property(readonly, nonatomic) unsigned char heartRate;
@property(readonly, nonatomic) _Bool heartRateIsSet;
@property(readonly, nonatomic) unsigned char energyPerMinute;
@property(readonly, nonatomic) _Bool energyPerMinuteIsSet;
@property(readonly, nonatomic) unsigned short energyPerHour;
@property(readonly, nonatomic) _Bool energyPerHourIsSet;
@property(readonly, nonatomic) unsigned short totalEnergy;
@property(readonly, nonatomic) _Bool totalEnergyIsSet;
@property(readonly, nonatomic) short averagePower;
@property(readonly, nonatomic) _Bool averagePowerIsSet;
@property(readonly, nonatomic) short instantaneousPower;
@property(readonly, nonatomic) _Bool instantaneousPowerIsSet;
@property(readonly, nonatomic) short resistanceLevel;
@property(readonly, nonatomic) _Bool resistanceLevelIsSet;
@property(readonly, nonatomic) unsigned int totalDistance;
@property(readonly, nonatomic) _Bool totalDistanceIsSet;
@property(readonly, nonatomic) double averageCadence;
@property(readonly, nonatomic) _Bool averageCadenceIsSet;
@property(readonly, nonatomic) double instantaneousCadence;
@property(readonly, nonatomic) _Bool instantaneousCadenceIsSet;
@property(readonly, nonatomic) double averageSpeed;
@property(readonly, nonatomic) _Bool averageSpeedIsSet;
@property(readonly, nonatomic) double instantaneousSpeed;
@property(readonly, nonatomic) _Bool instantaneousSpeedIsSet;
- (id)description;
- (id)init;
- (id)allFields;
- (id)generateDatums:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSDate *updateTime;

@end

