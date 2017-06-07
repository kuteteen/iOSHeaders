//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDRawAttributeFilter : PBCodable <NSCopying>
{
    NSMutableArray *_keys;
}

+ (Class)keyType;
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)keysCount;
- (void)addKey:(id)arg1;
- (void)clearKeys;
- (void)dealloc;

@end
