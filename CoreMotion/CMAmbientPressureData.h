//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@interface CMAmbientPressureData : CMLogItem
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CDStruct_c3b9c2ee ambientPressure;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPressure:(CDStruct_ebf20f05)arg1 andTimestamp:(double)arg2;

@end

