//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BRFileCoordinationProvider.h"

@class NSString;

@protocol BRTokenProtocol <BRFileCoordinationProvider>
- (void)getPrimaryiCloudAccountStatus:(void (^)(NSDictionary *, NSError *))arg1;
- (void)currentAccountCopyTokenWithBundleID:(NSString *)arg1 version:(NSString *)arg2 reply:(void (^)(NSData *, NSError *))arg3;
@end

