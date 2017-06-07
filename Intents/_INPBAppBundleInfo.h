//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields, _INPBAppId, _INPBBuildId;

@interface _INPBAppBundleInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBAppId *_appId;
    _INPBBuildId *_buildId;
    NSMutableArray *_intentSupports;
    NSMutableArray *_localizedProjects;
    NSMutableArray *_supportedPlatforms;
}

+ (Class)supportedPlatformsType;
+ (Class)localizedProjectsType;
+ (Class)intentSupportType;
@property(retain, nonatomic) NSMutableArray *supportedPlatforms; // @synthesize supportedPlatforms=_supportedPlatforms;
@property(retain, nonatomic) _INPBBuildId *buildId; // @synthesize buildId=_buildId;
@property(retain, nonatomic) _INPBAppId *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSMutableArray *localizedProjects; // @synthesize localizedProjects=_localizedProjects;
@property(retain, nonatomic) NSMutableArray *intentSupports; // @synthesize intentSupports=_intentSupports;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)supportedPlatformsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedPlatformsCount;
- (void)addSupportedPlatforms:(id)arg1;
- (void)clearSupportedPlatforms;
@property(readonly, nonatomic) _Bool hasBuildId;
@property(readonly, nonatomic) _Bool hasAppId;
- (id)localizedProjectsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedProjectsCount;
- (void)addLocalizedProjects:(id)arg1;
- (void)clearLocalizedProjects;
- (id)intentSupportAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSupportsCount;
- (void)addIntentSupport:(id)arg1;
- (void)clearIntentSupports;

@end

