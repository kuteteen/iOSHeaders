//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSClientDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface CLSEndpointConnection : NSObject <CLSClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_serverConnection;
    NSXPCListenerEndpoint *_endpoint;
    _Bool _connectionBorked;
    _Bool _interrupted;
    int _progressdAvailableToken;
    NSString *_overrideBundleIdentifier;
    CDUnknownBlockType _onInterupt;
    CDUnknownBlockType _onConnect;
}

+ (_Bool)isAllowedToMakeXPCCalls;
+ (_Bool)isClassKitEnabled;
+ (_Bool)isInDevelopmentEnvironment;
+ (id)classKitEnvironment;
+ (id)instanceForEndpoint:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType onConnect; // @synthesize onConnect=_onConnect;
@property(copy, nonatomic) CDUnknownBlockType onInterupt; // @synthesize onInterupt=_onInterupt;
@property(retain, nonatomic) NSString *overrideBundleIdentifier; // @synthesize overrideBundleIdentifier=_overrideBundleIdentifier;
- (void).cxx_destruct;
- (void)client:(id)arg1 recievedNewDevMode:(int)arg2;
- (void)accountChanged;
- (void)_addBarrierBlock:(CDUnknownBlockType)arg1;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (void)connect;
- (void)deleteAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateBundleIdentifier:(id)arg1 forConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOverrideBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)listAppsWithCompletion:(CDUnknownBlockType)arg1;
- (id)server:(CDUnknownBlockType)arg1;
- (id)utilityServer:(CDUnknownBlockType)arg1;
- (id)dataServer:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)connectionBorked;
- (void)connectionInterupted;
- (void)_envokeOnInteruptCallback;
- (id)serverConnection;
- (_Bool)_isBorked;
- (_Bool)isBorked;
- (void)_registerForDarwinNotifications;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

