//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/IKAppContextDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/IKApplication-Protocol.h>
#import <VideoSubscriberAccountUI/VSStateMachineDelegate-Protocol.h>

@class IKAppContext, NSError, NSHTTPCookieStorage, NSString, NSURL, VSAppDeviceConfig, VSAuditToken, VSStateMachine;
@protocol VSApplicationDelegate;

__attribute__((visibility("hidden")))
@interface VSApplication : NSObject <IKAppContextDelegate, VSStateMachineDelegate, IKApplication>
{
    _Bool _shouldAllowRemoteInspection;
    NSURL *_bootURL;
    IKAppContext *_appContext;
    id <VSApplicationDelegate> _delegate;
    VSAuditToken *_auditToken;
    VSStateMachine *_stateMachine;
    VSAppDeviceConfig *_appDeviceConfig;
    NSHTTPCookieStorage *_cookieStorage;
    NSError *_failureToStart;
}

@property(retain, nonatomic) NSError *failureToStart; // @synthesize failureToStart=_failureToStart;
@property(retain, nonatomic) NSHTTPCookieStorage *cookieStorage; // @synthesize cookieStorage=_cookieStorage;
@property(retain, nonatomic) VSAppDeviceConfig *appDeviceConfig; // @synthesize appDeviceConfig=_appDeviceConfig;
@property(retain, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) _Bool shouldAllowRemoteInspection; // @synthesize shouldAllowRemoteInspection=_shouldAllowRemoteInspection;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) __weak id <VSApplicationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, copy, nonatomic) NSURL *bootURL; // @synthesize bootURL=_bootURL;
- (void).cxx_destruct;
- (id)viewElementRegistry;
- (id)activeDocument;
- (id)appLaunchParams;
- (id)userDefaultsStorage;
- (id)vendorStorage;
- (id)localStorage;
- (id)vendorIdentifier;
- (id)appIdentifier;
- (id)appJSURL;
- (_Bool)shouldIgnoreJSValidation;
- (_Bool)appIsTrusted;
- (id)sourceApplicationAuditTokenDataForContext:(id)arg1;
- (id)sourceApplicationBundleIdentifierForContext:(id)arg1;
- (id)xhrSessionConfigurationForContext:(id)arg1;
- (id)objectForPlayer:(id)arg1;
- (id)objectForPlaylist:(id)arg1;
- (id)objectForMediaItem:(id)arg1;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (_Bool)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (id)deviceConfigForContext:(id)arg1;
- (void)appDocumentForDocument:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendErrorWithMessage:(id)arg1;
- (void)evaluate:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)start;
- (void)transitionToInvalidState;
- (void)transitionToStoppingState;
- (void)transitionToReadyState;
- (void)transitionToNotifyingOfFailureToStartState;
- (void)transitionToStartingState;
- (void)dealloc;
- (id)initWithBootURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

