//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationObserverRegistration : _CFXNotificationRegistrationContainer
{
    void *_observer;
}

+ (Class)childClass;
@property(readonly) void *observer; // @synthesize observer=_observer;
- (void)resetObserverAndChildren:(void *)arg1;
- (_Bool)enumerate:(CDUnknownBlockType)arg1;
- (void)match:(CDStruct_3de10e06 *)arg1;
- (void)find:(CDStruct_3de10e06 *)arg1;
- (void *)key;
- (id)initWithObserver:(void *)arg1 parent:(id)arg2;

@end

