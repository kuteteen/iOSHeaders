//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLNotificationCenterProtocol-Protocol.h>

@class NSMutableArray, NSPointerArray, NSString;
@protocol QLNotificationCenterProtocol;

@interface QLNotificationCenter : NSObject <QLNotificationCenterProtocol>
{
    id <QLNotificationCenterProtocol> _remoteNotificationCenter;
    NSPointerArray *_observers;
    NSMutableArray *_bufferedNotifications;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_sendEnqueuedNotifications;
- (long long)_indexOfObserver:(id)arg1;
- (void)setRemoteNotificationCenter:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)_bufferNotificationName:(id)arg1 userInfo:(id)arg2;
- (_Bool)_tryPostingNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

