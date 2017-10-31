//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@class FBSProcessHandle;

@interface FBSSystemAppProxy : FBSSystemServiceFacilityClient
{
    FBSProcessHandle *_processHandle;
}

+ (id)sharedInstance;
- (void)fireCompletion:(CDUnknownBlockType)arg1 openAppErrorCode:(long long)arg2;
- (void)fireCompletion:(CDUnknownBlockType)arg1 pidResult:(int)arg2 error:(id)arg3;
- (void)fireCompletion:(CDUnknownBlockType)arg1 bundleIDResult:(id)arg2 error:(id)arg3;
- (void)fireCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (id)clientCallbackQueue;
- (void)_sendMessageType:(long long)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)_handleConnect:(id)arg1;
- (void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shutdownWithOptions:(id)arg1;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendActions:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)processHandleForApplication:(id)arg1;
- (void)openApplication:(id)arg1 options:(id)arg2 clientHandle:(id)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)canActivateApplication:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)isPasscodeLockedOrBlockedWithCompletion:(CDUnknownBlockType)arg1;
- (void)systemApplicationBundleIdentifierWithResult:(CDUnknownBlockType)arg1;
- (void)setNextWakeInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationBundleID:(id)arg1 requestBrightness:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)suspendCurrentApplication;
- (void)deleteAllSnapshotsForApplication:(id)arg1;
- (void)dataResetWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)badgeValueForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setBadgeValue:(id)arg1 forBundleID:(id)arg2;
- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkInUIApplication;
- (void)dealloc;
- (id)init;

@end

