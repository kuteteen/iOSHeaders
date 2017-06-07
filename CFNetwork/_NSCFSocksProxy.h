//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSProxyConnectionDelegate-Protocol.h>

@class NSProxyConnection, NSString, SocksHandshake;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    int _outPort;
    NSString *_outHost;
    SocksHandshake *_socksHandshake;
    NSProxyConnection *_inbound;
    NSProxyConnection *_outbound;
}

+ (void)handleIncomingConnection:(id)arg1 queue:(id)arg2;
+ (id)proxyServers;
@property(retain) NSProxyConnection *outbound; // @synthesize outbound=_outbound;
@property(retain) NSProxyConnection *inbound; // @synthesize inbound=_inbound;
- (void).cxx_destruct;
- (void)outboundConnectionCompleteWithError:(int)arg1;
- (void)outboundConnectionReceivedData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)cleanup;
- (void)connected:(int)arg1;
- (void)readOutbound;
- (void)readInbound;
- (void)handshakeRead;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

