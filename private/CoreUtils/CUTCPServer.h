//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUNetLinkManager, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CUTCPServer : NSObject
{
    struct NSMutableSet *_connections;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_source> *_listenerSourceV4;
    NSObject<OS_dispatch_source> *_listenerSourceV6;
    struct LogCategory *_ucat;
    unsigned int _flags;
    unsigned int _maxConnectionCount;
    int _tcpListenPort;
    int _tcpListeningPort;
    CDUnknownBlockType _connectionStartedHandler;
    CDUnknownBlockType _connectionEndedHandler;
    CDUnknownBlockType _connectionPrepareHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CUNetLinkManager *_netLinkManager;
}

@property(nonatomic) int tcpListeningPort; // @synthesize tcpListeningPort=_tcpListeningPort;
@property(nonatomic) int tcpListenPort; // @synthesize tcpListenPort=_tcpListenPort;
@property(retain, nonatomic) CUNetLinkManager *netLinkManager; // @synthesize netLinkManager=_netLinkManager;
@property(nonatomic) unsigned int maxConnectionCount; // @synthesize maxConnectionCount=_maxConnectionCount;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionPrepareHandler; // @synthesize connectionPrepareHandler=_connectionPrepareHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionEndedHandler; // @synthesize connectionEndedHandler=_connectionEndedHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionStartedHandler; // @synthesize connectionStartedHandler=_connectionStartedHandler;
- (void).cxx_destruct;
- (void)_handleConnectionInvalidated:(id)arg1 addr:(const CDUnion_fab80606 *)arg2;
- (void)_handleConnectionAccept:(int)arg1;
- (void)_invalidated;
- (void)invalidate;
- (_Bool)activateDirectAndReturnError:(id *)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)detailedDescription;
- (id)description;
- (void)dealloc;
- (id)init;

@end

