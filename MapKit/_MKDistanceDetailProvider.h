//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKLocationManagerObserver-Protocol.h>

@class MKMapItem, NSString;

@interface _MKDistanceDetailProvider : NSObject <MKLocationManagerObserver>
{
    MKMapItem *_mapItem;
    NSString *_distanceToPlace;
    _Bool _useMetric;
    _Bool _useYardsForShortDistances;
    CDUnknownBlockType _updateHandler;
}

+ (_Bool)infoAvailable;
@property(copy) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_updateDistanceToPlace;
- (void)_handleLocaleChangeNotification:(id)arg1;
- (void)dealloc;
- (void)endUpdates;
- (void)beginUpdateWithHandler:(CDUnknownBlockType)arg1;
@property(retain) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

