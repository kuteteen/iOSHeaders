//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlaceViewNearbyAppsCell, NSNumber, NSString;

@protocol MKPlaceViewNearbyAppsCellDelegate <NSObject>
- (void)nearbyAppsCell:(MKPlaceViewNearbyAppsCell *)arg1 showStorePageWithURL:(NSString *)arg2 storeID:(NSNumber *)arg3;
- (void)nearbyAppsCell:(MKPlaceViewNearbyAppsCell *)arg1 openAppWithBundleID:(NSString *)arg2 storeID:(NSNumber *)arg3;
@end

