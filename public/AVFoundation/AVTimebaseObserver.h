//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface AVTimebaseObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_timerQueue;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_source> *_timerSource;
    struct OpaqueCMTimebase *_timebase;
    double _lastRate;
    double _currentRate;
    _Bool _invalid;
}

@property(readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference; // @synthesize weakReference=_weakReference;
- (void)_stopObservingTimebaseNotifications;
- (void)_startObservingTimebaseNotifications;
- (void)_removeTimebaseFromTimerSource;
- (void)_finishInitialization;
- (void)_attachTimerSourceToTimebase;
@property(readonly, nonatomic) _Bool invalidated;
- (void)_effectiveRateChanged;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)_reallyInvalidate;
- (void)invalidate;
@property(readonly) struct OpaqueCMTimebase *timebase;
- (void)finalize;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 queue:(id)arg2;

@end

