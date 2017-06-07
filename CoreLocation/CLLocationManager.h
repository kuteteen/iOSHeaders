//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLHeading, CLLocation, NSSet, NSString;
@protocol CLLocationManagerDelegate;

@interface CLLocationManager : NSObject
{
    id _internal;
}

+ (_Bool)advertiseAsBeacon:(id)arg1 withPower:(id)arg2;
+ (_Bool)bundleSupported:(id)arg1;
+ (_Bool)shutdownDaemon;
+ (void)dumpDiagnosticFilesWithHandler:(CDUnknownBlockType)arg1;
+ (_Bool)dumpLogsWithMessage:(id)arg1;
+ (void)setDefaultEffectiveBundle:(id)arg1;
+ (void)setDefaultEffectiveBundleIdentifier:(id)arg1;
+ (void)setAuthorizationStatusByType:(int)arg1 forBundle:(id)arg2;
+ (void)setAuthorizationStatusByType:(int)arg1 forBundleIdentifier:(id)arg2;
+ (void)setAuthorizationStatus:(_Bool)arg1 forBundle:(id)arg2;
+ (void)setAuthorizationStatus:(_Bool)arg1 forBundleIdentifier:(id)arg2;
+ (int)authorizationStatus;
+ (int)_authorizationStatus;
+ (int)regionMonitoringAuthorizationStatusForBundle:(id)arg1;
+ (int)regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1;
+ (int)_regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (int)authorizationStatusForBundle:(id)arg1;
+ (int)authorizationStatusForBundleIdentifier:(id)arg1;
+ (int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (_Bool)isPeerRangingAvailable;
+ (_Bool)deferredLocationUpdatesAvailable;
+ (_Bool)mapCorrectionAvailable;
+ (_Bool)isRangingAvailable;
+ (_Bool)regionMonitoringEnabled;
+ (_Bool)regionMonitoringAvailable;
+ (_Bool)isMonitoringAvailableForClass:(Class)arg1;
+ (_Bool)significantLocationChangeMonitoringAvailable;
+ (_Bool)headingAvailable;
+ (void)setLocationServicesEnabled:(_Bool)arg1;
+ (_Bool)locationServicesEnabled:(_Bool)arg1;
+ (_Bool)locationServicesEnabled;
+ (id)sharedManager;
+ (_Bool)isMicroLocationAvailable;
+ (void)setEntityAuthorization:(unsigned long long)arg1 forLocationDictionary:(id)arg2;
+ (void)setEntityAuthorized:(_Bool)arg1 forLocationDictionary:(id)arg2;
+ (unsigned long long)allowableAuthorizationForLocationDictionary:(id)arg1;
+ (unsigned long long)entityAuthorizationForLocationDictionary:(id)arg1;
+ (_Bool)isEntityAuthorizedForLocationDictionary:(id)arg1;
+ (_Bool)hasUsedBackgroundLocationServices:(id)arg1;
+ (id)dateLocationLastUsedForLocationDictionary:(id)arg1;
+ (unsigned long long)activeLocationServiceTypesForLocationDictionary:(id)arg1;
+ (_Bool)isLocationActiveForLocationDictionary:(id)arg1;
+ (unsigned long long)entityClassesForLocationDictionary:(id)arg1;
+ (unsigned long long)primaryEntityClassForLocationDictionary:(id)arg1;
+ (_Bool)isStatusBarIconEnabledForLocationEntityClass:(unsigned long long)arg1;
+ (void)setStatusBarIconEnabled:(_Bool)arg1 forLocationEntityClass:(unsigned long long)arg2;
- (void)setIsActuallyAWatchKitExtension:(_Bool)arg1;
- (void)registerAsLocationClient;
@property(nonatomic) _Bool allowsAlteredAccessoryLocations;
@property(nonatomic, getter=isDynamicAccuracyReductionEnabled) _Bool dynamicAccuracyReductionEnabled;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property(nonatomic, getter=isPersistentMonitoringEnabled) _Bool persistentMonitoringEnabled;
- (void)requestAlwaysAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)requestWhenInUseAuthorization;
- (void)onClientEventMicroLocations:(id)arg1;
- (void)onClientEventSignificantLocationVisit:(id)arg1;
- (void)onClientEventVehicleHeading:(id)arg1;
- (void)onClientEventVehicleSpeed:(id)arg1;
- (void)onClientEventInterrupted:(id)arg1;
- (void)onClientEventBatch:(id)arg1;
- (void)onClientEventAutopauseStatus:(id)arg1;
- (void)onDidBecomeActive:(id)arg1;
- (void)pauseLocationUpdates:(_Bool)arg1;
- (void)resumeLocationUpdates;
- (void)onClientEventRegionSetupCompleted:(id)arg1;
- (void)onClientEventRegionResponseDelayed:(id)arg1;
- (void)onClientEventPeerRangingError:(id)arg1;
- (void)onClientEventPeerRanging:(id)arg1;
- (void)onClientEventRangingError:(id)arg1;
- (void)onClientEventRanging:(id)arg1;
- (void)onClientEventRegionError:(id)arg1;
- (void)onClientEventRegionState:(id)arg1;
- (void)onClientEventRegion:(id)arg1;
- (void)onClientEventError:(id)arg1;
- (void)onClientEventHistoricLocation:(id)arg1;
- (void)onClientEventHeadingCalibration:(id)arg1;
- (void)onClientEventHeading:(id)arg1;
- (void)onClientEventLocationUnavailable:(id)arg1;
- (void)onClientEventLocation:(id)arg1 forceMapMatching:(_Bool)arg2 type:(id)arg3;
- (void)onClientEventAuthStatus:(id)arg1;
- (void)onClientEvent:(int)arg1 supportInfo:(id)arg2;
- (void)onRangingRequestTimeout;
- (void)onLocationRequestTimeout;
- (id)technologiesInUse;
- (id)appsUsingLocationWithDetails;
- (id)appsUsingLocation;
- (void)resetApps;
- (void)stopRangingFromPeers:(id)arg1;
- (void)startRangingFromPeers:(id)arg1;
- (void)stopRangingToPeers:(id)arg1;
- (void)startRangingToPeers:(id)arg1 intervalSeconds:(unsigned long long)arg2;
- (void)respondToRangingFromPeers:(id)arg1 timeoutSeconds:(double)arg2;
- (void)requestRangingToPeers:(id)arg1 timeoutSeconds:(double)arg2;
@property(readonly, copy, nonatomic) NSSet *rangedRegions;
- (void)stopRangingBeaconsInRegion:(id)arg1;
- (void)startRangingBeaconsInRegion:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *monitoredRegions;
@property(readonly, nonatomic) double maximumRegionMonitoringDistance;
- (void)requestStateForRegion:(id)arg1;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2;
- (void)stopMonitoringSignificantLocationChanges;
- (void)startMonitoringSignificantLocationChanges;
- (void)stopTechStatusUpdates;
- (void)startTechStatusUpdates;
- (void)stopAppStatusUpdates;
- (void)startAppStatusUpdates;
- (void)dismissHeadingCalibrationDisplay;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
@property(readonly, copy, nonatomic) CLHeading *heading;
@property(nonatomic) int headingOrientation;
@property(nonatomic) double headingFilter;
@property(readonly, nonatomic) _Bool headingAvailable;
- (void)disallowDeferredLocationUpdates;
- (void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2;
- (void)requestLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)startUpdatingLocationWithPrompt;
- (void)markAsHavingReceivedLocation;
@property(nonatomic) long long activityType;
@property(copy, nonatomic) NSString *purpose;
@property(nonatomic) _Bool privateMode;
@property(readonly, nonatomic) struct __CLClient *internalClient;
@property(readonly, nonatomic) double bestAccuracy;
@property(nonatomic) _Bool supportInfo;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(readonly, nonatomic) _Bool locationServicesApproved;
@property(readonly, nonatomic) _Bool locationServicesEnabled;
@property(readonly, nonatomic) _Bool locationServicesAvailable;
@property(readonly, copy, nonatomic) CLLocation *location;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
@property(nonatomic) id <CLLocationManagerDelegate> delegate;
- (void)dealloc;
- (id)initWithEffectiveBundle:(id)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)init;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
@property(nonatomic, getter=isMatchInfoEnabled) _Bool matchInfoEnabled;
- (void)stopMonitoringVisits;
- (void)startMonitoringVisits;
- (void)requestCurrentMicroLocation;
- (void)stopUpdatingMicroLocation;
- (void)startUpdatingMicroLocation;

@end

