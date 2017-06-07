//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface _UIActiveTimer : NSObject
{
    CADisplayLink *_displayLink;
    CDUnknownBlockType _updateHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
- (void)invalidate;
- (void)_tick:(id)arg1;
- (id)initWithDuration:(double)arg1 updateHandler:(CDUnknownBlockType)arg2;

@end

