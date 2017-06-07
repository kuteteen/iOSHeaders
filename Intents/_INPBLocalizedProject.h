//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBAppNames, _INPBIntentVocabulary, _INPBLanguageTag;

@interface _INPBLocalizedProject : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBAppNames *_appNames;
    _INPBIntentVocabulary *_intentVocabulary;
    _INPBLanguageTag *_language;
}

@property(retain, nonatomic) _INPBIntentVocabulary *intentVocabulary; // @synthesize intentVocabulary=_intentVocabulary;
@property(retain, nonatomic) _INPBAppNames *appNames; // @synthesize appNames=_appNames;
@property(retain, nonatomic) _INPBLanguageTag *language; // @synthesize language=_language;
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
@property(readonly, nonatomic) _Bool hasIntentVocabulary;
@property(readonly, nonatomic) _Bool hasAppNames;
@property(readonly, nonatomic) _Bool hasLanguage;

@end

