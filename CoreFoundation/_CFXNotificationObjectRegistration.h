//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationObjectRegistration : _CFXNotificationRegistrationContainer
{
    void *_object;
}

+ (Class)childClass;
+ (const CDStruct_90be15af *)stringKeyCallbacks;
@property(readonly) void *object; // @synthesize object=_object;
- (_Bool)enumerate:(CDUnknownBlockType)arg1;
- (void)match:(void *)arg1 matching:(CDStruct_3de10e06 *)arg2;
- (void)find:(void *)arg1 matching:(CDStruct_3de10e06 *)arg2;
- (id)acquireObserver:(void *)arg1 options:(unsigned long long)arg2;
- (void *)key;
- (id)initWithObject:(void *)arg1 parent:(id)arg2;

@end

