//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFPeerInfo, NSBundle, NSString, NSURL, SABaseCommand;

@protocol AFServiceHelper <NSObject>
- (AFPeerInfo *)peerInfoForCurrentCommand;
- (_Bool)isTimeoutSuspended;
- (void)handleCommand:(SABaseCommand *)arg1 completion:(void (^)(SABaseCommand *, NSError *))arg2;
- (_Bool)isDeviceLockedWithPasscode;
- (NSString *)assistantLocalizedStringForKey:(NSString *)arg1 table:(NSString *)arg2 bundle:(NSBundle *)arg3;
- (void)dismissAssistant;
- (_Bool)openSensitiveURL:(NSURL *)arg1;
@end

