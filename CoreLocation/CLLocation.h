//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class CLFloor, CLLocationMatchInfo, NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
- (void)setHorizontalAccuracy:(double)arg1;
@property(readonly, nonatomic) NSString *iso6709Notation;
- (id)propagateLocationToTime:(double)arg1;
- (id)snapToResolution:(double)arg1;
- (double)distanceFromLocation:(id)arg1;
- (double)getDistanceFrom:(id)arg1;
@property(readonly, copy, nonatomic) CLFloor *floor;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) double trustedTimestamp;
@property(readonly, nonatomic) unsigned int integrity;
@property(readonly, nonatomic) double rawCourse;
@property(readonly, nonatomic) double course;
@property(readonly, nonatomic) double speedAccuracy;
@property(readonly, nonatomic) double speed;
@property(readonly, nonatomic) CDStruct_05ee51d2 clientLocation;
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) double verticalAccuracy;
@property(readonly, nonatomic) double horizontalAccuracy;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) struct CLLocationCoordinate2D rawCoordinate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(nonatomic) int referenceFrame;
- (id)shortDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientLocation:(CDStruct_05ee51d2)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)_initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 floor:(int)arg8;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)init;
- (void)unmatch;
@property(readonly, nonatomic) CLLocationMatchInfo *matchInfo;
- (id)initWithClientLocation:(CDStruct_05ee51d2)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3;
- (id)initWithClientLocation:(CDStruct_05ee51d2)arg1 matchInfo:(id)arg2;

@end

