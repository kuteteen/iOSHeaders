//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreLocation/CLLocationManager.h>

@interface CLLocationManager (HomeLocation)
+ (id)hmdRegionStateAsString:(int)arg1;
+ (int)convertToHMDRegionState:(long long)arg1;
+ (id)hmdLocationAuthorizationAsString:(int)arg1;
+ (int)convertToHMDLocationAuthorization:(int)arg1;
+ (id)regionDescription:(id)arg1;
+ (id)referenceFrameDescription:(int)arg1;
+ (id)regionStateDescription:(long long)arg1;
+ (id)locationAuthorizationDescription:(int)arg1;
+ (_Bool)convertAuthStatusToBool:(int)arg1;
@end

