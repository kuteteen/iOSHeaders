//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXMediaComponentView.h>

#import <Silex/SXViewportChangeListener-Protocol.h>
#import <Silex/WKNavigationDelegate-Protocol.h>
#import <Silex/WKNavigationDelegatePrivate-Protocol.h>

@class NSString, WKWebView;

@interface SXEmbedVideoComponentView : SXMediaComponentView <WKNavigationDelegate, WKNavigationDelegatePrivate, SXViewportChangeListener>
{
    _Bool _webViewIsLoaded;
    _Bool _isPresentingFullscreen;
    WKWebView *_webView;
}

+ (id)sharedConfiguration;
@property(nonatomic) _Bool isPresentingFullscreen; // @synthesize isPresentingFullscreen=_isPresentingFullscreen;
@property(nonatomic) _Bool webViewIsLoaded; // @synthesize webViewIsLoaded=_webViewIsLoaded;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (_Bool)allowHierarchyRemoval;
- (unsigned long long)analyticsVideoType;
- (unsigned long long)analyticsMediaType;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (_Bool)shouldAllowRequestToURL:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)handleError:(id)arg1;
- (struct CGRect)visibleFrame;
- (struct CGRect)transitionContentFrame;
- (void)updateWebViewToWidth:(double)arg1;
- (void)initializeWebViewWithURL:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)presentComponent;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
