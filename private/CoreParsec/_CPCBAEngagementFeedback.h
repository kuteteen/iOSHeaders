//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPCBAEngagementFeedback.h"
#import "_CPProcessableFeedback.h"

@class NSData, NSDictionary, NSString;

@interface _CPCBAEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPCBAEngagementFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int queryId:1;
        unsigned int cbaType:1;
    } _has;
    int _cbaType;
    unsigned long long _timestamp;
    unsigned long long _queryId;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int cbaType; // @synthesize cbaType=_cbaType;
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasCbaType;
@property(readonly, nonatomic) _Bool hasQueryId;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)init;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end
