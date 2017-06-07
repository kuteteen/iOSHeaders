//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSDate, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VSDelayOperation : VSAsyncOperation
{
    NSObject<OS_dispatch_source> *_timerSource;
    _Bool _shouldIgnoreTolerance;
    double _delay;
    double _tolerance;
    NSDate *_fireDate;
}

+ (id)delayOperationWithFireDate:(id)arg1;
+ (id)delayOperationWithDelay:(double)arg1;
@property(nonatomic) _Bool shouldIgnoreTolerance; // @synthesize shouldIgnoreTolerance=_shouldIgnoreTolerance;
@property(readonly, copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic) double tolerance; // @synthesize tolerance=_tolerance;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (void)_cancelTimer;
- (void)dealloc;
- (id)init;
- (id)initWithFireDate:(id)arg1 tolerance:(double)arg2;
- (id)initWithDelay:(double)arg1 tolerance:(double)arg2;

@end

