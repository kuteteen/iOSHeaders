//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCard-Protocol.h>

@class NSArray, NSData, NSString, _SFPBURL;

@interface _SFPBCard : PBCodable <_SFPBCard, NSSecureCoding>
{
    CDStruct_db075487 _has;
    _Bool _flexibleSectionOrder;
    int _type;
    int _source;
    NSString *_title;
    NSArray *_cardSections;
    NSData *_intentMessageData;
    NSString *_intentMessageName;
    NSData *_intentResponseMessageData;
    NSString *_intentResponseMessageName;
    NSArray *_dismissalCommands;
    NSString *_cardId;
    NSString *_contextReferenceIdentifier;
    _SFPBURL *_urlValue;
    NSData *_entityIdentifier;
    NSString *_resultIdentifier;
    unsigned long long _queryId;
    NSString *_fbr;
    NSArray *_entityProtobufMessages;
}

@property(copy, nonatomic) NSArray *entityProtobufMessages; // @synthesize entityProtobufMessages=_entityProtobufMessages;
@property(nonatomic) _Bool flexibleSectionOrder; // @synthesize flexibleSectionOrder=_flexibleSectionOrder;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(copy, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier=_resultIdentifier;
@property(copy, nonatomic) NSData *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) _SFPBURL *urlValue; // @synthesize urlValue=_urlValue;
@property(copy, nonatomic) NSString *contextReferenceIdentifier; // @synthesize contextReferenceIdentifier=_contextReferenceIdentifier;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(copy, nonatomic) NSArray *dismissalCommands; // @synthesize dismissalCommands=_dismissalCommands;
@property(copy, nonatomic) NSString *intentResponseMessageName; // @synthesize intentResponseMessageName=_intentResponseMessageName;
@property(copy, nonatomic) NSData *intentResponseMessageData; // @synthesize intentResponseMessageData=_intentResponseMessageData;
@property(copy, nonatomic) NSString *intentMessageName; // @synthesize intentMessageName=_intentMessageName;
@property(copy, nonatomic) NSData *intentMessageData; // @synthesize intentMessageData=_intentMessageData;
@property(copy) NSArray *cardSections; // @synthesize cardSections=_cardSections;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)entityProtobufMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityProtobufMessagesCount;
- (void)addEntityProtobufMessages:(id)arg1;
- (void)clearEntityProtobufMessages;
@property(readonly, nonatomic) _Bool hasFlexibleSectionOrder;
@property(readonly, nonatomic) _Bool hasFbr;
@property(readonly, nonatomic) _Bool hasQueryId;
@property(readonly, nonatomic) _Bool hasResultIdentifier;
@property(readonly, nonatomic) _Bool hasEntityIdentifier;
@property(readonly, nonatomic) _Bool hasSource;
@property(readonly, nonatomic) _Bool hasUrlValue;
@property(readonly, nonatomic) _Bool hasContextReferenceIdentifier;
@property(readonly, nonatomic) _Bool hasCardId;
- (id)dismissalCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dismissalCommandsCount;
- (void)addDismissalCommands:(id)arg1;
- (void)clearDismissalCommands;
@property(readonly, nonatomic) _Bool hasIntentResponseMessageName;
@property(readonly, nonatomic) _Bool hasIntentResponseMessageData;
@property(readonly, nonatomic) _Bool hasIntentMessageName;
@property(readonly, nonatomic) _Bool hasIntentMessageData;
- (id)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)addCardSections:(id)arg1;
- (void)clearCardSections;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasTitle;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

