//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@interface CMActivity : CMLogItem
{
    struct CLMotionActivity fActivity;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool hasExitedVehicle;
@property(readonly, nonatomic) _Bool maybeExitingVehicle;
@property(readonly, nonatomic) _Bool isDriving;
@property(readonly, nonatomic) _Bool isRunning;
@property(readonly, nonatomic) _Bool isWalking;
@property(readonly, nonatomic) _Bool isMoving;
@property(readonly, nonatomic) int confidence;
- (struct CLMotionActivity)activity;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity)arg1;

@end

