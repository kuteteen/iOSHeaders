//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface NTPBHeadlineBackingElement : PBCodable <NSCopying>
{
    NSData *_articleRecordData;
    NSData *_sourceChannelRecordData;
}

@property(retain, nonatomic) NSData *sourceChannelRecordData; // @synthesize sourceChannelRecordData=_sourceChannelRecordData;
@property(retain, nonatomic) NSData *articleRecordData; // @synthesize articleRecordData=_articleRecordData;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSourceChannelRecordData;
@property(readonly, nonatomic) _Bool hasArticleRecordData;

@end

