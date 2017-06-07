//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@interface CMCatherineData : CMLogItem
{
    double _catherine;
    double _confidence;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double catherine; // @synthesize catherine=_catherine;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3;

@end

