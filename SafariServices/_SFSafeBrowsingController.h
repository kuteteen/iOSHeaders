//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFSafeBrowsingWarningResponseObserver-Protocol.h>

@class NSString, WKWebView, _SFSecurityInfo, _WKRemoteObjectInterface;
@protocol _SFSafeBrowsingControllerDelegate, _SFSafeBrowsingWebProcessController;

@interface _SFSafeBrowsingController : NSObject <_SFSafeBrowsingWarningResponseObserver>
{
    WKWebView *_webView;
    _WKRemoteObjectInterface *_safeBrowsingResponseObserverInterface;
    id <_SFSafeBrowsingWebProcessController> _safeBrowsingControllerProxy;
    unsigned long long _safeBrowsingCheckSeed;
    _Bool _showingSecurityWarningPage;
    _Bool _loadingSecurityWarningPage;
    id <_SFSafeBrowsingControllerDelegate> _delegate;
    _SFSecurityInfo *_provisionalSecurityInfo;
}

+ (id)_localizedStringsForSafeBrowsing;
@property(readonly, nonatomic, getter=isLoadingSecurityWarningPage) _Bool loadingSecurityWarningPage; // @synthesize loadingSecurityWarningPage=_loadingSecurityWarningPage;
@property(readonly, nonatomic, getter=isShowingSecurityWarningPage) _Bool showingSecurityWarningPage; // @synthesize showingSecurityWarningPage=_showingSecurityWarningPage;
@property(retain, nonatomic) _SFSecurityInfo *provisionalSecurityInfo; // @synthesize provisionalSecurityInfo=_provisionalSecurityInfo;
@property(nonatomic) __weak id <_SFSafeBrowsingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didRespondToSafeBrowsingWarningWithResult:(long long)arg1;
- (void)updateShowingSecurityWarningPageIfNeeded;
- (void)hideSecurityWarningPage;
- (void)showSecurityWarningPageWithSecurityInfo:(id)arg1;
- (id)_securityWarningPageURL;
- (void)commitProvisionalSecurityInfo;
- (void)_fraudulentWebsiteCheckCompletedForURL:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (void)startCheckingFraudulentWebSitesWithURL:(id)arg1;
- (void)cancelCheckForFraudulentWebsites;
- (void)safeBrowsingCheckFinishedWithSecurityInfo:(id)arg1;
- (void)urlPassedSafeBrowsingCheck:(id)arg1 canCache:(_Bool)arg2;
- (void)_setUpSafeBrowsingObserverInterface;
- (void)invalidate;
- (id)safeBrowsingControllerProxy;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

