//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKLocationManager.h>

@interface NTKSimpleLocationManager : NTKLocationManager
{
    unsigned long long _nextToken;
}

- (void)placemarkForCurrentLocationWithHandler:(CDUnknownBlockType)arg1;
- (id)nameOfCurrentLocation;
- (void)stopLocationUpdatesForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)startLocationUpdatesWithHandler:(CDUnknownBlockType)arg1;

@end
