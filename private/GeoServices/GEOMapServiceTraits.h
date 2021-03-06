//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOAutomobileOptions, GEOLocation, GEOMapRegion, GEOPDVenueIdentifier, GEOTraitsTransitScheduleFilter, GEOTransitOptions, GEOWalkingOptions, NSMutableArray, NSString, PBUnknownFields;

@interface GEOMapServiceTraits : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOSessionID _sessionId;
    CDStruct_95bda58d _engineTypes;
    CDStruct_95bda58d _knownClientResolvedTypes;
    CDStruct_95bda58d _transportTypes;
    double _carHeadunitPixelHeight;
    double _carHeadunitPixelWidth;
    double _mapZoomLevel;
    double _sessionRelativeTimestamp;
    int _action;
    NSString *_analyticsAppIdentifier;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    GEOAutomobileOptions *_automobileOptions;
    int _carHeadunitConnectionType;
    int _carHeadunitInteractionModel;
    NSString *_carHeadunitManufacturer;
    NSString *_carHeadunitModel;
    int _deviceBatteryState;
    NSMutableArray *_deviceDisplayLanguages;
    int _deviceInterfaceOrientation;
    NSString *_deviceKeyboardLocale;
    GEOLocation *_deviceLocation;
    NSString *_deviceSpokenLocale;
    NSString *_displayRegion;
    NSMutableArray *_historicalLocations;
    unsigned int _httpRequestPriority;
    GEOMapRegion *_mapRegion;
    int _mode;
    NSMutableArray *_photoSizes;
    unsigned int _photosCount;
    NSString *_providerID;
    int _requestMode;
    NSMutableArray *_reviewUserPhotoSizes;
    unsigned int _reviewUserPhotosCount;
    unsigned int _sequenceNumber;
    int _source;
    unsigned int _timeSinceMapEnteredForeground;
    unsigned int _timeSinceMapViewportChanged;
    GEOTransitOptions *_transitOptions;
    GEOTraitsTransitScheduleFilter *_transitScheduleFilter;
    GEOPDVenueIdentifier *_venueIdentifier;
    GEOWalkingOptions *_walkingOptions;
    _Bool _deviceInVehicle;
    _Bool _isAPICall;
    _Bool _isRedoSearch;
    _Bool _navigating;
    _Bool _supportDirectionIntentAutocomplete;
    _Bool _supportDirectionIntentSearch;
    _Bool _supportDymSuggestion;
    _Bool _supportUnresolvedDirectionIntent;
    _Bool _useBackgroundUrl;
    _Bool _wantsBrandIcon;
    struct {
        unsigned int sessionId:1;
        unsigned int carHeadunitPixelHeight:1;
        unsigned int carHeadunitPixelWidth:1;
        unsigned int mapZoomLevel:1;
        unsigned int sessionRelativeTimestamp:1;
        unsigned int action:1;
        unsigned int carHeadunitConnectionType:1;
        unsigned int carHeadunitInteractionModel:1;
        unsigned int deviceBatteryState:1;
        unsigned int deviceInterfaceOrientation:1;
        unsigned int httpRequestPriority:1;
        unsigned int mode:1;
        unsigned int photosCount:1;
        unsigned int requestMode:1;
        unsigned int reviewUserPhotosCount:1;
        unsigned int sequenceNumber:1;
        unsigned int source:1;
        unsigned int timeSinceMapEnteredForeground:1;
        unsigned int timeSinceMapViewportChanged:1;
        unsigned int deviceInVehicle:1;
        unsigned int isAPICall:1;
        unsigned int isRedoSearch:1;
        unsigned int navigating:1;
        unsigned int supportDirectionIntentAutocomplete:1;
        unsigned int supportDirectionIntentSearch:1;
        unsigned int supportDymSuggestion:1;
        unsigned int supportUnresolvedDirectionIntent:1;
        unsigned int useBackgroundUrl:1;
        unsigned int wantsBrandIcon:1;
    } _has;
}

+ (Class)historicalLocationsType;
+ (Class)reviewUserPhotoSizesType;
+ (Class)photoSizesType;
+ (Class)deviceDisplayLanguageType;
@property(nonatomic) _Bool supportUnresolvedDirectionIntent; // @synthesize supportUnresolvedDirectionIntent=_supportUnresolvedDirectionIntent;
@property(nonatomic) _Bool supportDirectionIntentAutocomplete; // @synthesize supportDirectionIntentAutocomplete=_supportDirectionIntentAutocomplete;
@property(nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property(retain, nonatomic) NSString *analyticsAppIdentifier; // @synthesize analyticsAppIdentifier=_analyticsAppIdentifier;
@property(nonatomic) unsigned int httpRequestPriority; // @synthesize httpRequestPriority=_httpRequestPriority;
@property(nonatomic) _Bool useBackgroundUrl; // @synthesize useBackgroundUrl=_useBackgroundUrl;
@property(nonatomic) _Bool deviceInVehicle; // @synthesize deviceInVehicle=_deviceInVehicle;
@property(retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier; // @synthesize venueIdentifier=_venueIdentifier;
@property(nonatomic) _Bool wantsBrandIcon; // @synthesize wantsBrandIcon=_wantsBrandIcon;
@property(nonatomic) _Bool supportDymSuggestion; // @synthesize supportDymSuggestion=_supportDymSuggestion;
@property(nonatomic) _Bool supportDirectionIntentSearch; // @synthesize supportDirectionIntentSearch=_supportDirectionIntentSearch;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(retain, nonatomic) NSMutableArray *historicalLocations; // @synthesize historicalLocations=_historicalLocations;
@property(nonatomic) _Bool isRedoSearch; // @synthesize isRedoSearch=_isRedoSearch;
@property(nonatomic) _Bool navigating; // @synthesize navigating=_navigating;
@property(retain, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property(retain, nonatomic) NSString *displayRegion; // @synthesize displayRegion=_displayRegion;
@property(nonatomic) double mapZoomLevel; // @synthesize mapZoomLevel=_mapZoomLevel;
@property(retain, nonatomic) GEOTraitsTransitScheduleFilter *transitScheduleFilter; // @synthesize transitScheduleFilter=_transitScheduleFilter;
@property(nonatomic) double carHeadunitPixelHeight; // @synthesize carHeadunitPixelHeight=_carHeadunitPixelHeight;
@property(nonatomic) double carHeadunitPixelWidth; // @synthesize carHeadunitPixelWidth=_carHeadunitPixelWidth;
@property(retain, nonatomic) NSString *carHeadunitModel; // @synthesize carHeadunitModel=_carHeadunitModel;
@property(retain, nonatomic) NSString *carHeadunitManufacturer; // @synthesize carHeadunitManufacturer=_carHeadunitManufacturer;
@property(nonatomic) unsigned int timeSinceMapViewportChanged; // @synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged;
@property(nonatomic) unsigned int timeSinceMapEnteredForeground; // @synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground;
@property(nonatomic) unsigned int reviewUserPhotosCount; // @synthesize reviewUserPhotosCount=_reviewUserPhotosCount;
@property(retain, nonatomic) NSMutableArray *reviewUserPhotoSizes; // @synthesize reviewUserPhotoSizes=_reviewUserPhotoSizes;
@property(nonatomic) unsigned int photosCount; // @synthesize photosCount=_photosCount;
@property(retain, nonatomic) NSMutableArray *photoSizes; // @synthesize photoSizes=_photoSizes;
@property(nonatomic) _Bool isAPICall; // @synthesize isAPICall=_isAPICall;
@property(retain, nonatomic) NSString *deviceSpokenLocale; // @synthesize deviceSpokenLocale=_deviceSpokenLocale;
@property(retain, nonatomic) NSString *deviceKeyboardLocale; // @synthesize deviceKeyboardLocale=_deviceKeyboardLocale;
@property(retain, nonatomic) NSMutableArray *deviceDisplayLanguages; // @synthesize deviceDisplayLanguages=_deviceDisplayLanguages;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOLocation *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(retain, nonatomic) NSString *appMinorVersion; // @synthesize appMinorVersion=_appMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion; // @synthesize appMajorVersion=_appMajorVersion;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) struct GEOSessionID sessionId; // @synthesize sessionId=_sessionId;
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
@property(nonatomic) _Bool hasSupportUnresolvedDirectionIntent;
@property(nonatomic) _Bool hasSupportDirectionIntentAutocomplete;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
@property(readonly, nonatomic) _Bool hasAnalyticsAppIdentifier;
@property(nonatomic) _Bool hasHttpRequestPriority;
@property(nonatomic) _Bool hasUseBackgroundUrl;
@property(nonatomic) _Bool hasDeviceInVehicle;
@property(readonly, nonatomic) _Bool hasVenueIdentifier;
@property(nonatomic) _Bool hasWantsBrandIcon;
- (int)StringAsKnownClientResolvedTypes:(id)arg1;
- (id)knownClientResolvedTypesAsString:(int)arg1;
- (void)setKnownClientResolvedTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1;
- (void)addKnownClientResolvedType:(int)arg1;
- (void)clearKnownClientResolvedTypes;
@property(readonly, nonatomic) int *knownClientResolvedTypes;
@property(readonly, nonatomic) unsigned long long knownClientResolvedTypesCount;
@property(nonatomic) _Bool hasSupportDymSuggestion;
@property(nonatomic) _Bool hasSupportDirectionIntentSearch;
- (int)StringAsRequestMode:(id)arg1;
- (id)requestModeAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestMode;
@property(nonatomic) int requestMode; // @synthesize requestMode=_requestMode;
- (int)StringAsEngineTypes:(id)arg1;
- (id)engineTypesAsString:(int)arg1;
- (void)setEngineTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (void)addEngineType:(int)arg1;
- (void)clearEngineTypes;
@property(readonly, nonatomic) int *engineTypes;
@property(readonly, nonatomic) unsigned long long engineTypesCount;
@property(readonly, nonatomic) _Bool hasWalkingOptions;
@property(readonly, nonatomic) _Bool hasTransitOptions;
@property(readonly, nonatomic) _Bool hasAutomobileOptions;
- (id)historicalLocationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)historicalLocationsCount;
- (void)addHistoricalLocations:(id)arg1;
- (void)clearHistoricalLocations;
@property(nonatomic) _Bool hasIsRedoSearch;
@property(nonatomic) _Bool hasNavigating;
- (int)StringAsCarHeadunitConnectionType:(id)arg1;
- (id)carHeadunitConnectionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCarHeadunitConnectionType;
@property(nonatomic) int carHeadunitConnectionType; // @synthesize carHeadunitConnectionType=_carHeadunitConnectionType;
- (int)StringAsDeviceBatteryState:(id)arg1;
- (id)deviceBatteryStateAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceBatteryState;
@property(nonatomic) int deviceBatteryState; // @synthesize deviceBatteryState=_deviceBatteryState;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceInterfaceOrientation;
@property(nonatomic) int deviceInterfaceOrientation; // @synthesize deviceInterfaceOrientation=_deviceInterfaceOrientation;
@property(readonly, nonatomic) _Bool hasProviderID;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
- (int)StringAsMode:(id)arg1;
- (id)modeAsString:(int)arg1;
@property(nonatomic) _Bool hasMode;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool hasMapZoomLevel;
@property(readonly, nonatomic) _Bool hasTransitScheduleFilter;
@property(nonatomic) _Bool hasCarHeadunitPixelHeight;
@property(nonatomic) _Bool hasCarHeadunitPixelWidth;
@property(readonly, nonatomic) _Bool hasCarHeadunitModel;
@property(readonly, nonatomic) _Bool hasCarHeadunitManufacturer;
- (int)StringAsCarHeadunitInteractionModel:(id)arg1;
- (id)carHeadunitInteractionModelAsString:(int)arg1;
@property(nonatomic) _Bool hasCarHeadunitInteractionModel;
@property(nonatomic) int carHeadunitInteractionModel; // @synthesize carHeadunitInteractionModel=_carHeadunitInteractionModel;
- (int)StringAsAction:(id)arg1;
- (id)actionAsString:(int)arg1;
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) _Bool hasTimeSinceMapViewportChanged;
@property(nonatomic) _Bool hasTimeSinceMapEnteredForeground;
@property(nonatomic) _Bool hasReviewUserPhotosCount;
- (id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)reviewUserPhotoSizesCount;
- (void)addReviewUserPhotoSizes:(id)arg1;
- (void)clearReviewUserPhotoSizes;
@property(nonatomic) _Bool hasPhotosCount;
- (id)photoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoSizesCount;
- (void)addPhotoSizes:(id)arg1;
- (void)clearPhotoSizes;
- (int)StringAsSource:(id)arg1;
- (id)sourceAsString:(int)arg1;
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) _Bool hasIsAPICall;
@property(readonly, nonatomic) _Bool hasDeviceSpokenLocale;
@property(readonly, nonatomic) _Bool hasDeviceKeyboardLocale;
- (id)deviceDisplayLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceDisplayLanguagesCount;
- (void)addDeviceDisplayLanguage:(id)arg1;
- (void)clearDeviceDisplayLanguages;
@property(readonly, nonatomic) _Bool hasMapRegion;
- (int)StringAsTransportTypes:(id)arg1;
- (id)transportTypesAsString:(int)arg1;
- (void)setTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (void)addTransportType:(int)arg1;
- (void)clearTransportTypes;
@property(readonly, nonatomic) int *transportTypes;
@property(readonly, nonatomic) unsigned long long transportTypesCount;
@property(readonly, nonatomic) _Bool hasDeviceLocation;
@property(readonly, nonatomic) _Bool hasAppMinorVersion;
@property(readonly, nonatomic) _Bool hasAppMajorVersion;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) _Bool hasSessionId;
- (void)dealloc;
- (int)uiActionType;

@end

