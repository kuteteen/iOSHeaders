//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSString, NSUUID, _UIAsyncInvocation, _UIRemoteViewControllerConnectionInfo, _UIRemoteViewService;
@protocol OS_dispatch_queue, _UIViewServiceDeputyXPCInterface;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerConnectionRequest : NSObject
{
    _UIRemoteViewService *_service;
    CDUnknownBlockType _handler;
    NSString *_viewServiceBundleIdentifier;
    NSString *_viewControllerClassName;
    NSUUID *_contextToken;
    NSArray *_serializedAppearanceCustomizations;
    _Bool _legacyAppearance;
    id _exportedHostingObject;
    Class _remoteViewControllerClass;
    id <_UIViewServiceDeputyXPCInterface> _serviceViewControllerDeputyInterface;
    _UIAsyncInvocation *_cancelInvocationForCurrentOperation;
    _UIRemoteViewControllerConnectionInfo *_connectionInfo;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isCancelledOrComplete;
    NSError *_error;
    _UIAsyncInvocation *_requestCancellationInvocation;
}

+ (id)requestViewControllerWithService:(id)arg1 serializedAppearanceCustomizations:(id)arg2 legacyAppearance:(_Bool)arg3 exportedHostingObject:(id)arg4 remoteViewControllerClass:(Class)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(CDUnknownBlockType)arg7;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serializedAppearanceCustomizations:(id)arg3 legacyAppearance:(_Bool)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(CDUnknownBlockType)arg7;
+ (id)__requestRemoteViewController:(id)arg1 service:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 serializedAppearanceCustomizations:(id)arg4 legacyAppearance:(_Bool)arg5 exportedHostingObject:(id)arg6 serviceViewControllerDeputyInterface:(id)arg7 connectionHandler:(CDUnknownBlockType)arg8;
- (void).cxx_destruct;
- (id)_cancelWithError:(id)arg1;
- (void)_didFinishEstablishingConnection;
- (void)_connectToViewControllerControlMessageDeputy;
- (void)_connectToServiceViewController;
- (void)_sendServiceTextEffectsRequest;
- (void)_connectToTextEffectsOperator;
- (void)_sendServiceViewControllerRequest;
- (void)_connectToViewControllerOperator;
- (void)_connectToPlugInKitService;
- (void)_connectToViewService;
- (void)_connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 successHandler:(CDUnknownBlockType)arg3;
- (void)_cancelUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

