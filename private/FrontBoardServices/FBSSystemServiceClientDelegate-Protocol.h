//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSSystemServiceClient, FBSXPCMessage, NSError;

@protocol FBSSystemServiceClientDelegate <NSObject>
- (void)client:(FBSSystemServiceClient *)arg1 handleError:(NSError *)arg2;
- (void)client:(FBSSystemServiceClient *)arg1 handleMessage:(FBSXPCMessage *)arg2 withType:(long long)arg3;
- (void)client:(FBSSystemServiceClient *)arg1 configureConnectMessage:(FBSXPCMessage *)arg2;
@end

