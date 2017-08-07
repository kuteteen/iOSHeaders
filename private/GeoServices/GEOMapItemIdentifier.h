//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOPDMapsIdentifier;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    GEOPDMapsIdentifier *_mapsIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (_Bool)isEqualToGEOMapItemIdentifier:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (CDStruct_c3b9c2ee)coordinate;
@property(readonly, nonatomic, getter=hasCoordinate) _Bool hasCoordinate;
@property(readonly, nonatomic) int resultProviderID;
@property(readonly, nonatomic) unsigned long long muid;
- (id)mapsIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCCoder:(id)arg1;
- (id)initWithXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;
- (id)initWithMUID:(unsigned long long)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
- (id)initWithMUID:(unsigned long long)arg1;
- (id)initWithMapsIdentifier:(id)arg1;
- (id)init;

@end

