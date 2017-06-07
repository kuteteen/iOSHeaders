//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNotificationCenter.h>

@interface NSDistributedNotificationCenter : NSNotificationCenter
{
}

+ (id)notificationCenterForType:(id)arg1;
+ (id)defaultCenter;
@property _Bool suspended;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(_Bool)arg4;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 options:(unsigned long long)arg4;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)addObserverForName:(id)arg1 object:(id)arg2 suspensionBehavior:(unsigned long long)arg3 queue:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 suspensionBehavior:(unsigned long long)arg5;
- (id)init;

@end

