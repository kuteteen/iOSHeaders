//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXWeatherUtilities : NSObject
{
}

+ (id)sharedInstance;
- (id)descriptionForWeatherWFConditionCode:(unsigned long long)arg1;
- (unsigned long long)_weatherCodeForGenericIconName:(id)arg1;
- (id)descriptionForPrecipitation:(id)arg1 weatherConditionCode:(unsigned long long)arg2;
- (id)descriptionForWeatherConditionImageName:(id)arg1;

@end
