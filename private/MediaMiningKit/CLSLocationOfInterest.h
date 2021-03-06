//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, CLPlacemark, NSArray, NSMutableArray, NSUUID;

@interface CLSLocationOfInterest : NSObject
{
    NSMutableArray *_visits;
    NSUUID *_identifier;
    long long _type;
    CLLocation *_location;
    CLPlacemark *_placemark;
    CLLocation *_placemarkLocation;
    double _radius;
}

@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) CLLocation *placemarkLocation; // @synthesize placemarkLocation=_placemarkLocation;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)removeVisit:(id)arg1;
- (void)addVisit:(id)arg1;
@property(readonly, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
- (id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 location:(id)arg3 placemark:(id)arg4 radius:(double)arg5;

@end

