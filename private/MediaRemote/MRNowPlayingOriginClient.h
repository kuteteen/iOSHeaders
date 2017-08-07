//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState>
{
    void *_origin;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _canBeNowPlayingApp;
    _Bool _isOverrideApp;
    unsigned int _routeDiscoveryMode;
    NSMutableArray *_applicationPickedRoutes;
    NSString *_parentApplication;
    unsigned int _visibility;
    union _MRColor _tintColor;
    unsigned int _inputMode;
    _Bool _queueContentNotifications;
    struct NSMutableDictionary *_pendingNotifications;
    NSObject<OS_dispatch_queue> *_pendingNotificationQueue;
    CDUnknownBlockType _playbackQueueCallback;
    CDUnknownBlockType _playbackQueueTransactionCallback;
    CDUnknownBlockType _capabilitiesCallback;
    CDUnknownBlockType _commandCallback;
    CDUnknownBlockType _beginLyricsEventCallback;
    CDUnknownBlockType _endLyricsEventCallback;
    void *_activeNowPlayingClient;
    NSMutableArray *_nowPlayingClients;
    unsigned int _hardwareRemoteBehavior;
}

@property(nonatomic) unsigned int hardwareRemoteBehavior; // @synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior;
@property(readonly, nonatomic) void *origin; // @synthesize origin=_origin;
- (id)description;
- (void)restoreNowPlayingClientState;
- (void)_unregisterMediaServerNotifications;
- (void)_registerMediaServerNotifications;
- (void)_avSessionMediaServicesResetNotification:(id)arg1;
- (void)dispatchQueuedContentChanges;
- (void)startQueuingContentChanges;
- (void)notifyChangeOfContentItem:(void *)arg1 withRequest:(void *)arg2;
- (void)removeClient:(void *)arg1;
- (id)nowPlayingClientForPlayerPath:(void *)arg1;
@property(nonatomic) void *activeNowPlayingClient;
@property(nonatomic) unsigned int inputMode;
@property(nonatomic) union _MRColor tintColor;
@property(nonatomic) unsigned int visibility;
@property(nonatomic) unsigned int routeDiscoveryMode;
@property(nonatomic) _Bool isOverrideApp;
@property(nonatomic) _Bool canBeNowPlayingApp;
@property(copy, nonatomic) NSString *parentApplication;
@property(copy, nonatomic) NSArray *applicationPickedRoutes;
@property(copy, nonatomic) CDUnknownBlockType endLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType beginLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType commandCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueTransactionCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueCallback;
@property(readonly, nonatomic) NSArray *nowPlayingClients;
- (void)dealloc;
- (id)initWithOrigin:(void *)arg1;

@end

