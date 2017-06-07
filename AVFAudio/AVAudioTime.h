//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVAudioTime : NSObject
{
    struct AudioTimeStamp _ats;
    double _sampleRate;
    void *_reserved;
}

+ (double)secondsForHostTime:(unsigned long long)arg1;
+ (unsigned long long)hostTimeForSeconds:(double)arg1;
+ (id)timeWithAudioTimeStamp:(const struct AudioTimeStamp *)arg1 sampleRate:(double)arg2;
+ (id)timeWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3;
+ (id)timeWithSampleTime:(long long)arg1 atRate:(double)arg2;
+ (id)timeWithHostTime:(unsigned long long)arg1;
- (id)description;
@property(readonly, nonatomic) struct AudioTimeStamp audioTimeStamp;
- (id)initWithAudioTimeStamp:(const struct AudioTimeStamp *)arg1 sampleRate:(double)arg2;
- (id)extrapolateTimeFromAnchor:(id)arg1;
@property(readonly, nonatomic) double sampleRate;
@property(readonly, nonatomic) long long sampleTime;
@property(readonly, nonatomic) unsigned long long hostTime;
@property(readonly, nonatomic, getter=isSampleTimeValid) _Bool sampleTimeValid;
@property(readonly, nonatomic, getter=isHostTimeValid) _Bool hostTimeValid;
- (id)initWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3;
- (id)initWithSampleTime:(long long)arg1 atRate:(double)arg2;
- (id)initWithHostTime:(unsigned long long)arg1;
- (id)init;

@end

