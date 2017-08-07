//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceClientInterface-Protocol.h>
#import <Navigation/NSXPCListenerDelegate-Protocol.h>

@class MNNavigationDetails, NSMapTable, NSString, NSXPCListener;

@interface MNNavigationServer : NSObject <NSXPCListenerDelegate, MNNavigationServiceClientInterface>
{
    NSXPCListener *_listener;
    NSMapTable *_peers;
    MNNavigationDetails *_details;
}

+ (id)sharedServer;
- (void).cxx_destruct;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputRouteSelection:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSettingForVoicePrompt:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSetting:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputSettings:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didActivateAudioSession:(_Bool)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdatePossibleCommuteDestinations:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateIsInVehicle:(_Bool)arg2;
- (void)navigationServiceProxy:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationServiceProxy:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationServiceProxyDidCancelReroute:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 didRerouteWithDetails:(id)arg2 withLocationDetails:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationServiceProxyWillReroute:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4 forRoute:(id)arg5;
- (void)navigationServiceProxy:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (void)navigationServiceProxy:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationServiceProxyDidArrive:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 usePersistentDisplay:(_Bool)arg2;
- (void)navigationServiceProxy:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationServiceProxyEndGuidanceUpdate:(id)arg1;
- (void)navigationServiceProxyBeginGuidanceUpdate:(id)arg1;
- (void)navigationServiceProxyHideSecondaryStep:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationServiceProxy:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationServiceProxy:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationServiceProxy:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg1;
- (void)navigationServiceProxyWillPauseNavigation:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateActiveRouteDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_peerDidDisconnect:(id)arg1;
- (void)_remoteObjectForProxy:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)_newPeerForConnection:(id)arg1;
- (void)_defaultsDidChange;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

