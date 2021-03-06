//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLGeocoder, CLInUseAssertion, CLLocation, CLPlacemark, NSMutableArray;

@interface NTKGeocoderManager : NSObject
{
    CLGeocoder *_geocoder;
    CLLocation *_cachedLocation;
    CLPlacemark *_cachedPlacemark;
    CLInUseAssertion *_locationInUseAssertion;
    NSMutableArray *_handlers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_handlePlacemarks:(id)arg1 fromLocation:(id)arg2 error:(id)arg3;
- (void)placemarkForLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)cachedPlacemarkForLocation:(id)arg1;
- (id)init;

@end

