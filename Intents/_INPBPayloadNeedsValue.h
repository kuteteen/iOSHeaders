//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface _INPBPayloadNeedsValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_promptItems;
}

+ (Class)promptItemsType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *promptItems; // @synthesize promptItems=_promptItems;
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
- (id)promptItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)promptItemsCount;
- (void)addPromptItems:(id)arg1;
- (void)clearPromptItems;

@end

