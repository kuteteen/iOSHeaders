//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _CPPARRankerFeedback : PBCodable <NSCopying>
{
    double _blendingDuration;
    unsigned long long _rankingDurationMilliseconds;
    unsigned long long _resultsRanked;
    unsigned long long _timestamp;
    NSMutableArray *_sections;
    _Bool _didTimeOut;
    struct {
        unsigned int blendingDuration:1;
        unsigned int rankingDurationMilliseconds:1;
        unsigned int resultsRanked:1;
        unsigned int didTimeOut:1;
    } _has;
}

+ (Class)sectionsType;
@property(nonatomic) unsigned long long rankingDurationMilliseconds; // @synthesize rankingDurationMilliseconds=_rankingDurationMilliseconds;
@property(nonatomic) unsigned long long resultsRanked; // @synthesize resultsRanked=_resultsRanked;
@property(nonatomic) _Bool didTimeOut; // @synthesize didTimeOut=_didTimeOut;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) double blendingDuration; // @synthesize blendingDuration=_blendingDuration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRankingDurationMilliseconds;
@property(nonatomic) _Bool hasResultsRanked;
@property(nonatomic) _Bool hasDidTimeOut;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)addSections:(id)arg1;
- (void)clearSections;
@property(nonatomic) _Bool hasBlendingDuration;

@end
