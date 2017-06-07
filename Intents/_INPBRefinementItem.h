//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields, _INPBSelectionItem;

@interface _INPBRefinementItem : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBSelectionItem *_item;
    NSString *_subKeyPath;
}

+ (id)options;
@property(retain, nonatomic) _INPBSelectionItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *subKeyPath; // @synthesize subKeyPath=_subKeyPath;
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
@property(readonly, nonatomic) _Bool hasItem;
@property(readonly, nonatomic) _Bool hasSubKeyPath;

@end

