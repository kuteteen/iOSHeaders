//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSURLStorageCacheClient-Protocol.h>

@class NSData, NSString, NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface NSURLStorage_CacheClient : NSObject <NSURLStorageCacheClient>
{
    NSXPCInterface *_netStoreInterface;
    NSXPCConnection *_networkStorageConnection;
    NSString *_path;
    struct weak_ptr<__CFURLCache> _cfWeakCacheCpp;
    NSData *_sandboxExtensionToken;
    long long _storageSize;
    _Bool _networkStorageConnectionInterrupted;
}

@property _Bool networkStorageConnectionInterrupted; // @synthesize networkStorageConnectionInterrupted=_networkStorageConnectionInterrupted;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifyCacheClientOfTimeRelativeResponses:(id)arg1;
- (void)notifyCachedURLResponseBecameFileBacked:(id)arg1 filePath:(id)arg2 forUUID:(id)arg3;
- (void)setMinSizeForVMCachedResource:(long long)arg1;
- (long long)currentDiskUsage;
- (void)copyAllPartitionNamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)copyHostNamesForOptionalPartition:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2;
- (void)deleteResponsesSinceDate:(id)arg1;
- (void)deleteAllResponses;
- (void)deleteResponseForRequestWithKey:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addCachedResponseWithDictionary:(id)arg1 key:(id)arg2;
- (_Bool)createStorageTaskManagerForPath:(id)arg1 maxSize:(long long)arg2 extension:(id)arg3;
- (void)setMaxSize:(long long)arg1;
- (_Bool)ensureNetworkStorageDaemonConnection;
- (id)getPath;
- (void)_reconnectWithStorageServer;
- (void)_invalidateNSXPCConnection;
- (void)dealloc;
- (id)initWithCache:(shared_ptr_25027cf4)arg1;

@end

