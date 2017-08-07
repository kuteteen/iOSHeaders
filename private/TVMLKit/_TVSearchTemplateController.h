//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/IKAppKeyboardDelegate-Protocol.h>
#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/UICollectionViewDataSource-Protocol.h>
#import <TVMLKit/UICollectionViewDelegate-Protocol.h>
#import <TVMLKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <TVMLKit/UISearchBarDelegate-Protocol.h>
#import <TVMLKit/_TVSearchTemplateViewDelegate-Protocol.h>

@class IKAppKeyboard, IKImageElement, IKTextFieldElement, IKViewElement, NSArray, NSIndexPath, NSString, UIImage, UISearchBar, UISystemInputViewController, UIViewController, _TVSearchTemplateView;

__attribute__((visibility("hidden")))
@interface _TVSearchTemplateController : _TVBgImageLoadingViewController <_TVSearchTemplateViewDelegate, IKAppKeyboardDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UISearchBarDelegate, TVAppTemplateImpressionable>
{
    IKViewElement *_templateElement;
    IKTextFieldElement *_searchFieldElement;
    IKAppKeyboard *_ikKeyboard;
    IKViewElement *_bannerElement;
    IKViewElement *_scopeElement;
    IKViewElement *_suggestionsElement;
    IKViewElement *_collectionListElement;
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImgElement;
    _TVSearchTemplateView *_searchTemplateView;
    UISearchBar *_searchBar;
    UISystemInputViewController *_systemInputViewController;
    UIViewController *_scopeViewController;
    UIViewController *_suggestionsViewController;
    NSArray *_viewControllers;
    NSArray *_rowSpacingMetricsList;
    NSIndexPath *_focusedViewControllerIndexPath;
    double _impressionThreshold;
    UIImage *_backgroundImage;
}

+ (id)_viewControllerFromElement:(id)arg1 existingController:(id)arg2;
- (void).cxx_destruct;
- (_Bool)_shouldShowSuggestions;
- (_Bool)_shouldShowScope;
- (void)_setFocusedIndexPath:(id)arg1;
- (id)_viewControllers;
- (void)_updateKeyboardText;
- (void)_updateSearchFieldText;
- (struct CGRect)_visibleRectInRect:(struct CGRect)arg1;
- (struct UIEdgeInsets)_adjustedCollectionMargins;
- (void)_adjustOriginForSuggestionsView:(id)arg1 inCell:(id)arg2;
- (void)_adjustFrameForScopeView:(id)arg1 inCell:(id)arg2;
- (void)_updateViewIgnoringSparseUpdates:(_Bool)arg1;
- (void)_buildSpacingMetrics;
- (_Bool)_updateCollectionList;
- (long long)_viewControllerIndexForSection:(long long)arg1;
- (long long)_sectionForViewControllerIndex:(long long)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (struct TVRowMetrics)_collapsedRowMetricsForViewController:(id)arg1;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (struct CGSize)_backgroundImageProxySize;
- (long long)_blurEffectStyle;
- (_Bool)_backgroundImageRequiresBlur;
- (id)_backgroundImageProxy;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_recordImpressionsForVisibleView;
- (void)_cancelImpressionsUpdate;
- (void)_updateImpressions;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)textDidChangeForKeyboard:(id)arg1;
- (_Bool)_enableAutomaticKeyboardPressDone;
- (_Bool)_disableAutomaticKeyboardUI;
- (void)searchTemplateView:(id)arg1 didOffsetOriginForCollectionView:(id)arg2;
- (id)searchTemplateView:(id)arg1 preferredFocusEnvironmentForKeyboard:(id)arg2;
- (void)siri_endInteractiveTransition;
- (void)siri_beginInteractiveTransition;
- (void)tv_updateViewLayout;
- (void)scrollToTop;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

