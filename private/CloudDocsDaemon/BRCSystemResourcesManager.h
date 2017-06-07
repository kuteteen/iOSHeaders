//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRReachabilityObserver-Protocol.h>

@class BRReachabilityMonitor, NSDate, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCSystemResourcesManager : NSObject <BRReachabilityObserver>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    _Bool _invalidated;
    NSHashTable *_reachabilityObservers;
    BRReachabilityMonitor *_reachabilityMonitor;
    unsigned int _reachabilityFlags;
    _Bool _isNetworkReachable;
    NSObject<OS_dispatch_source> *_isNetworkReachableTimer;
    NSHashTable *_powerObservers;
    int _powerNotifyToken;
    _Bool _powerLevelOK;
    NSObject<OS_dispatch_source> *_powerLevelOKTimer;
    _Bool _connectedToPowerSource;
    NSDate *_connectedToPowerSourceCheckedDate;
    NSMutableSet *_lowDiskSet;
    NSMutableDictionary *_lowDiskDict;
    NSObject<OS_dispatch_source> *_lowDiskSource;
    NSObject<OS_dispatch_source> *_lowDiskTimer;
    NSHashTable *_lowMemoryObservers;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    NSMapTable *_processObservers;
    NSHashTable *_appListObservers;
}

+ (id)manager;
- (void).cxx_destruct;
- (void)_initXPCFSEvents;
- (void)removeAppListObserver:(id)arg1;
- (void)addAppListObserver:(id)arg1;
- (void)_invalidateAppListObservers;
- (void)_initAppListObservers;
- (void)removeProcessMonitor:(id)arg1;
- (void)addProcessMonitor:(id)arg1 forProcessID:(int)arg2;
- (void)_invalidateProcessObservers;
- (void)_initProcessObservers;
- (void)_invalidateProcessMonitorObject:(id)arg1;
- (id)_createMonitoringObjectForProcessID:(int)arg1 observer:(id)arg2;
- (void)removeLowMemoryObserver:(id)arg1;
- (void)addLowMemoryObserver:(id)arg1;
- (void)_didReceiveMemoryWarning;
- (void)_invalidateLowMemory;
- (void)_initLowMemory;
- (void)removeLowDiskObserver:(id)arg1 forDevice:(int)arg2;
- (void)addLowDiskObserver:(id)arg1 forDevice:(int)arg2;
- (_Bool)hasEnoughSpaceForDevice:(int)arg1;
- (void)_processLowDiskNotification:(_Bool)arg1;
- (void)_resetLowDiskManager;
- (void)_invalidateLowDiskManager;
- (void)_initLowDiskManager;
- (_Bool)connectedToPowerSource;
- (void)removePowerObserver:(id)arg1;
- (void)addPowerObserver:(id)arg1;
- (void)_setPowerLevel:(_Bool)arg1;
- (void)_setPowerLevelWithCoalescing:(_Bool)arg1;
@property(readonly) _Bool isPowerOK;
- (void)_resetPowerManager;
- (void)_invalidatePowerManager;
- (void)_initPowerManager;
- (void)removeReachabilityObserver:(id)arg1;
- (void)addReachabilityObserver:(id)arg1;
- (void)_setReachabilityFlags:(unsigned int)arg1;
@property(readonly) unsigned int reachabilityFlags;
- (void)_setNetworkReachable:(_Bool)arg1;
- (void)_setNetworkReachableWithCoalescing:(_Bool)arg1;
@property(readonly) _Bool isNetworkReachable;
- (void)_invalidateReachability;
- (void)_resetReachability;
- (void)_initReachability;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityFlagsTo:(unsigned int)arg2;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(_Bool)arg2;
- (void)reset;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (void)close;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
