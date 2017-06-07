//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBContact, _INPBDateTimeRange, _INPBIntentMetadata;

@interface _INPBSearchCallHistoryIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _callCapabilities;
    int _callType;
    _INPBDateTimeRange *_dateCreated;
    _INPBIntentMetadata *_intentMetadata;
    _INPBContact *_recipient;
    struct {
        unsigned int callType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBContact *recipient; // @synthesize recipient=_recipient;
@property(retain, nonatomic) _INPBDateTimeRange *dateCreated; // @synthesize dateCreated=_dateCreated;
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
- (int)StringAsCallCapabilities:(id)arg1;
- (id)callCapabilitiesAsString:(int)arg1;
- (void)setCallCapabilities:(int *)arg1 count:(unsigned long long)arg2;
- (int)callCapabilitiesAtIndex:(unsigned long long)arg1;
- (void)addCallCapabilities:(int)arg1;
- (void)clearCallCapabilities;
@property(readonly, nonatomic) int *callCapabilities;
@property(readonly, nonatomic) unsigned long long callCapabilitiesCount;
@property(readonly, nonatomic) _Bool hasRecipient;
@property(readonly, nonatomic) _Bool hasDateCreated;
- (int)StringAsCallType:(id)arg1;
- (id)callTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCallType;
@property(nonatomic) int callType; // @synthesize callType=_callType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (void)dealloc;

@end

