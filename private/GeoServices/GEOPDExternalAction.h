//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDExternalAction : PBCodable <NSCopying>
{
    int _componentType;
    NSMutableArray *_externalActionDetails;
    struct {
        unsigned int componentType:1;
    } _has;
}

+ (Class)externalActionDetailType;
@property(retain, nonatomic) NSMutableArray *externalActionDetails; // @synthesize externalActionDetails=_externalActionDetails;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)externalActionDetailAtIndex:(unsigned long long)arg1;
- (unsigned long long)externalActionDetailsCount;
- (void)addExternalActionDetail:(id)arg1;
- (void)clearExternalActionDetails;
- (int)StringAsComponentType:(id)arg1;
- (id)componentTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasComponentType;
@property(nonatomic) int componentType; // @synthesize componentType=_componentType;
- (void)dealloc;

@end
