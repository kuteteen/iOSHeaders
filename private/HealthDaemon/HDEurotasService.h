//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthService.h>

@interface HDEurotasService : HDHealthService
{
}

+ (id)serviceUUID;
+ (long long)serviceType;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (id)servicesInProfile;

@end
