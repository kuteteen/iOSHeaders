//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOAttribution : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
    NSString *_badge;
    NSString *_badgeChecksum;
    unsigned int _dataSet;
    NSString *_logo;
    NSString *_logoChecksum;
    NSString *_name;
    NSMutableArray *_resources;
    NSString *_url;
    CDStruct_2fe9a6d4 _has;
}

+ (Class)resourceType;
@property(nonatomic) unsigned int dataSet; // @synthesize dataSet=_dataSet;
@property(retain, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSString *logoChecksum; // @synthesize logoChecksum=_logoChecksum;
@property(retain, nonatomic) NSString *badgeChecksum; // @synthesize badgeChecksum=_badgeChecksum;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *badge; // @synthesize badge=_badge;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDataSet;
- (void)setRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1;
- (void)addRegion:(struct GEOTileSetRegion)arg1;
- (void)clearRegions;
@property(readonly, nonatomic) struct GEOTileSetRegion *regions;
@property(readonly, nonatomic) unsigned long long regionsCount;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourcesCount;
- (void)addResource:(id)arg1;
- (void)clearResources;
@property(readonly, nonatomic) _Bool hasLogoChecksum;
@property(readonly, nonatomic) _Bool hasBadgeChecksum;
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasLogo;
@property(readonly, nonatomic) _Bool hasBadge;
- (void)dealloc;

@end

