//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCardForFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPCardForFeedback : PBCodable <_CPCardForFeedback, NSSecureCoding>
{
    NSArray *_cardSections;
}

@property(copy, nonatomic) NSArray *cardSections; // @synthesize cardSections=_cardSections;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)addCardSections:(id)arg1;
- (void)clearCardSections;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
