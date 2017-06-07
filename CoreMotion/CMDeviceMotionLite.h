//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class CMAttitude, NSString;

@interface CMDeviceMotionLite : NSObject <NSCopying, NSSecureCoding>
{
    CMAttitude *fAttitude;
    CDStruct_31142d93 fGravity;
    CDStruct_31142d93 fUserAcceleration;
    CDStruct_31142d93 fRotationRate;
    CDStruct_31142d93 fRawAcceleration;
    CDStruct_31142d93 fRawRotationRate;
    unsigned long long fMachTimestamp;
    NSString *fPhysicalDeviceUniqueID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, retain, nonatomic) NSString *physicalDeviceUniqueID; // @synthesize physicalDeviceUniqueID=fPhysicalDeviceUniqueID;
@property(readonly, nonatomic) unsigned long long machTimestamp; // @synthesize machTimestamp=fMachTimestamp;
@property(readonly, nonatomic) CDStruct_31142d93 rawRotationRate; // @synthesize rawRotationRate=fRawRotationRate;
@property(readonly, nonatomic) CDStruct_31142d93 rawAcceleration; // @synthesize rawAcceleration=fRawAcceleration;
@property(readonly, nonatomic) CDStruct_31142d93 rotationRate; // @synthesize rotationRate=fRotationRate;
@property(readonly, nonatomic) CDStruct_31142d93 userAcceleration; // @synthesize userAcceleration=fUserAcceleration;
@property(readonly, nonatomic) CDStruct_31142d93 gravity; // @synthesize gravity=fGravity;
@property(readonly, nonatomic) CMAttitude *attitude; // @synthesize attitude=fAttitude;
@property(readonly, nonatomic) float tilt;
@property(readonly, nonatomic) float tip;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotionLite:(CDStruct_0b056bf9)arg1 andDeviceID:(id)arg2;

@end

