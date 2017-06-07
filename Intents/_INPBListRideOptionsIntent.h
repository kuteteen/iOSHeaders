//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBIntentMetadata, _INPBLocation;

@interface _INPBListRideOptionsIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBLocation *_dropOffLocation;
    _INPBIntentMetadata *_intentMetadata;
    _INPBLocation *_pickupLocation;
}

+ (id)options;
@property(retain, nonatomic) _INPBLocation *dropOffLocation; // @synthesize dropOffLocation=_dropOffLocation;
@property(retain, nonatomic) _INPBLocation *pickupLocation; // @synthesize pickupLocation=_pickupLocation;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
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
@property(readonly, nonatomic) _Bool hasDropOffLocation;
@property(readonly, nonatomic) _Bool hasPickupLocation;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end

