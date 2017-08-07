//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/FBSWorkspaceClientDelegate-Protocol.h>

@class FBSSerialQueue, FBSWorkspaceClient, NSArray, NSMapTable, NSMutableDictionary, NSString;
@protocol FBSWorkspaceDelegate, OS_dispatch_queue;

@interface FBSWorkspace : NSObject <FBSWorkspaceClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <FBSWorkspaceDelegate> _delegate;
    FBSWorkspaceClient *_client;
    FBSSerialQueue *_callOutQueue;
    NSObject<OS_dispatch_queue> *_scenesQueue;
    NSMutableDictionary *_scenesByIdentifier;
    NSMapTable *_triggerToFenceNameMap;
    _Bool _synchronizingFence;
    unsigned long long _signpostName;
}

@property(readonly, retain, nonatomic) FBSSerialQueue *queue; // @synthesize queue=_callOutQueue;
- (void)client:(id)arg1 handleActions:(id)arg2;
- (void)client:(id)arg1 handleDestroyScene:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)client:(id)arg1 handleCreateScene:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)clientEndTransaction:(id)arg1;
- (void)clientBeginTransaction:(id)arg1;
- (void)clientSystemApplicationTerminated:(id)arg1;
- (id)_sceneWithIdentifier:(id)arg1;
- (void)_performDelegateCallOut:(CDUnknownBlockType)arg1;
- (id)_internalQueue;
- (id)_client;
- (Class)_clientClass;
@property(readonly, copy) NSString *description;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(CDUnknownBlockType)arg1;
- (_Bool)trackSystemAnimationFence:(id)arg1;
- (_Bool)isTrackingAnySystemAnimationFence;
- (id)requestSystemAnimationFence;
- (void)requestDestructionOfScene:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enumerateScenesWithBlock:(CDUnknownBlockType)arg1;
- (id)sceneWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *scenes;
@property(nonatomic) id <FBSWorkspaceDelegate> delegate;
- (void)dealloc;
- (id)initWithSerialQueue:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)init;
- (_Bool)isUIApplicationWorkspace;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

