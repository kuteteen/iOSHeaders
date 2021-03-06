//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_logMessages;
}

+ (Class)logMessageType;
@property(retain, nonatomic) NSMutableArray *logMessages; // @synthesize logMessages=_logMessages;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)logMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)logMessagesCount;
- (void)addLogMessage:(id)arg1;
- (void)clearLogMessages;

@end

