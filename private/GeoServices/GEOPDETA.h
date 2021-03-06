//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEORouteTrafficDetail, PBUnknownFields;

@interface GEOPDETA : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    GEORouteTrafficDetail *_routeTrafficDetail;
    unsigned int _time;
    int _transportType;
    struct {
        unsigned int distance:1;
        unsigned int historicTravelTime:1;
        unsigned int time:1;
        unsigned int transportType:1;
    } _has;
}

@property(retain, nonatomic) GEORouteTrafficDetail *routeTrafficDetail; // @synthesize routeTrafficDetail=_routeTrafficDetail;
@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int time; // @synthesize time=_time;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRouteTrafficDetail;
@property(nonatomic) _Bool hasHistoricTravelTime;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) _Bool hasTime;

@end

