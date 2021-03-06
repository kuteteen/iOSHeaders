//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "ADPrivacyViewControllerDelegate.h"
#import "SKUIDocumentViewController.h"

@class NSString, SKUITrendingSearchTemplateElement, SKUITrendingSearchView, UIViewController;

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <ADPrivacyViewControllerDelegate, SKUIDocumentViewController>
{
    SKUITrendingSearchView *_resultsView;
    SKUITrendingSearchTemplateElement *_template;
    UIViewController *_privacyViewController;
}

@property(retain, nonatomic) UIViewController *privacyViewController; // @synthesize privacyViewController=_privacyViewController;
@property(retain, nonatomic) SKUITrendingSearchTemplateElement *template; // @synthesize template=_template;
@property(retain, nonatomic) SKUITrendingSearchView *resultsView; // @synthesize resultsView=_resultsView;
- (void).cxx_destruct;
- (void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)adPrivacyViewControllerDidDismiss:(id)arg1;
- (void)adPrivacyViewControllerDidLoad:(id)arg1;
- (struct UIEdgeInsets)_resultsViewContentInset;
- (void)_reloadResultsView;
- (void)searchResultButtonTapped:(id)arg1;
- (void)resultsViewTapRecognized:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)impressionableViewElements;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

