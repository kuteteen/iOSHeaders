//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol _UIMotionEffectEventConsumer;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEventProvider : NSObject
{
    id <_UIMotionEffectEventConsumer> _consumer;
}

@property id <_UIMotionEffectEventConsumer> consumer; // @synthesize consumer=_consumer;
- (double)slowUpdateIntervalForLogs;
- (double)fastUpdateIntervalForLogs;
- (_Bool)wantsSynchronizedUpdates;
- (_Bool)shouldLogEvents;
- (id)currentEvent;
- (void)setSlowUpdatesEnabled:(_Bool)arg1;
- (void)stopGeneratingEvents;
- (void)startGeneratingEvents;

@end

