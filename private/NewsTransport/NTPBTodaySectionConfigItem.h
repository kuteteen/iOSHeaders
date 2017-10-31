//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NTPBTodaySectionConfigArticle, NTPBTodaySectionConfigWebEmbed;

@interface NTPBTodaySectionConfigItem : PBCodable <NSCopying>
{
    NTPBTodaySectionConfigArticle *_article;
    int _itemType;
    NTPBTodaySectionConfigWebEmbed *_webEmbed;
    struct {
        unsigned int itemType:1;
    } _has;
}

@property(retain, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed; // @synthesize webEmbed=_webEmbed;
@property(retain, nonatomic) NTPBTodaySectionConfigArticle *article; // @synthesize article=_article;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasWebEmbed;
@property(readonly, nonatomic) _Bool hasArticle;
@property(nonatomic) _Bool hasItemType;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
- (void)dealloc;

@end

