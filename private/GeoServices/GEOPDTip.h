//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDUser, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDTip : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _tipTime;
    NSMutableArray *_snippets;
    NSString *_tipId;
    GEOPDUser *_tipster;
    struct {
        unsigned int tipTime:1;
    } _has;
}

+ (Class)snippetType;
+ (id)tipsForPlaceData:(id)arg1;
@property(retain, nonatomic) NSString *tipId; // @synthesize tipId=_tipId;
@property(retain, nonatomic) GEOPDUser *tipster; // @synthesize tipster=_tipster;
@property(nonatomic) double tipTime; // @synthesize tipTime=_tipTime;
@property(retain, nonatomic) NSMutableArray *snippets; // @synthesize snippets=_snippets;
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
@property(readonly, nonatomic) _Bool hasTipId;
@property(readonly, nonatomic) _Bool hasTipster;
@property(nonatomic) _Bool hasTipTime;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetsCount;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;

@end

