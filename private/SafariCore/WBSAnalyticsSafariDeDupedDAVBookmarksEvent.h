//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface WBSAnalyticsSafariDedupedDAVBookmarksEvent : PBCodable <NSCopying>
{
    unsigned long long _dedupeCount;
    unsigned long long _foldersWithDupesCount;
    unsigned long long _timestamp;
    struct {
        unsigned int dedupeCount:1;
        unsigned int foldersWithDupesCount:1;
        unsigned int timestamp:1;
    } _has;
}

@property(nonatomic) unsigned long long foldersWithDupesCount; // @synthesize foldersWithDupesCount=_foldersWithDupesCount;
@property(nonatomic) unsigned long long dedupeCount; // @synthesize dedupeCount=_dedupeCount;
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
@property(nonatomic) _Bool hasFoldersWithDupesCount;
@property(nonatomic) _Bool hasDedupeCount;
@property(nonatomic) _Bool hasTimestamp;

@end

