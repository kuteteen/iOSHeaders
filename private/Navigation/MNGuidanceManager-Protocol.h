//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, MNLocation;

@protocol MNGuidanceManager <NSObject>
- (void)stop;
- (void)updateDestination:(GEOComposedWaypoint *)arg1;
- (void)updateForReroute:(GEOComposedRoute *)arg1;
- (void)updateForReturnToRoute;
- (_Bool)repeatLastGuidanceAnnouncement:(MNLocation *)arg1;
- (double)timeUntilNextAnnouncement;
- (double)timeSinceLastAnnouncement;
- (void)updateGuidanceForLocation:(MNLocation *)arg1 navigatorState:(int)arg2;
@end
