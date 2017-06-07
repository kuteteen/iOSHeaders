//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class CLHeading, CLLocation, NSDate, NSError;
@protocol MKLocationProvider;

@protocol MKLocationProviderDelegate <NSObject>
- (void)locationProvider:(id <MKLocationProvider>)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationProvider:(id <MKLocationProvider>)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationProviderDidResumeLocationUpdates:(id <MKLocationProvider>)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id <MKLocationProvider>)arg1;
- (_Bool)locationProviderShouldPauseLocationUpdates:(id <MKLocationProvider>)arg1;
- (void)locationProviderDidChangeAuthorizationStatus:(id <MKLocationProvider>)arg1;
- (void)locationProvider:(id <MKLocationProvider>)arg1 didReceiveError:(NSError *)arg2;
- (void)locationProvider:(id <MKLocationProvider>)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationProvider:(id <MKLocationProvider>)arg1 didUpdateLocation:(CLLocation *)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id <MKLocationProvider>)arg1 didUpdateLocation:(CLLocation *)arg2;
@end

