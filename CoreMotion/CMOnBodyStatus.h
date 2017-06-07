//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@interface CMOnBodyStatus : CMLogItem
{
    int fResult;
    int fConfidence;
}

+ (_Bool)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) long long confidence;
@property(readonly, nonatomic) long long result;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3;

@end

