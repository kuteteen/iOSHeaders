//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface NTPBLinkTap : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSString *_referencedArticleId;
    int _tapLocationType;
    NSString *_tappedLinkUrl;
    NSString *_webEmbedId;
    int _webEmbedLocation;
    struct {
        unsigned int tapLocationType:1;
        unsigned int webEmbedLocation:1;
    } _has;
}

@property(retain, nonatomic) NSString *webEmbedId; // @synthesize webEmbedId=_webEmbedId;
@property(retain, nonatomic) NSString *tappedLinkUrl; // @synthesize tappedLinkUrl=_tappedLinkUrl;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsWebEmbedLocation:(id)arg1;
- (id)webEmbedLocationAsString:(int)arg1;
@property(nonatomic) _Bool hasWebEmbedLocation;
@property(nonatomic) int webEmbedLocation; // @synthesize webEmbedLocation=_webEmbedLocation;
@property(readonly, nonatomic) _Bool hasWebEmbedId;
@property(readonly, nonatomic) _Bool hasTappedLinkUrl;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(nonatomic) _Bool hasTapLocationType;
@property(nonatomic) int tapLocationType; // @synthesize tapLocationType=_tapLocationType;

@end

