//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLogMsgEventBatchTrafficProbe, GEOLogMsgEventCacheHit, GEOLogMsgEventClientACSuggestions, GEOLogMsgEventCommuteWindow, GEOLogMsgEventDirections, GEOLogMsgEventFullNavTrace, GEOLogMsgEventGenericAppError, GEOLogMsgEventListInteractionSession, GEOLogMsgEventLogFramework, GEOLogMsgEventMapLaunch, GEOLogMsgEventMapsWidgetsInteractionSession, GEOLogMsgEventNetwork, GEOLogMsgEventPlaceDataCache, GEOLogMsgEventProactiveSuggestionInteractionSession, GEOLogMsgEventRealtimeTrafficProbe, GEOLogMsgEventRefineSearchSession, GEOLogMsgEventStaleResource, GEOLogMsgEventStateTiming, GEOLogMsgEventTelemetric, GEOLogMsgEventTileSetState, GEOLogMsgEventTimeToLeaveHypothesis, GEOLogMsgEventTimeToLeaveInitialTravelTime, GEOLogMsgEventTransitAppLaunch, GEOLogMsgEventUserAction, LOGMSGEVENTLogMsgEventRideBookedSession, LOGMSGEVENTLogMsgEventRideBookingSession, LOGMSGEVENTLogMsgEventTableBookedSession, LOGMSGEVENTLogMsgEventTableBookingSession, NSMutableArray;

@interface GEOLogMsgEvent : PBCodable <NSCopying>
{
    GEOLogMsgEventBatchTrafficProbe *_batchTrafficProbeCollection;
    GEOLogMsgEventCacheHit *_cacheHitEvent;
    GEOLogMsgEventClientACSuggestions *_clientAcSuggestions;
    GEOLogMsgEventCommuteWindow *_commuteWindow;
    GEOLogMsgEventDirections *_directionsEvent;
    int _eventType;
    GEOLogMsgEventFullNavTrace *_fullNavTrace;
    GEOLogMsgEventGenericAppError *_genericAppErrorEvent;
    GEOLogMsgEventListInteractionSession *_listInteractionSession;
    GEOLogMsgEventLogFramework *_logFrameworkEvent;
    NSMutableArray *_logMsgStates;
    GEOLogMsgEventMapLaunch *_mapLaunchEvent;
    GEOLogMsgEventMapsWidgetsInteractionSession *_mapsWidgetsInteractionSession;
    GEOLogMsgEventNetwork *_networkEvent;
    GEOLogMsgEventPlaceDataCache *_placeDataCacheEvent;
    GEOLogMsgEventProactiveSuggestionInteractionSession *_proactiveSuggestionInteractionSessionEvent;
    GEOLogMsgEventRealtimeTrafficProbe *_realtimeTrafficProbeCollection;
    GEOLogMsgEventRefineSearchSession *_refineSearchSession;
    LOGMSGEVENTLogMsgEventRideBookedSession *_rideBookedSession;
    LOGMSGEVENTLogMsgEventRideBookingSession *_rideBookingSession;
    GEOLogMsgEventStaleResource *_staleResourceEvent;
    GEOLogMsgEventStateTiming *_stateTimingEvent;
    LOGMSGEVENTLogMsgEventTableBookedSession *_tableBookedSession;
    LOGMSGEVENTLogMsgEventTableBookingSession *_tableBookingSession;
    GEOLogMsgEventTelemetric *_telemetric;
    GEOLogMsgEventTileSetState *_tileSetStateEvent;
    GEOLogMsgEventTimeToLeaveHypothesis *_timeToLeaveHypothesisEvent;
    GEOLogMsgEventTimeToLeaveInitialTravelTime *_timeToLeaveInitialTravelTimeEvent;
    GEOLogMsgEventTransitAppLaunch *_transitAppLaunchEvent;
    GEOLogMsgEventUserAction *_userActionEvent;
    struct {
        unsigned int eventType:1;
    } _has;
}

+ (Class)logMsgStateType;
+ (_Bool)logMsgEventType:(int)arg1 acceptsLogMsgStateType:(int)arg2;
+ (id)acceptedLogMsgStatesForLogMsgEventType:(int)arg1;
+ (id)acceptedLogMsgStates;
+ (void)_initializeAcceptedLogMsgStateTypes;
@property(retain, nonatomic) GEOLogMsgEventGenericAppError *genericAppErrorEvent; // @synthesize genericAppErrorEvent=_genericAppErrorEvent;
@property(retain, nonatomic) GEOLogMsgEventCommuteWindow *commuteWindow; // @synthesize commuteWindow=_commuteWindow;
@property(retain, nonatomic) GEOLogMsgEventBatchTrafficProbe *batchTrafficProbeCollection; // @synthesize batchTrafficProbeCollection=_batchTrafficProbeCollection;
@property(retain, nonatomic) GEOLogMsgEventRealtimeTrafficProbe *realtimeTrafficProbeCollection; // @synthesize realtimeTrafficProbeCollection=_realtimeTrafficProbeCollection;
@property(retain, nonatomic) GEOLogMsgEventClientACSuggestions *clientAcSuggestions; // @synthesize clientAcSuggestions=_clientAcSuggestions;
@property(retain, nonatomic) GEOLogMsgEventTelemetric *telemetric; // @synthesize telemetric=_telemetric;
@property(retain, nonatomic) GEOLogMsgEventFullNavTrace *fullNavTrace; // @synthesize fullNavTrace=_fullNavTrace;
@property(retain, nonatomic) GEOLogMsgEventStaleResource *staleResourceEvent; // @synthesize staleResourceEvent=_staleResourceEvent;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventTableBookedSession *tableBookedSession; // @synthesize tableBookedSession=_tableBookedSession;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventTableBookingSession *tableBookingSession; // @synthesize tableBookingSession=_tableBookingSession;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventRideBookedSession *rideBookedSession; // @synthesize rideBookedSession=_rideBookedSession;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventRideBookingSession *rideBookingSession; // @synthesize rideBookingSession=_rideBookingSession;
@property(retain, nonatomic) GEOLogMsgEventMapLaunch *mapLaunchEvent; // @synthesize mapLaunchEvent=_mapLaunchEvent;
@property(retain, nonatomic) GEOLogMsgEventProactiveSuggestionInteractionSession *proactiveSuggestionInteractionSessionEvent; // @synthesize proactiveSuggestionInteractionSessionEvent=_proactiveSuggestionInteractionSessionEvent;
@property(retain, nonatomic) GEOLogMsgEventRefineSearchSession *refineSearchSession; // @synthesize refineSearchSession=_refineSearchSession;
@property(retain, nonatomic) GEOLogMsgEventListInteractionSession *listInteractionSession; // @synthesize listInteractionSession=_listInteractionSession;
@property(retain, nonatomic) GEOLogMsgEventMapsWidgetsInteractionSession *mapsWidgetsInteractionSession; // @synthesize mapsWidgetsInteractionSession=_mapsWidgetsInteractionSession;
@property(retain, nonatomic) GEOLogMsgEventLogFramework *logFrameworkEvent; // @synthesize logFrameworkEvent=_logFrameworkEvent;
@property(retain, nonatomic) GEOLogMsgEventTimeToLeaveInitialTravelTime *timeToLeaveInitialTravelTimeEvent; // @synthesize timeToLeaveInitialTravelTimeEvent=_timeToLeaveInitialTravelTimeEvent;
@property(retain, nonatomic) GEOLogMsgEventTimeToLeaveHypothesis *timeToLeaveHypothesisEvent; // @synthesize timeToLeaveHypothesisEvent=_timeToLeaveHypothesisEvent;
@property(retain, nonatomic) GEOLogMsgEventTransitAppLaunch *transitAppLaunchEvent; // @synthesize transitAppLaunchEvent=_transitAppLaunchEvent;
@property(retain, nonatomic) GEOLogMsgEventDirections *directionsEvent; // @synthesize directionsEvent=_directionsEvent;
@property(retain, nonatomic) GEOLogMsgEventCacheHit *cacheHitEvent; // @synthesize cacheHitEvent=_cacheHitEvent;
@property(retain, nonatomic) GEOLogMsgEventNetwork *networkEvent; // @synthesize networkEvent=_networkEvent;
@property(retain, nonatomic) GEOLogMsgEventPlaceDataCache *placeDataCacheEvent; // @synthesize placeDataCacheEvent=_placeDataCacheEvent;
@property(retain, nonatomic) GEOLogMsgEventTileSetState *tileSetStateEvent; // @synthesize tileSetStateEvent=_tileSetStateEvent;
@property(retain, nonatomic) GEOLogMsgEventStateTiming *stateTimingEvent; // @synthesize stateTimingEvent=_stateTimingEvent;
@property(retain, nonatomic) GEOLogMsgEventUserAction *userActionEvent; // @synthesize userActionEvent=_userActionEvent;
@property(retain, nonatomic) NSMutableArray *logMsgStates; // @synthesize logMsgStates=_logMsgStates;
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
@property(readonly, nonatomic) _Bool hasGenericAppErrorEvent;
@property(readonly, nonatomic) _Bool hasCommuteWindow;
@property(readonly, nonatomic) _Bool hasBatchTrafficProbeCollection;
@property(readonly, nonatomic) _Bool hasRealtimeTrafficProbeCollection;
@property(readonly, nonatomic) _Bool hasClientAcSuggestions;
@property(readonly, nonatomic) _Bool hasTelemetric;
@property(readonly, nonatomic) _Bool hasFullNavTrace;
@property(readonly, nonatomic) _Bool hasStaleResourceEvent;
@property(readonly, nonatomic) _Bool hasTableBookedSession;
@property(readonly, nonatomic) _Bool hasTableBookingSession;
@property(readonly, nonatomic) _Bool hasRideBookedSession;
@property(readonly, nonatomic) _Bool hasRideBookingSession;
@property(readonly, nonatomic) _Bool hasMapLaunchEvent;
@property(readonly, nonatomic) _Bool hasProactiveSuggestionInteractionSessionEvent;
@property(readonly, nonatomic) _Bool hasRefineSearchSession;
@property(readonly, nonatomic) _Bool hasListInteractionSession;
@property(readonly, nonatomic) _Bool hasMapsWidgetsInteractionSession;
@property(readonly, nonatomic) _Bool hasLogFrameworkEvent;
@property(readonly, nonatomic) _Bool hasTimeToLeaveInitialTravelTimeEvent;
@property(readonly, nonatomic) _Bool hasTimeToLeaveHypothesisEvent;
@property(readonly, nonatomic) _Bool hasTransitAppLaunchEvent;
@property(readonly, nonatomic) _Bool hasDirectionsEvent;
@property(readonly, nonatomic) _Bool hasCacheHitEvent;
@property(readonly, nonatomic) _Bool hasNetworkEvent;
@property(readonly, nonatomic) _Bool hasPlaceDataCacheEvent;
@property(readonly, nonatomic) _Bool hasTileSetStateEvent;
@property(readonly, nonatomic) _Bool hasStateTimingEvent;
@property(readonly, nonatomic) _Bool hasUserActionEvent;
- (int)StringAsEventType:(id)arg1;
- (id)eventTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
- (id)logMsgStateAtIndex:(unsigned long long)arg1;
- (unsigned long long)logMsgStatesCount;
- (void)addLogMsgState:(id)arg1;
- (void)clearLogMsgStates;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)unregisterLogMsgStatesOfTypes:(id)arg1;
- (id)logMsgStateOfType:(int)arg1 stateOrigin:(id)arg2;
- (id)logMsgStateOfType:(int)arg1;
- (unsigned long long)numberOfLogMsgStatesOfType:(int)arg1 stateOrigin:(id)arg2;
- (unsigned long long)numberOfLogMsgStatesOfType:(int)arg1;
- (_Bool)acceptsLogMsgStateType:(int)arg1;

@end

