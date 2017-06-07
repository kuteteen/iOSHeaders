//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSError, NSString, NSURL, NSURLAuthenticationChallenge, NSURLProtectionSpace, NSURLRequest, NSURLResponse, UIImage, UIViewController, UIWebView, WebDataSource, WebFrame, WebFrameView, WebScriptObject, WebSecurityOrigin;
@protocol WebAllowDenyPolicyListener, WebPolicyDecisionListener;

@protocol UIWebViewPrivateDelegate

@optional
- (NSArray *)uiWebView:(UIWebView *)arg1 presentationRectsForPreview:(UIViewController *)arg2;
- (UIImage *)uiWebView:(UIWebView *)arg1 presentationSnapshotForPreview:(UIViewController *)arg2;
- (void)uiWebView:(UIWebView *)arg1 commitPreview:(UIViewController *)arg2;
- (void)uiWebView:(UIWebView *)arg1 didDismissPreview:(UIViewController *)arg2 committing:(_Bool)arg3;
- (void)uiWebView:(UIWebView *)arg1 willPresentPreview:(UIViewController *)arg2;
- (UIViewController *)uiWebView:(UIWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2;
- (_Bool)uiWebView:(UIWebView *)arg1 previewIsAllowedForPosition:(struct CGPoint)arg2;
- (void)uiWebViewClose:(UIWebView *)arg1;
- (void)uiWebView:(UIWebView *)arg1 didClearWindowObject:(WebScriptObject *)arg2 forFrame:(WebFrame *)arg3;
- (NSURLRequest *)uiWebView:(UIWebView *)arg1 resource:(id)arg2 willSendRequest:(NSURLRequest *)arg3 redirectResponse:(NSURLResponse *)arg4 fromDataSource:(WebDataSource *)arg5;
- (NSDictionary *)uiWebView:(UIWebView *)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(WebDataSource *)arg3;
- (void)uiWebViewSupportedOrientationsUpdated:(UIWebView *)arg1;
- (void)uiWebView:(UIWebView *)arg1 printFrameView:(WebFrameView *)arg2;
- (void)uiWebView:(UIWebView *)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(WebSecurityOrigin *)arg2 totalSpaceNeeded:(unsigned long long)arg3;
- (void)uiWebView:(UIWebView *)arg1 frame:(WebFrame *)arg2 exceededDatabaseQuotaForSecurityOrigin:(WebSecurityOrigin *)arg3 database:(NSString *)arg4;
- (void)uiWebView:(UIWebView *)arg1 decidePolicyForMIMEType:(NSString *)arg2 request:(NSURLRequest *)arg3 frame:(WebFrame *)arg4 decisionListener:(id <WebPolicyDecisionListener>)arg5;
- (void)uiWebView:(UIWebView *)arg1 didReceiveTitle:(NSString *)arg2 forFrame:(WebFrame *)arg3;
- (void)uiWebView:(UIWebView *)arg1 didCommitLoadForFrame:(WebFrame *)arg2;
- (void)uiWebView:(UIWebView *)arg1 decidePolicyForGeolocationRequestFromOrigin:(WebSecurityOrigin *)arg2 frame:(WebFrame *)arg3 listener:(id <WebAllowDenyPolicyListener>)arg4;
- (_Bool)uiWebView:(UIWebView *)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg3 forDataSource:(WebDataSource *)arg4;
- (void)uiWebView:(UIWebView *)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg3 fromDataSource:(WebDataSource *)arg4;
- (void)uiWebView:(UIWebView *)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg3 fromDataSource:(WebDataSource *)arg4;
- (void)uiWebView:(UIWebView *)arg1 resource:(id)arg2 didFailLoadingWithError:(NSError *)arg3 fromDataSource:(WebDataSource *)arg4;
- (void)uiWebView:(UIWebView *)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(WebDataSource *)arg3;
- (id)uiWebView:(UIWebView *)arg1 identifierForInitialRequest:(NSURLRequest *)arg2 fromDataSource:(WebDataSource *)arg3;
- (void)uiWebView:(UIWebView *)arg1 didFirstLayoutInFrame:(WebFrame *)arg2;
@end

