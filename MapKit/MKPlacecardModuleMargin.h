//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapKit/NSCopying-Protocol.h>

@interface MKPlacecardModuleMargin : PBCodable <NSCopying>
{
    unsigned int _margin;
    int _topModuleType;
    struct {
        unsigned int margin:1;
        unsigned int topModuleType:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsTopModuleType:(id)arg1;
- (id)topModuleTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTopModuleType;
@property(nonatomic) int topModuleType; // @synthesize topModuleType=_topModuleType;
@property(nonatomic) _Bool hasMargin;
@property(nonatomic) unsigned int margin; // @synthesize margin=_margin;

@end

