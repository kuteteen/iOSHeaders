//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
- (void)multiplyByInverseOfAttitude:(id)arg1;
@property(readonly, nonatomic) CDStruct_bf7dff04 quaternion;
@property(readonly, nonatomic) CDStruct_afa449f9 rotationMatrix;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double roll;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setQuaternion:(CDStruct_bf7dff04)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuaternion:(CDStruct_bf7dff04)arg1;

@end

