//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNCommuteDestinationScoreObserver.h"
#import "MNLocationTrackerDelegate.h"

@class MNCommuteDestination, MNCommuteDestinationGeodesicDistanceScore, MNCommuteDestinationMapsSuggestionsScore, MNCommuteDestinationOffRouteScore, MNCommuteDestinationStartEndTimeScore, MNCommuteLocationTracker, MNLocation, MNNavigationTraceManager, MNTimeAndDistanceUpdater, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MNCommuteDestinationUpdater : NSObject <MNLocationTrackerDelegate, MNCommuteDestinationScoreObserver>
{
    id <MNCommuteDestinationUpdaterDelegate> _delegate;
    MNCommuteDestination *_commuteDestination;
    MNCommuteLocationTracker *_locationTracker;
    unsigned long long _suggestionID;
    MNNavigationTraceManager *_traceManager;
    MNTimeAndDistanceUpdater *_timeAndDistanceUpdater;
    NSDictionary *_scores;
    MNLocation *_lastLocation;
}

+ (id)sessionStartDate;
+ (void)setSessionStartDate:(id)arg1;
+ (id)scoreClasses;
@property(retain, nonatomic) MNLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(readonly, nonatomic) NSDictionary *scores; // @synthesize scores=_scores;
@property(nonatomic) unsigned long long suggestionID; // @synthesize suggestionID=_suggestionID;
@property(readonly, nonatomic) MNCommuteDestination *commuteDestination; // @synthesize commuteDestination=_commuteDestination;
@property(nonatomic) __weak id <MNCommuteDestinationUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commuteScoreUpdaterDidUpdate:(id)arg1;
- (void)locationTrackerDidArrive:(id)arg1;
- (void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;
- (void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;
- (void)locationTrackerDidCancelReroute:(id)arg1;
- (void)locationTrackerWillReroute:(id)arg1;
- (void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
@property(readonly, nonatomic) MNCommuteDestinationStartEndTimeScore *startEndTimeScore;
@property(readonly, nonatomic) MNCommuteDestinationMapsSuggestionsScore *mapsSuggestionsScore;
@property(readonly, nonatomic) MNCommuteDestinationOffRouteScore *offRouteScore;
@property(readonly, nonatomic) MNCommuteDestinationGeodesicDistanceScore *geodesicDistanceScore;
- (id)_generateScoreObjects;
- (void)_updateDestination;
- (void)updateETA;
- (void)updateComparisonDestination:(id)arg1 ofType:(unsigned long long)arg2;
- (void)updateMapsActive:(_Bool)arg1;
- (void)updateLocationHistory:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)stop;
- (void)start;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithSuggestion:(id)arg1 traceManager:(id)arg2;
- (id)route;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

