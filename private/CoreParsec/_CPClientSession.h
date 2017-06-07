//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface _CPClientSession : PBCodable <NSCopying>
{
    double _sessionStartSince1970;
    NSString *_agent;
    NSMutableArray *_cpResourceVersions;
    int _previousSessionEndReason;
    NSMutableArray *_sessionFeedbacks;
    NSString *_userGuidString;
    NSString *_version;
    _Bool _firstUseOfTheDay;
    _Bool _removeTimestamps;
    struct {
        unsigned int sessionStartSince1970:1;
        unsigned int firstUseOfTheDay:1;
        unsigned int removeTimestamps:1;
    } _has;
}

+ (Class)sessionFeedbacksType;
+ (Class)cpResourceVersionType;
@property(nonatomic) _Bool removeTimestamps; // @synthesize removeTimestamps=_removeTimestamps;
@property(retain, nonatomic) NSMutableArray *sessionFeedbacks; // @synthesize sessionFeedbacks=_sessionFeedbacks;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableArray *cpResourceVersions; // @synthesize cpResourceVersions=_cpResourceVersions;
@property(nonatomic) int previousSessionEndReason; // @synthesize previousSessionEndReason=_previousSessionEndReason;
@property(nonatomic) double sessionStartSince1970; // @synthesize sessionStartSince1970=_sessionStartSince1970;
@property(retain, nonatomic) NSString *userGuidString; // @synthesize userGuidString=_userGuidString;
@property(retain, nonatomic) NSString *agent; // @synthesize agent=_agent;
@property(nonatomic) _Bool firstUseOfTheDay; // @synthesize firstUseOfTheDay=_firstUseOfTheDay;
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
@property(nonatomic) _Bool hasRemoveTimestamps;
- (id)sessionFeedbacksAtIndex:(unsigned long long)arg1;
- (unsigned long long)sessionFeedbacksCount;
- (void)addSessionFeedbacks:(id)arg1;
- (void)clearSessionFeedbacks;
@property(readonly, nonatomic) _Bool hasVersion;
- (id)cpResourceVersionAtIndex:(unsigned long long)arg1;
- (unsigned long long)cpResourceVersionsCount;
- (void)addCpResourceVersion:(id)arg1;
- (void)clearCpResourceVersions;
- (int)StringAsPreviousSessionEndReason:(id)arg1;
- (id)previousSessionEndReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasSessionStartSince1970;
@property(readonly, nonatomic) _Bool hasUserGuidString;
@property(readonly, nonatomic) _Bool hasAgent;
@property(nonatomic) _Bool hasFirstUseOfTheDay;

@end
