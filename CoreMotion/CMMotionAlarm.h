//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSSecureCoding-Protocol.h>

@class CMMotionAlarmManager, NSString;

@interface CMMotionAlarm : NSObject <NSSecureCoding>
{
    _Bool _repeats;
    unsigned int _duration;
    unsigned int _type;
    int _state;
    NSString *_name;
    unsigned long long _alarmId;
    NSString *_bundleId;
    CMMotionAlarmManager *_manager;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CMMotionAlarmManager *manager; // @synthesize manager=_manager;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) unsigned long long alarmId; // @synthesize alarmId=_alarmId;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(readonly, nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)copyPropertiesFromAlarm:(id)arg1;
- (_Bool)unregisterWithError:(id *)arg1;
- (_Bool)acknowledgeWithError:(id *)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 duration:(unsigned int)arg3 repeats:(_Bool)arg4 alarmId:(unsigned long long)arg5 bundleId:(id)arg6 state:(int)arg7;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 duration:(unsigned int)arg3 repeats:(_Bool)arg4;

@end

