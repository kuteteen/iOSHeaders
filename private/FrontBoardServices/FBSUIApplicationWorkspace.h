//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspace.h>

#import "FBSUIApplicationWorkspaceClientDelegate.h"

@class NSString;

@interface FBSUIApplicationWorkspace : FBSWorkspace <FBSUIApplicationWorkspaceClientDelegate>
{
}

- (void)clientHandleAssertionExpirationImminent:(id)arg1;
- (void)client:(id)arg1 handleExit:(id)arg2;
- (void)client:(id)arg1 handleLaunch:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)isUIApplicationWorkspace;
- (Class)_clientClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <FBSUIApplicationWorkspaceDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

