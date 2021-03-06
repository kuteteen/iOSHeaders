//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface NNMKProtoAccountAdditionOrUpdate : PBCodable <NSCopying>
{
    NSString *_accountId;
    NSString *_displayName;
    NSMutableArray *_emails;
    unsigned int _fullSyncVersion;
    NSMutableArray *_mailboxes;
    _Bool _shouldArchive;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int shouldArchive:1;
    } _has;
}

+ (Class)mailboxesType;
+ (Class)emailType;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property(retain, nonatomic) NSMutableArray *mailboxes; // @synthesize mailboxes=_mailboxes;
@property(retain, nonatomic) NSMutableArray *emails; // @synthesize emails=_emails;
@property(nonatomic) _Bool shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
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
@property(nonatomic) _Bool hasFullSyncVersion;
- (id)mailboxesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mailboxesCount;
- (void)addMailboxes:(id)arg1;
- (void)clearMailboxes;
- (id)emailAtIndex:(unsigned long long)arg1;
- (unsigned long long)emailsCount;
- (void)addEmail:(id)arg1;
- (void)clearEmails;
@property(nonatomic) _Bool hasShouldArchive;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasAccountId;

@end

