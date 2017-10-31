//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedWaypoint, MNActiveRouteDetails, MNAudioOutputSetting, MNRoutePlanningDetails, MNSettings, MNTrafficIncidentAlertDetails, NSData;

@protocol MNNavigationServiceProxy <NSObject>
- (void)acquireDesiredResourcePolicy;
- (void)interfaceHashesWithHandler:(void (^)(unsigned long long, unsigned long long))arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(NSData *)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(_Bool)arg1;
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlertDetails:(MNTrafficIncidentAlertDetails *)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)setGuidancePromptsEnabled:(_Bool)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setCurrentAudioOutputSetting:(MNAudioOutputSetting *)arg1;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(MNAudioOutputSetting *)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(void (^)(_Bool))arg2;
- (void)repeatCurrentTrafficAlertWithReply:(void (^)(_Bool))arg1;
- (void)repeatCurrentGuidanceWithReply:(void (^)(_Bool))arg1;
- (void)changeSettings:(MNSettings *)arg1;
- (void)setFullGuidanceMode:(_Bool)arg1;
- (void)switchToRouteWithDetails:(MNActiveRouteDetails *)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(GEOComposedWaypoint *)arg1;
- (void)stopPredictingDestinations;
- (void)startPredictingDestinationsWithHandler:(void (^)(void))arg1;
- (void)stopNavigation;
- (void)startNavigationForRouteDetails:(MNRoutePlanningDetails *)arg1 handler:(void (^)(void))arg2;
- (void)prepareNavigationWithRouteDetails:(MNRoutePlanningDetails *)arg1;
@end

