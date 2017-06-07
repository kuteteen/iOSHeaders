//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/NSXPCListenerDelegate-Protocol.h>

@class LSInstallProgressList, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSInstallProgressService : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_observers;
    LSInstallProgressList *_progresses;
    NSMutableDictionary *_installIndexes;
    NSMutableOrderedSet *_orderedInstalls;
    NSMutableSet *_inactiveInstalls;
    NSObject<OS_dispatch_queue> *_installControlsQueue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    _Bool _usingNetwork;
}

+ (void)beginListening;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)sendNetworkUsageChangedNotification;
- (void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3 options:(id)arg4;
- (id)_prepareApplicationProxiesForNotification:(int)arg1 identifiers:(id)arg2 withPlugins:(_Bool)arg3 options:(id)arg4;
- (void)sendNotification:(int)arg1 forAppProxies:(id)arg2 Plugins:(_Bool)arg3;
- (void)sendNotification:(id)arg1 ForPlugins:(id)arg2;
- (void)_placeholderIconUpdatedForApp:(id)arg1;
- (void)installationFailedForApplication:(id)arg1;
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
- (void)rebuildInstallIndexes;
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3;
- (id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(_Bool)arg3;
- (void)handleCancelInstallationForApp:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)restoreInactiveInstalls;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

