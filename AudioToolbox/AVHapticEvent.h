//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVHapticEvent : NSObject
{
    double _time;
    _Bool _isParameter;
    unsigned long long _eventType;
    unsigned long long _paramType;
    float _value;
}

@property(readonly) float value; // @synthesize value=_value;
@property(readonly) unsigned long long paramType; // @synthesize paramType=_paramType;
@property(readonly) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(readonly) _Bool isParameter; // @synthesize isParameter=_isParameter;
@property(readonly) double time; // @synthesize time=_time;
- (id)initWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3;
- (id)initWithEventType:(unsigned long long)arg1 time:(double)arg2;

@end

