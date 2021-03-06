//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HUPreloadableViewController.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"

@class HMHTMLDocument, NAFuture, NSString, NSURL, UIButton, UIScrollView, UIWebView;

@interface HUSoftwareUpdateLicenseViewController : UIViewController <UIScrollViewDelegate, UIWebViewDelegate, MFMailComposeViewControllerDelegate, HUPreloadableViewController>
{
    NSURL *_URL;
    HMHTMLDocument *_document;
    CDUnknownBlockType _agreeHandler;
    CDUnknownBlockType _disagreeHandler;
    UIScrollView *_scrollView;
    UIButton *_emailButton;
    UIWebView *_webView;
    NAFuture *_loadFuture;
}

@property(readonly, nonatomic) NAFuture *loadFuture; // @synthesize loadFuture=_loadFuture;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) UIButton *emailButton; // @synthesize emailButton=_emailButton;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType disagreeHandler; // @synthesize disagreeHandler=_disagreeHandler;
@property(copy, nonatomic) CDUnknownBlockType agreeHandler; // @synthesize agreeHandler=_agreeHandler;
@property(readonly, copy, nonatomic) HMHTMLDocument *document; // @synthesize document=_document;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)_emailTermsAndConditions:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)_startLoadWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (void)_disagreeToTerms:(id)arg1;
- (void)_agreeToTerms:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)hu_preloadContent;
- (id)_initWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (id)initWithDocument:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

