//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields, _INPBIntentMetadata, _INPBString;

@interface _INPBCopyFileIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBString *_destinationName;
    int _destinationType;
    _INPBString *_entityName;
    int _entityType;
    _INPBIntentMetadata *_intentMetadata;
    NSMutableArray *_properties;
    _INPBString *_sourceName;
    int _sourceType;
    struct {
        unsigned int destinationType:1;
        unsigned int entityType:1;
        unsigned int sourceType:1;
    } _has;
}

+ (Class)propertiesType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) _INPBString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) _INPBString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
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
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
@property(readonly, nonatomic) _Bool hasDestinationName;
- (int)StringAsDestinationType:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasDestinationType;
@property(nonatomic) int destinationType; // @synthesize destinationType=_destinationType;
@property(readonly, nonatomic) _Bool hasSourceName;
- (int)StringAsSourceType:(id)arg1;
- (id)sourceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSourceType;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) _Bool hasEntityName;
- (int)StringAsEntityType:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEntityType;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end

