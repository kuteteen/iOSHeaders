//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchKit/NSCopying-Protocol.h>

@class NSString;

@interface SPProtoAudioFilePlayerAssetUpdateMetaData : PBCodable <NSCopying>
{
    double _duration;
    NSString *_albumTitle;
    NSString *_artist;
    NSString *_identifier;
    NSString *_title;
    NSString *_uRL;
    struct {
        unsigned int duration:1;
    } _has;
}

@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
@property(readonly, nonatomic) _Bool hasArtist;
@property(readonly, nonatomic) _Bool hasAlbumTitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasURL;
- (id)sockPuppetMessage;

@end

