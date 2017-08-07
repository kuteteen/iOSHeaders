//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapItemInitialRequestData, GEOPDMapsIdentifier, NSMutableArray, PBUnknownFields;

@interface GEOPDPlace : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    unsigned long long _preferredMuid;
    unsigned long long _updateVersion;
    NSMutableArray *_components;
    GEOPDMapsIdentifier *_mapsId;
    int _referenceFrame;
    GEOMapItemInitialRequestData *_requestData;
    int _resultProviderId;
    int _status;
    struct {
        unsigned int muid:1;
        unsigned int preferredMuid:1;
        unsigned int updateVersion:1;
        unsigned int referenceFrame:1;
        unsigned int resultProviderId:1;
        unsigned int status:1;
    } _has;
}

+ (Class)componentType;
+ (id)attributionForPlaceData:(id)arg1 type:(int)arg2;
+ (id)failedPlaceDataForMuid:(unsigned long long)arg1;
+ (id)failedPlaceData;
@property(retain, nonatomic) GEOPDMapsIdentifier *mapsId; // @synthesize mapsId=_mapsId;
@property(nonatomic) unsigned long long updateVersion; // @synthesize updateVersion=_updateVersion;
@property(nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
@property(nonatomic) unsigned long long preferredMuid; // @synthesize preferredMuid=_preferredMuid;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
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
@property(readonly, nonatomic) _Bool hasMapsId;
@property(nonatomic) _Bool hasUpdateVersion;
@property(nonatomic) _Bool hasResultProviderId;
- (id)componentAtIndex:(unsigned long long)arg1;
- (unsigned long long)componentsCount;
- (void)addComponent:(id)arg1;
- (void)clearComponents;
@property(nonatomic) _Bool hasPreferredMuid;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) _Bool hasMuid;
- (id)compactDebugDescription;
- (_Bool)isCacheable;
- (_Bool)statusCodeIsValid;
- (void)setFirstSeenTimestamp:(double)arg1;
- (id)copyWithStrippedOptionalData;
- (void)_removeETAComponents;
- (id)copyWithoutETAComponents;
- (int)placeDisplayType;
- (id)businessURL;
- (_Bool)isStandAloneBrand;
- (_Bool)isDisputed;
- (id)spokenNameForLocale:(id)arg1;
- (id)bestName;
- (id)_entityName;
- (id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1;
- (_Bool)hasExpiredComponentsAsOf:(double)arg1;
- (_Bool)phoneNumberOptsOutOfAds:(id)arg1;
- (id)phoneNumbers;
- (void)enumerateValidComponentValuesOfType:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateComponentValuesOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)successfulComponentWithValuesOfType:(int)arg1;
- (void)enumerateValidComponentWithValuesOfType:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)componentOfType:(int)arg1 options:(unsigned long long)arg2;
- (void)enumerateComponentOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateValidComponentsWithValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateComponentsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isStringIndicatingPoiInsideWestfield:(id)arg1;
@property(readonly, nonatomic, getter=isSupportedVenuePOI) _Bool supportedVenuePOI;
@property(readonly, nonatomic, getter=isSupportedVenue) _Bool supportedVenue;
@property(retain, nonatomic) GEOMapItemInitialRequestData *requestData;
@property(readonly, nonatomic) _Bool hasRequestData;
- (int)StringAsReferenceFrame:(id)arg1;
- (id)referenceFrameAsString:(int)arg1;
@property(nonatomic) _Bool hasReferenceFrame;
@property(nonatomic) int referenceFrame;
- (id)geoMapItemWithDetourInfo:(id)arg1;
- (id)geoMapItem;

@end

