//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAssetHandleDelegate-Protocol.h>
#import <NewsCore/FCCacheCoordinatorDelegate-Protocol.h>
#import <NewsCore/FCCacheFlushing-Protocol.h>

@class FCAssetStore, FCCacheCoordinator, FCKeyValueStore, FCNetworkBehaviorMonitor, NSMapTable, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing>
{
    _Bool _flushUnusedAssets;
    NSURL *_directoryURLForCachedAssets;
    FCKeyValueStore *_keyValueStore;
    FCAssetStore *_assetStore;
    FCCacheCoordinator *_cacheCoordinator;
    NSMapTable *_assetHandles;
    NSObject<OS_dispatch_queue> *_assetHandlesQueue;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
}

@property(retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetHandlesQueue; // @synthesize assetHandlesQueue=_assetHandlesQueue;
@property(retain, nonatomic) NSMapTable *assetHandles; // @synthesize assetHandles=_assetHandles;
@property(retain, nonatomic) FCCacheCoordinator *cacheCoordinator; // @synthesize cacheCoordinator=_cacheCoordinator;
@property(retain, nonatomic) FCAssetStore *assetStore; // @synthesize assetStore=_assetStore;
@property(retain, nonatomic) FCKeyValueStore *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(readonly, nonatomic) NSURL *directoryURLForCachedAssets; // @synthesize directoryURLForCachedAssets=_directoryURLForCachedAssets;
@property(nonatomic) _Bool flushUnusedAssets; // @synthesize flushUnusedAssets=_flushUnusedAssets;
- (void).cxx_destruct;
- (id)_assetKeyForRemoteURL:(id)arg1;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)operationToFetchFileForAssetHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)assetHandleForRemoteURL:(id)arg1 lifetimeHint:(long long)arg2 transformer:(id)arg3;
- (id)assetHandleForRemoteURL:(id)arg1 lifetimeHint:(long long)arg2;
- (id)initWithName:(id)arg1 directory:(id)arg2 networkBehaviorMonitor:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
