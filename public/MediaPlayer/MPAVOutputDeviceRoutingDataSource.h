//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class MPAVEndpointRoute, NSArray, NSError, NSObject<OS_dispatch_queue>, NSString;

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    void *_applicationOutputContext;
    NSError *_applicationOutputContextCreationError;
    _Bool _attemptedToInitializeAppOutputContext;
    void *_discoverySession;
    void *_callbackToken;
    _Bool _supportsMultipleSelection;
    _Bool _devicePresenceDetected;
    NSArray *_outputDeviceRoutes;
    MPAVEndpointRoute *_endpointRoute;
}

+ (id)_globalAudioSessionLock;
@property(retain, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
- (void).cxx_destruct;
- (id)_outputDeviceRouteWithUID:(id)arg1;
- (void)_outputDevicesDidChange:(id)arg1;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void *)_copyApplicationOutputContext:(id *)arg1;
- (void *)_createDefaultApplicationOutputContext:(id *)arg1 outAudioSessionID:(unsigned int *)arg2;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_outputDevicesDidChangeNotification:(id)arg1;
- (void)_endpointsDidChangeNotification:(id)arg1;
- (_Bool)routeIsLeaderOfEndpoint:(id)arg1;
- (void)removeRouteFromGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addRouteToGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)devicePresenceDetected;
- (void)setDiscoveryMode:(long long)arg1;
- (long long)discoveryMode;
- (_Bool)supportsMultipleSelection;
@property(copy, nonatomic) NSString *routingContextUID;
- (void)dealloc;
- (id)init;

@end

