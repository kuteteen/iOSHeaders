//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface HMPBEncodeOption : PBCodable <NSCopying>
{
    _Bool _isSPI;
    _Bool _isXPC;
    struct {
        unsigned int isSPI:1;
        unsigned int isXPC:1;
    } _has;
}

@property(nonatomic) _Bool isSPI; // @synthesize isSPI=_isSPI;
@property(nonatomic) _Bool isXPC; // @synthesize isXPC=_isXPC;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsSPI;
@property(nonatomic) _Bool hasIsXPC;

@end

