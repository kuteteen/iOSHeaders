//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import "SXViewportChangeListener.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"

@class NSMutableSet, NSString, SXEmbedResource, SXWebCrashRetryThrottler, UIActivityIndicatorView, UILabel, WKNavigation, WKWebView;

@interface SXEmbedComponentView : SXComponentView <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, UIGestureRecognizerDelegate, UIScrollViewDelegate, SXViewportChangeListener>
{
    _Bool _failedLoading;
    _Bool _isCurrentlyLoadingEmbedData;
    id <SXReachabilityProvider> _reachabilityProvider;
    id <SXEmbedService> _embedService;
    id <SXComponentActionHandler> _actionHandler;
    id <SXEmbedType> _embedConfiguration;
    SXEmbedResource *_embedResource;
    WKWebView *_webView;
    SXWebCrashRetryThrottler *_webCrashRetryThrottler;
    WKWebView *_webViewPresentingInFullscreen;
    UILabel *_errorLabel;
    NSString *_HTML;
    NSString *_userScript;
    NSMutableSet *_expectedMessages;
    UIActivityIndicatorView *_activityIndicator;
    WKNavigation *_initialNavigation;
    struct CGSize _currentlyLayoutingForSize;
    struct CGSize _currentLayoutSize;
    struct CGSize _currentViewportSize;
    struct CGPoint _lastKnownTouchPoint;
}

@property(retain, nonatomic) WKNavigation *initialNavigation; // @synthesize initialNavigation=_initialNavigation;
@property(nonatomic) _Bool isCurrentlyLoadingEmbedData; // @synthesize isCurrentlyLoadingEmbedData=_isCurrentlyLoadingEmbedData;
@property(nonatomic) struct CGPoint lastKnownTouchPoint; // @synthesize lastKnownTouchPoint=_lastKnownTouchPoint;
@property(nonatomic) struct CGSize currentViewportSize; // @synthesize currentViewportSize=_currentViewportSize;
@property(nonatomic) struct CGSize currentLayoutSize; // @synthesize currentLayoutSize=_currentLayoutSize;
@property(nonatomic) struct CGSize currentlyLayoutingForSize; // @synthesize currentlyLayoutingForSize=_currentlyLayoutingForSize;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) _Bool failedLoading; // @synthesize failedLoading=_failedLoading;
@property(retain, nonatomic) NSMutableSet *expectedMessages; // @synthesize expectedMessages=_expectedMessages;
@property(retain, nonatomic) NSString *userScript; // @synthesize userScript=_userScript;
@property(retain, nonatomic) NSString *HTML; // @synthesize HTML=_HTML;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) WKWebView *webViewPresentingInFullscreen; // @synthesize webViewPresentingInFullscreen=_webViewPresentingInFullscreen;
@property(retain, nonatomic) SXWebCrashRetryThrottler *webCrashRetryThrottler; // @synthesize webCrashRetryThrottler=_webCrashRetryThrottler;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) SXEmbedResource *embedResource; // @synthesize embedResource=_embedResource;
@property(retain, nonatomic) id <SXEmbedType> embedConfiguration; // @synthesize embedConfiguration=_embedConfiguration;
@property(readonly, nonatomic) id <SXComponentActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) id <SXEmbedService> embedService; // @synthesize embedService=_embedService;
@property(readonly, nonatomic) id <SXReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
- (void).cxx_destruct;
- (_Bool)allowHierarchyRemoval;
- (unsigned long long)userActionMediaTypes;
- (void)showActivityIndicator:(_Bool)arg1;
- (_Bool)hasLoadedEmbedData;
- (_Bool)shouldShowWebView;
- (_Bool)shouldLayoutWebView;
- (double)initialScale;
- (id)HTMLByEnclosingHTML:(id)arg1 withHTML:(id)arg2;
- (id)enclosingHTML;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (_Bool)shouldAllowRequestToURL:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (id)unableToLoadMessage;
- (void)handleError:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)finalizeLayoutForSize:(struct CGSize)arg1;
- (void)layoutWebViewForSize:(struct CGSize)arg1;
- (void)reloadEmbed;
- (void)loadWebViewIfNeeded;
- (void)displayEmbedIfNeeded;
- (void)loadEmbedData;
- (void)loadEmbedIfNeeded;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)willPresentComponent;
- (void)discardContents;
- (void)renderContents;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 reachabilityProvider:(id)arg6 embedService:(id)arg7 actionHandler:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

