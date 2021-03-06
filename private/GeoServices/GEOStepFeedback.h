//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface GEOStepFeedback : PBCodable <NSCopying>
{
    double _completionTimeStamp;
    NSData *_routeID;
    unsigned int _routeIndex;
    unsigned int _stepID;
    NSData *_tripID;
    _Bool _completedStep;
    _Bool _lightGuidance;
    struct {
        unsigned int completionTimeStamp:1;
        unsigned int routeIndex:1;
        unsigned int stepID:1;
        unsigned int completedStep:1;
        unsigned int lightGuidance:1;
    } _has;
}

@property(retain, nonatomic) NSData *tripID; // @synthesize tripID=_tripID;
@property(nonatomic) _Bool lightGuidance; // @synthesize lightGuidance=_lightGuidance;
@property(nonatomic) unsigned int routeIndex; // @synthesize routeIndex=_routeIndex;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(nonatomic) _Bool completedStep; // @synthesize completedStep=_completedStep;
@property(nonatomic) double completionTimeStamp; // @synthesize completionTimeStamp=_completionTimeStamp;
@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
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
@property(readonly, nonatomic) _Bool hasTripID;
@property(nonatomic) _Bool hasLightGuidance;
@property(nonatomic) _Bool hasRouteIndex;
@property(readonly, nonatomic) _Bool hasRouteID;
@property(nonatomic) _Bool hasCompletedStep;
@property(nonatomic) _Bool hasCompletionTimeStamp;
@property(nonatomic) _Bool hasStepID;

@end

