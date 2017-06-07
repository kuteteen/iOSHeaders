//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol SPLocalServerProtocol <NSObject>
- (void)wakeExtensionForWatchApp:(NSString *)arg1;
- (void)hideUserNotification;
- (void)showUserNotification:(long long)arg1 applicationName:(NSString *)arg2;
- (void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *, int))arg2;
- (void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *, _Bool))arg2;
- (void)terminateSockPuppetAppForCompanionAppWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)launchSockPuppetAppForCompanionAppWithIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)activeComplicationsWithCompletion:(void (^)(NSArray *))arg1;
- (void)fetchInstalledApplicationsWithCompletion:(void (^)(NSDictionary *))arg1;
@end

