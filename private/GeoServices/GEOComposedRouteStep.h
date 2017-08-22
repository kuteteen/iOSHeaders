//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteLeg, GEOComposedTransitTripRouteStep, GEOInstructionSet, GEOPBTransitStop, GEOStep, GEOTransitStep, NSArray, NSString;
@protocol GEOTransitArtworkDataSource;

@interface GEOComposedRouteStep : NSObject
{
    GEOComposedRoute *_composedRoute;
    GEOStep *_geoStep;
    int _drivingSide;
    unsigned long long _stepIndex;
    struct _NSRange _pointRange;
    struct _NSRange _maneuverPointRange;
    NSString *_maneuverRoadOrExitName;
    NSString *_maneuverRoadName;
    long long _routeLegType;
}

@property(nonatomic) __weak GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
@property(readonly, nonatomic) struct _NSRange maneuverPointRange; // @synthesize maneuverPointRange=_maneuverPointRange;
@property(readonly, nonatomic) long long routeLegType; // @synthesize routeLegType=_routeLegType;
@property(readonly, nonatomic) struct _NSRange pointRange; // @synthesize pointRange=_pointRange;
@property(readonly, nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(readonly, nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property(readonly, nonatomic) GEOStep *geoStep; // @synthesize geoStep=_geoStep;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_MapsCarPlay_isEqual:(id)arg1;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> routeDetailsSecondaryArtwork;
@property(readonly, nonatomic) NSArray *routeDetailsPrimaryArtwork;
@property(readonly, nonatomic) NSArray *steppingArtwork;
@property(readonly, nonatomic) GEOInstructionSet *instructions;
@property(readonly, nonatomic) GEOTransitStep *transitStep;
- (id)firstNameOrBranch;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *closestLogicalBoardOrAlightStep;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *previousAlightingStep;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *nextAlightingStep;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *previousBoardingStep;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *nextBoardingStep;
@property(readonly, nonatomic) GEOPBTransitStop *nextStop;
@property(readonly, nonatomic) GEOPBTransitStop *previousStop;
@property(readonly, nonatomic) unsigned int startTime;
@property(readonly, nonatomic) GEOPBTransitStop *endingStop;
@property(readonly, nonatomic) GEOPBTransitStop *startingStop;
@property(readonly, nonatomic, getter=getNextStep) GEOComposedRouteStep *nextStep;
@property(readonly, nonatomic, getter=getPreviousStep) GEOComposedRouteStep *previousStep;
@property(readonly, nonatomic) unsigned int distance;
@property(readonly, nonatomic) unsigned int stepID;
@property(readonly, nonatomic) unsigned int duration;
@property(readonly, nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) CDStruct_c3b9c2ee endGeoCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee startGeoCoordinate;
@property(readonly, nonatomic) _Bool isArrivalStep;
@property(readonly, nonatomic) _Bool isUncertainArrival;
@property(readonly, nonatomic) NSString *maneuverRoadName;
@property(readonly, nonatomic) NSString *maneuverRoadOrExitName;
@property(readonly, nonatomic) unsigned int maneuverEndPointIndex;
@property(readonly, nonatomic) unsigned int maneuverStartPointIndex;
@property(readonly, nonatomic) unsigned int pointCount;
@property(readonly, nonatomic) unsigned int endPointIndex;
@property(readonly, nonatomic) unsigned int startPointIndex;
@property(readonly, nonatomic) int transportType;
@property(readonly, nonatomic) GEOComposedRouteLeg *leg;
- (id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 routeLegType:(long long)arg3 stepIndex:(unsigned long long)arg4 pointRange:(struct _NSRange)arg5 maneuverPointRange:(struct _NSRange)arg6;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange)arg4;
- (_Bool)shouldPreloadWithHighPriority;
- (_Bool)_belongsToTransferGroup;
@property(readonly, nonatomic) _Bool shouldCreateArrivalGroup;
@property(readonly, nonatomic) _Bool shouldCreateFerryProgressionGroup;
@property(readonly, nonatomic) _Bool shouldCreateTripProgressionGroup;
@property(readonly, nonatomic) _Bool shouldCreateTransferGroup;
@property(readonly, nonatomic) _Bool shouldCreateAlightExitGroup;
@property(readonly, nonatomic) _Bool shouldCreateEnterBoardGroup;
- (int)maneuver;

@end

