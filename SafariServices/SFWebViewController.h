//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/SFFormAutoFillControllerDelegate-Protocol.h>
#import <SafariServices/WKNavigationDelegatePrivate-Protocol.h>
#import <SafariServices/WKUIDelegatePrivate-Protocol.h>
#import <SafariServices/_SFDialogControllerDelegate-Protocol.h>
#import <SafariServices/_SFDialogPresenting-Protocol.h>
#import <SafariServices/_SFDialogViewControllerPresenting-Protocol.h>
#import <SafariServices/_SFWebViewDelegate-Protocol.h>
#import <SafariServices/_WKInputDelegate-Protocol.h>

@class NSString, WKWebView, WKWebViewConfiguration, _SFDialogController, _SFFormAutoFillController;
@protocol SFWebViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFWebViewController : UIViewController <SFFormAutoFillControllerDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, _SFDialogControllerDelegate, _SFDialogViewControllerPresenting, _SFWebViewDelegate, _WKInputDelegate, _SFDialogPresenting>
{
    _SFFormAutoFillController *_autoFillController;
    _SFDialogController *_dialogController;
    _Bool _didFirstLayout;
    _Bool _didFinishDocumentLoad;
    _Bool _shouldSuppressDialogsThatBlockWebProcess;
    _Bool _loading;
    _Bool _didFirstVisuallyNonEmptyLayout;
    id <SFWebViewControllerDelegate> _delegate;
    WKWebViewConfiguration *_webViewConfiguration;
}

@property(readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration; // @synthesize webViewConfiguration=_webViewConfiguration;
@property(readonly, nonatomic) _Bool didFirstVisuallyNonEmptyLayout; // @synthesize didFirstVisuallyNonEmptyLayout=_didFirstVisuallyNonEmptyLayout;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <SFWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sfWebViewDidChangeSafeAreaInsets:(id)arg1;
- (void)dialogController:(id)arg1 dismissViewController:(id)arg2 withAdditionalAnimations:(CDUnknownBlockType)arg3;
- (void)dialogController:(id)arg1 presentViewController:(id)arg2 withAdditionalAnimations:(CDUnknownBlockType)arg3;
- (void)presentDialog:(id)arg1 sender:(id)arg2;
- (void)dialogController:(id)arg1 willPresentDialog:(id)arg2;
- (long long)dialogController:(id)arg1 presentationPolicyForDialog:(id)arg2;
- (void)_webView:(id)arg1 requestGeolocationAuthorizationForURL:(id)arg2 frame:(id)arg3 decisionHandler:(CDUnknownBlockType)arg4;
- (void)_webView:(id)arg1 printFrame:(id)arg2;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (id)_actionsForElement:(id)arg1 defaultActions:(id)arg2 isPreviewing:(_Bool)arg3;
- (id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
- (_Bool)_webView:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (void)_webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webViewDidClose:(id)arg1;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;
- (void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;
- (void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;
- (void)_webView:(id)arg1 didStartInputSession:(id)arg2;
- (_Bool)formAutoFillControllerShouldDisableAutoFill:(id)arg1;
- (id)formAutoFillControllerURLForFormAutoFill:(id)arg1;
- (_Bool)formAutoFillControllerCanPrefillForm:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)_webViewDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)willBeginUserInitiatedNavigation;
- (void)willActivateWebViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
@property(readonly, nonatomic) WKWebView *webView;
- (id)_presentingViewControllerForWebView:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadView;
- (id)initWithWebViewConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

