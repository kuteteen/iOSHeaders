//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBSceneClient-Protocol.h>
#import <FrontBoard/FBUISceneHost-Protocol.h>

@class FBSSceneParameters, NSString;
@protocol FBSceneHost, FBUISceneClientProxy;

@interface FBUISceneHostBridge : NSObject <FBUISceneHost, FBSceneClient>
{
    NSString *_identifier;
    FBSSceneParameters *_parameters;
    id <FBSceneHost> _legacyHost;
    id <FBUISceneClientProxy> _sceneClient;
    _Bool _invalidated;
}

@property(retain) id <FBUISceneClientProxy> sceneClient; // @synthesize sceneClient=_sceneClient;
@property __weak id <FBSceneHost> legacyHost; // @synthesize legacyHost=_legacyHost;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)host:(id)arg1 configureWithDefinition:(id)arg2 parameters:(id)arg3;
- (void)didInvalidateSceneClient:(id)arg1;
- (void)sceneClient:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)sceneClient:(id)arg1 didDetachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didAttachLayer:(id)arg2;
- (id)sceneSpecification;
- (id)sceneIdentifier;
- (void)invalidateSceneClient;
- (void)registerSceneClient:(id)arg1;
- (void)dealloc;
- (id)initWithSceneIdentifier:(id)arg1 initialParameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

