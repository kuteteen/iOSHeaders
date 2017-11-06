//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDVisualVoicemailTranscriptionStatusChanged : PBCodable <NSCopying>
{
    unsigned long long _failureReason;
    unsigned long long _status;
    unsigned long long _timestamp;
    struct {
        unsigned int failureReason:1;
        unsigned int status:1;
        unsigned int timestamp:1;
    } _has;
}

@property(nonatomic) unsigned long long failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFailureReason;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) _Bool hasTimestamp;

@end

