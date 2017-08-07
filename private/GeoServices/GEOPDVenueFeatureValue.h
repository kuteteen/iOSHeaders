//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDFeatureBuilding, GEOPDFeaturePOI, GEOPDFeatureVenue, PBUnknownFields;

@interface GEOPDVenueFeatureValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDFeatureBuilding *_featureBuilding;
    GEOPDFeaturePOI *_featurePoi;
    GEOPDFeatureVenue *_featureVenue;
}

@property(retain, nonatomic) GEOPDFeaturePOI *featurePoi; // @synthesize featurePoi=_featurePoi;
@property(retain, nonatomic) GEOPDFeatureBuilding *featureBuilding; // @synthesize featureBuilding=_featureBuilding;
@property(retain, nonatomic) GEOPDFeatureVenue *featureVenue; // @synthesize featureVenue=_featureVenue;
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
@property(readonly, nonatomic) _Bool hasFeaturePoi;
@property(readonly, nonatomic) _Bool hasFeatureBuilding;
@property(readonly, nonatomic) _Bool hasFeatureVenue;

@end

