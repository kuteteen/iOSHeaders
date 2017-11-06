//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface _MRVolumeDidChangeMessageProtobuf : PBCodable <NSCopying>
{
    NSString *_endpointIdentifier;
    NSString *_outputDeviceIdentifier;
    float _volume;
    CDStruct_731552e5 _has;
}

@property(retain, nonatomic) NSString *outputDeviceIdentifier; // @synthesize outputDeviceIdentifier=_outputDeviceIdentifier;
@property(retain, nonatomic) NSString *endpointIdentifier; // @synthesize endpointIdentifier=_endpointIdentifier;
@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOutputDeviceIdentifier;
@property(readonly, nonatomic) _Bool hasEndpointIdentifier;
@property(nonatomic) _Bool hasVolume;
- (void)dealloc;

@end
