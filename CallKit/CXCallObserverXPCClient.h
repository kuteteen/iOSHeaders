//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCallObserverDataSource-Protocol.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXCallObserverXPCClient : NSObject <CXCallObserverDataSource>
{
    _Bool _hasCallHostLaunched;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSMutableDictionary *_mutableCallUUIDToCallMap;
    NSHashTable *_delegates;
    NSXPCConnection *_connection;
}

+ (void)releaseSharedXPCClient;
+ (id)sharedXPCClient;
+ (id)sharedXPCClientSemaphore;
@property(nonatomic) _Bool hasCallHostLaunched; // @synthesize hasCallHostLaunched=_hasCallHostLaunched;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSMutableDictionary *mutableCallUUIDToCallMap; // @synthesize mutableCallUUIDToCallMap=_mutableCallUUIDToCallMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
- (void).cxx_destruct;
- (oneway void)removeCall:(id)arg1;
- (oneway void)addOrUpdateCall:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 isSynchronous:(_Bool)arg2;
- (void)_invalidate;
- (void)_requestCalls;
- (void)_removeCall:(id)arg1;
- (void)_addOrUpdateCall:(id)arg1;
- (void)_markAllCallsAsEnded;
- (void)invalidate;
- (void)requestTransaction:(id)arg1 forExtensionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *callUUIDToCallMap;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

