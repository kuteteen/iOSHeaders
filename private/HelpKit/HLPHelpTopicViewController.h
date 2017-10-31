//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HLPHelpLoadingViewDelegate.h"
#import "HLPHelpTopicViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIWebViewDelegate.h"

@class HLPHelpBookController, HLPHelpLoadingView, HLPHelpLocale, HLPHelpTopicHistoryItem, HLPHelpUsageController, HLPURLSession, NSArray, NSCache, NSLayoutConstraint, NSMutableArray, NSString, NSURL, UIBarButtonItem, UITapGestureRecognizer, UIWebView;

@interface HLPHelpTopicViewController : UIViewController <UIGestureRecognizerDelegate, UIWebViewDelegate, HLPHelpTopicViewControllerDelegate, HLPHelpLoadingViewDelegate>
{
    id _interactivePopGestureRecognizerDelegate;
    _Bool _canShowTOC;
    _Bool _webViewLoaded;
    _Bool _RTL;
    HLPURLSession *_URLSession;
    HLPHelpBookController *_helpBookController;
    NSCache *_topicCache;
    NSMutableArray *_topicHistory;
    UIBarButtonItem *_tocBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSLayoutConstraint *_loadingViewTopConstraint;
    _Bool _displayHelpTopicsOnly;
    _Bool _hideDoneButton;
    _Bool _showTopicNameAsTitle;
    id <HLPHelpTopicViewControllerDelegate> _delegate;
    NSURL *_helpBookURL;
    UIWebView *_webView;
    HLPHelpLocale *_locale;
    HLPHelpTopicHistoryItem *_currentTopicHistoryItem;
    HLPHelpLoadingView *_loadingView;
    HLPHelpUsageController *_usageController;
    NSArray *_searchTerms;
}

@property(retain, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(retain, nonatomic) HLPHelpUsageController *usageController; // @synthesize usageController=_usageController;
@property(retain, nonatomic) HLPHelpLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) HLPHelpTopicHistoryItem *currentTopicHistoryItem; // @synthesize currentTopicHistoryItem=_currentTopicHistoryItem;
@property(retain, nonatomic) HLPHelpBookController *helpBookController; // @synthesize helpBookController=_helpBookController;
@property(retain, nonatomic) HLPHelpLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURL *helpBookURL; // @synthesize helpBookURL=_helpBookURL;
@property(nonatomic) _Bool showTopicNameAsTitle; // @synthesize showTopicNameAsTitle=_showTopicNameAsTitle;
@property(nonatomic) _Bool hideDoneButton; // @synthesize hideDoneButton=_hideDoneButton;
@property(nonatomic) _Bool displayHelpTopicsOnly; // @synthesize displayHelpTopicsOnly=_displayHelpTopicsOnly;
@property(nonatomic) __weak id <HLPHelpTopicViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showHelpBookInfo:(id)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
- (void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
- (void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)showWebViewDelay;
- (void)updateHTMLStringPath:(id)arg1 tag:(id)arg2 attribute:(id)arg3;
- (void)loadHTMLString:(id)arg1 anchor:(id)arg2;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3 topicAccessType:(long long)arg4;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3;
- (void)reloadCurrentTopic;
- (void)saveCurrentTopicItem;
- (void)dismiss;
- (void)showTableOfContent;
- (void)dismissWelcomeHelpTopic;
- (void)updateNavigationButtons;
- (void)updateScrollPositionForCurrentTopicItem;
- (void)forwardButtonTapped;
- (void)backButtonTapped;
- (void)updateDoneButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

