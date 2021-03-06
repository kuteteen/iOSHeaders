//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RequestDesktopSiteUIProcessListener.h"
#import "SFContentBlockerManagerObserver.h"

@class NSMutableDictionary, NSString, WKWebView, _SFInjectedJavaScriptController, _WKRemoteObjectInterface;

@interface _SFReloadOptionsController : NSObject <RequestDesktopSiteUIProcessListener, SFContentBlockerManagerObserver>
{
    _WKRemoteObjectInterface *_requestDesktopSiteUIProcessPlugInListenerInterface;
    id <RequestDesktopSiteWebProcessPlugInListener> _requestDesktopSiteWebProcessPlugInListener;
    NSMutableDictionary *_domainToUserAgentPolicyMap;
    WKWebView *_webView;
    _Bool _hasEnabledContentBlockers;
    _SFInjectedJavaScriptController *_activityJSController;
}

@property(nonatomic) _Bool hasEnabledContentBlockers; // @synthesize hasEnabledContentBlockers=_hasEnabledContentBlockers;
@property(readonly, nonatomic) _SFInjectedJavaScriptController *activityJSController; // @synthesize activityJSController=_activityJSController;
- (void).cxx_destruct;
- (void)contentBlockerManagerExtensionListDidChange:(id)arg1;
- (void)_checkForContentBlockers;
- (void)dealloc;
- (void)invalidate;
- (void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1;
- (void)requestDesktopSiteWithURL:(id)arg1;
- (void)requestDesktopSite;
@property(readonly, nonatomic) _Bool loadedUsingDesktopUserAgent;
- (void)_setUpPlugInListenersIfNeeded;
- (id)init;
- (id)initWithWebView:(id)arg1 activityJSController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

