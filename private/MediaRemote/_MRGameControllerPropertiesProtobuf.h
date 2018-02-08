//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface _MRGameControllerPropertiesProtobuf : PBCodable <NSCopying>
{
    int _buttonAUpDelay;
    unsigned int _playerIndex;
    int _profile;
    NSString *_vendorName;
    _Bool _supportsExtendedMotion;
    struct {
        unsigned int buttonAUpDelay:1;
        unsigned int playerIndex:1;
        unsigned int profile:1;
        unsigned int supportsExtendedMotion:1;
    } _has;
}

@property(nonatomic) _Bool supportsExtendedMotion; // @synthesize supportsExtendedMotion=_supportsExtendedMotion;
@property(nonatomic) int buttonAUpDelay; // @synthesize buttonAUpDelay=_buttonAUpDelay;
@property(retain, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(nonatomic) unsigned int playerIndex; // @synthesize playerIndex=_playerIndex;
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
@property(nonatomic) _Bool hasSupportsExtendedMotion;
- (int)StringAsProfile:(id)arg1;
- (id)profileAsString:(int)arg1;
@property(nonatomic) _Bool hasProfile;
@property(nonatomic) int profile; // @synthesize profile=_profile;
@property(nonatomic) _Bool hasButtonAUpDelay;
@property(readonly, nonatomic) _Bool hasVendorName;
@property(nonatomic) _Bool hasPlayerIndex;

@end

