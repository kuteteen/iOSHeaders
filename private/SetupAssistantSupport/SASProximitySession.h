//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUMessageSession, NSObject<OS_dispatch_queue>, SASProximitySessionTransport;

@interface SASProximitySession : NSObject
{
    _Bool _connected;
    id <SASProximitySessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_actionQueue;
    SASProximitySessionTransport *_transport;
}

@property(retain) SASProximitySessionTransport *transport; // @synthesize transport=_transport;
@property(retain) NSObject<OS_dispatch_queue> *actionQueue; // @synthesize actionQueue=_actionQueue;
@property(getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property id <SASProximitySessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1;
- (id)actionFromData:(id)arg1;
- (id)sendAction:(id)arg1;
- (void)receivedAction:(id)arg1 response:(CDUnknownBlockType)arg2;
@property(retain) CUMessageSession *sharingMessageSession;
- (void)invalidate;
- (void)activate;
- (id)init;

@end

