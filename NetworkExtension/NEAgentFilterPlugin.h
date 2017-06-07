//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEAgentSessionDelegate-Protocol.h>

@class NEAgentSession, NEPluginPreferences, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NEAgentFilterPlugin : NSObject <NEAgentSessionDelegate>
{
    struct __CFBundle *_pluginBundle;
    struct __CFDictionary *_pendingGlobalPersistentData;
    struct __CFDictionary *_pendingPerConfigurationPersistentData;
    struct NESocketContentFilter_s *_socketContentFilter;
    struct NEAgentFilterPluginCallbacks _pluginCallbacks;
    void *_pluginInfo;
    CDUnknownBlockType _browserNewFlowHandler;
    CDUnknownBlockType _browserDataHandler;
    CDUnknownBlockType _browserDataCompleteHandler;
    NSObject<OS_dispatch_queue> *_clientQueue;
    void *_clientInfo;
    struct __CFDictionary *_browserFlows;
    _Bool _pluginInitialized;
    _Bool _builtInPlugin;
    int _outstandingSetGlobalDataOps;
    int _outstandingSetDataOps;
    NEAgentSession *_session;
    NSString *_pluginType;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_configID;
    NEPluginPreferences *_pluginPrefs;
    NSObject<OS_xpc_object> *_clientListener;
}

@property(readonly) _Bool builtInPlugin; // @synthesize builtInPlugin=_builtInPlugin;
@property int outstandingSetDataOps; // @synthesize outstandingSetDataOps=_outstandingSetDataOps;
@property int outstandingSetGlobalDataOps; // @synthesize outstandingSetGlobalDataOps=_outstandingSetGlobalDataOps;
@property(retain) NSObject<OS_xpc_object> *clientListener; // @synthesize clientListener=_clientListener;
@property(retain) NEPluginPreferences *pluginPrefs; // @synthesize pluginPrefs=_pluginPrefs;
@property(retain) NSUUID *configID; // @synthesize configID=_configID;
@property _Bool pluginInitialized; // @synthesize pluginInitialized=_pluginInitialized;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property(readonly) __weak NEAgentSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)setBrowserNewFlowHandler:(CDUnknownBlockType)arg1 dataHandler:(CDUnknownBlockType)arg2 dataCompleteHandler:(CDUnknownBlockType)arg3 clientQueue:(id)arg4 andClientInfo:(void *)arg5;
- (struct NESocketContentFilter_s *)copySocketContentFilter;
- (struct __CFDictionary *)copyPersistentDataOfType:(long long)arg1;
- (_Bool)sendSetPersistentData:(struct __CFDictionary *)arg1 ofType:(long long)arg2;
- (_Bool)sendSocketContentFilterRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendEnvironmentEventComplete:(long long)arg1;
- (void)sendStatus:(long long)arg1 withError:(long long)arg2;
- (void)handleEnvironmentEvent:(id)arg1;
- (void)handleStop:(id)arg1;
- (void)handleStart:(id)arg1;
- (void)handleInitMessage:(id)arg1;
- (void)handleAddClientMessage:(id)arg1;
- (void)acceptNewClientConnection:(id)arg1;
- (void)handleClientMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleDataCompleteMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleAddDataMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleNewFlowMessage:(id)arg1 forConnection:(id)arg2;
- (void)closeBrowserFilterFlow:(struct NEContentFilterFlow_s *)arg1 forUUID:(struct __CFUUID *)arg2;
- (void)handleCancel;
- (void)handleMessage:(id)arg1 withOuterMessage:(id)arg2;
- (void)handleDisposeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleInitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cleanup;
- (id)initWithSession:(id)arg1 pluginType:(id)arg2 primaryPluginType:(id)arg3 pluginBundle:(struct __CFBundle *)arg4;

@end

