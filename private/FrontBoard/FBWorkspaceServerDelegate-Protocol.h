//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSWorkspaceConnectEvent, FBSWorkspaceCreateSceneRequestEvent, FBSWorkspaceDestroySceneRequestEvent, FBWorkspaceServer;

@protocol FBWorkspaceServerDelegate <NSObject>
- (void)server:(FBWorkspaceServer *)arg1 handleDestroySceneRequest:(FBSWorkspaceDestroySceneRequestEvent *)arg2 withCompletion:(void (^)(void))arg3;
- (void)server:(FBWorkspaceServer *)arg1 handleCreateSceneRequest:(FBSWorkspaceCreateSceneRequestEvent *)arg2 withCompletion:(void (^)(FBScene *))arg3;
- (void)server:(FBWorkspaceServer *)arg1 handleConnectEvent:(FBSWorkspaceConnectEvent *)arg2;
@end

