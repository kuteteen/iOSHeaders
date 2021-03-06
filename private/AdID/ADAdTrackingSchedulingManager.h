//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class APSConnection, NSString;

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate>
{
    _Bool _isConfigRequestInFlight;
    id <NSObject> _storeFrontNotifyToken;
    id <NSObject> _cloudKitNotifyToken;
    APSConnection *_pushConnection;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isConfigRequestInFlight; // @synthesize isConfigRequestInFlight=_isConfigRequestInFlight;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(retain, nonatomic) id <NSObject> cloudKitNotifyToken; // @synthesize cloudKitNotifyToken=_cloudKitNotifyToken;
@property(retain, nonatomic) id <NSObject> storeFrontNotifyToken; // @synthesize storeFrontNotifyToken=_storeFrontNotifyToken;
- (void).cxx_destruct;
- (void)runOnFirstUnlock:(CDUnknownBlockType)arg1;
- (void)registerForLockStateNotification;
- (_Bool)deviceUnlockedOnce;
- (_Bool)purpleBuddyWillRun;
- (void)handleAccountChange;
- (void)pushDisable;
- (void)pushEnable;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)currentBundleID;
- (void)forceExpiration;
- (void)refreshConfiguration:(CDUnknownBlockType)arg1;
- (void)handleConfiguration;
- (_Bool)isAdEnabledLocality;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

