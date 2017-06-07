//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBInteger, _INPBIntentMetadata, _INPBString;

@interface _INPBSaveProfileInCarIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBIntentMetadata *_intentMetadata;
    _INPBString *_profileName;
    _INPBInteger *_profileNumber;
}

+ (id)options;
@property(retain, nonatomic) _INPBString *profileName; // @synthesize profileName=_profileName;
@property(retain, nonatomic) _INPBInteger *profileNumber; // @synthesize profileNumber=_profileNumber;
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
@property(readonly, nonatomic) _Bool hasProfileName;
@property(readonly, nonatomic) _Bool hasProfileNumber;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end

