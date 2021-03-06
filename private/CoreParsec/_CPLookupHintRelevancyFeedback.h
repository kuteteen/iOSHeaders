//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPLookupHintRelevancyFeedback.h"
#import "_CPProcessableFeedback.h"

@class NSData, NSDictionary, NSString, _CPRange;

@interface _CPLookupHintRelevancyFeedback : PBCodable <_CPProcessableFeedback, _CPLookupHintRelevancyFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int discarded:1;
        unsigned int grade:1;
    } _has;
    _Bool _discarded;
    int _grade;
    unsigned long long _timestamp;
    _CPRange *_hintRange;
    NSString *_domain;
    NSString *_context;
}

@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(nonatomic) int grade; // @synthesize grade=_grade;
@property(nonatomic) _Bool discarded; // @synthesize discarded=_discarded;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) _CPRange *hintRange; // @synthesize hintRange=_hintRange;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasContext;
@property(readonly, nonatomic) _Bool hasGrade;
@property(readonly, nonatomic) _Bool hasDiscarded;
@property(readonly, nonatomic) _Bool hasDomain;
@property(readonly, nonatomic) _Bool hasHintRange;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;
@property(readonly, nonatomic) id feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

