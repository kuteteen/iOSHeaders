//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
}

@property(readonly) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3 repeats:(_Bool)arg4;

@end

