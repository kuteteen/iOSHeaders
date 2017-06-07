//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKBRTTimerBlock : NSObject
{
    NSObject<OS_dispatch_queue> *_selfQueue;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _onTimer;
    id _owner;
}

@property(readonly, nonatomic) id owner; // @synthesize owner=_owner;
@property(readonly, copy, nonatomic) CDUnknownBlockType onTimer; // @synthesize onTimer=_onTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *selfQueue; // @synthesize selfQueue=_selfQueue;
- (void).cxx_destruct;
- (void)timerFired:(id)arg1;
- (void)invalidate;
- (void)fireNow;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(CDUnknownBlockType)arg3 owner:(id)arg4;

@end

