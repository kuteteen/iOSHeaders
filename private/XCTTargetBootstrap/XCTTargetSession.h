//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <XCTTargetBootstrap/NSXPCListenerDelegate-Protocol.h>
#import <XCTTargetBootstrap/XCTTarget-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue, XCTConnectionAccepting;

@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTTarget>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_daemonConnection;
    NSXPCListener *_clientListener;
    id <XCTConnectionAccepting> _connectionHandler;
}

@property(retain) id <XCTConnectionAccepting> connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(retain) NSXPCListener *clientListener; // @synthesize clientListener=_clientListener;
@property(retain) NSXPCConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)arg1 protocolVersion:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_on_queue_getListenerEndpoint;
- (void)_on_queue_startListeningForClientConnections;
- (_Bool)_on_queue_loadAutomationSupportLibraryFromPath:(id)arg1 error:(id *)arg2;
- (void)_on_queue_connect;
- (void)connect;
- (void)dealloc;
- (id)initWithDaemonConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

