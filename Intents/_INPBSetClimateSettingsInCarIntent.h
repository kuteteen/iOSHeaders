//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBTemperature;

@interface _INPBSetClimateSettingsInCarIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _airCirculationMode;
    int _climateZone;
    _INPBInteger *_fanSpeedIndex;
    _INPBDouble *_fanSpeedPercentage;
    _INPBIntentMetadata *_intentMetadata;
    int _relativeFanSpeedSetting;
    int _relativeTemperatureSetting;
    _INPBTemperature *_temperature;
    _Bool _enableAirConditioner;
    _Bool _enableAutoMode;
    _Bool _enableClimateControl;
    _Bool _enableFan;
    struct {
        unsigned int airCirculationMode:1;
        unsigned int climateZone:1;
        unsigned int relativeFanSpeedSetting:1;
        unsigned int relativeTemperatureSetting:1;
        unsigned int enableAirConditioner:1;
        unsigned int enableAutoMode:1;
        unsigned int enableClimateControl:1;
        unsigned int enableFan:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBTemperature *temperature; // @synthesize temperature=_temperature;
@property(retain, nonatomic) _INPBDouble *fanSpeedPercentage; // @synthesize fanSpeedPercentage=_fanSpeedPercentage;
@property(retain, nonatomic) _INPBInteger *fanSpeedIndex; // @synthesize fanSpeedIndex=_fanSpeedIndex;
@property(nonatomic) _Bool enableAutoMode; // @synthesize enableAutoMode=_enableAutoMode;
@property(nonatomic) _Bool enableClimateControl; // @synthesize enableClimateControl=_enableClimateControl;
@property(nonatomic) _Bool enableAirConditioner; // @synthesize enableAirConditioner=_enableAirConditioner;
@property(nonatomic) _Bool enableFan; // @synthesize enableFan=_enableFan;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsClimateZone:(id)arg1;
- (id)climateZoneAsString:(int)arg1;
@property(nonatomic) _Bool hasClimateZone;
@property(nonatomic) int climateZone; // @synthesize climateZone=_climateZone;
- (int)StringAsRelativeTemperatureSetting:(id)arg1;
- (id)relativeTemperatureSettingAsString:(int)arg1;
@property(nonatomic) _Bool hasRelativeTemperatureSetting;
@property(nonatomic) int relativeTemperatureSetting; // @synthesize relativeTemperatureSetting=_relativeTemperatureSetting;
@property(readonly, nonatomic) _Bool hasTemperature;
- (int)StringAsRelativeFanSpeedSetting:(id)arg1;
- (id)relativeFanSpeedSettingAsString:(int)arg1;
@property(nonatomic) _Bool hasRelativeFanSpeedSetting;
@property(nonatomic) int relativeFanSpeedSetting; // @synthesize relativeFanSpeedSetting=_relativeFanSpeedSetting;
@property(readonly, nonatomic) _Bool hasFanSpeedPercentage;
@property(readonly, nonatomic) _Bool hasFanSpeedIndex;
- (int)StringAsAirCirculationMode:(id)arg1;
- (id)airCirculationModeAsString:(int)arg1;
@property(nonatomic) _Bool hasAirCirculationMode;
@property(nonatomic) int airCirculationMode; // @synthesize airCirculationMode=_airCirculationMode;
@property(nonatomic) _Bool hasEnableAutoMode;
@property(nonatomic) _Bool hasEnableClimateControl;
@property(nonatomic) _Bool hasEnableAirConditioner;
@property(nonatomic) _Bool hasEnableFan;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end

