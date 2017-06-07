//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _UIFocusEventRecognizer;

__attribute__((visibility("hidden")))
@interface _UIFocusEngineDelayedPressAction : NSObject
{
    _UIFocusEventRecognizer *_sender;
    long long _pressType;
    double _timestamp;
}

+ (void)sendDelayedPressWithType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long pressType; // @synthesize pressType=_pressType;
@property(readonly, nonatomic) __weak _UIFocusEventRecognizer *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (void)_sendPressEvent;
- (id)_initWithPressType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;

@end

