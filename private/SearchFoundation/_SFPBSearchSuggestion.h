//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBSearchSuggestion.h"

@class NSArray, NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBSearchSuggestion : PBCodable <_SFPBSearchSuggestion, NSSecureCoding>
{
    struct {
        unsigned int type:1;
        unsigned int previouslyEngaged:1;
    } _has;
    _Bool _previouslyEngaged;
    int _type;
    NSString *_identifier;
    NSString *_suggestion;
    NSString *_query;
    _SFPBGraphicalFloat *_score;
    NSArray *_duplicateSuggestions;
    NSString *_topicIdentifier;
    NSString *_bundleIdentifier;
    NSString *_fbr;
}

@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) _Bool previouslyEngaged; // @synthesize previouslyEngaged=_previouslyEngaged;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *topicIdentifier; // @synthesize topicIdentifier=_topicIdentifier;
@property(copy, nonatomic) NSArray *duplicateSuggestions; // @synthesize duplicateSuggestions=_duplicateSuggestions;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _SFPBGraphicalFloat *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasFbr;
@property(readonly, nonatomic) _Bool hasPreviouslyEngaged;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(readonly, nonatomic) _Bool hasTopicIdentifier;
- (id)duplicateSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateSuggestionsCount;
- (void)addDuplicateSuggestions:(id)arg1;
- (void)clearDuplicateSuggestions;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasScore;
@property(readonly, nonatomic) _Bool hasQuery;
@property(readonly, nonatomic) _Bool hasSuggestion;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

