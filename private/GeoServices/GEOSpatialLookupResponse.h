//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOSpatialLookupResponse : PBCodable <NSCopying>
{
    NSMutableArray *_places;
    int _statusCode;
    CDStruct_bcb1eac0 _has;
}

+ (Class)placeType;
@property(retain, nonatomic) NSMutableArray *places; // @synthesize places=_places;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)placeAtIndex:(unsigned long long)arg1;
- (unsigned long long)placesCount;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (void)dealloc;

@end
