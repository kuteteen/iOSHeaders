//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import "CAAnimationDelegate.h"
#import "TVAppTemplateImpressionable.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class CALayer, IKAudioElement, IKImageElement, IKViewElement, NSArray, NSIndexPath, NSString, UICollectionView, UIImage, UIImageView, UIView, UIViewController, _TVProductCollectionViewCell;

__attribute__((visibility("hidden")))
@interface _TVProductTemplateController : _TVBgImageLoadingViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, TVAppTemplateImpressionable, CAAnimationDelegate, UIPopoverPresentationControllerDelegate>
{
    IKViewElement *_templateElement;
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImageElement;
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    CALayer *_bgBlurSublayer;
    UIView *_backdropView;
    IKViewElement *_backdropTintElement;
    UIView *_backdropTintView;
    UIViewController *_backdropTintViewController;
    UIImageView *_vignetteView;
    UIImageView *_tvVignetteView;
    IKAudioElement *_bgAudioElement;
    IKViewElement *_productBannerElement;
    IKViewElement *_infoListElement;
    IKViewElement *_titleElement;
    UICollectionView *_collectionView;
    UIViewController *_bannerViewController;
    NSArray *_viewControllers;
    NSArray *_rowSpacingMetricsList;
    double _productBannerHeight;
    _Bool _isPartialScrollingTemplate;
    NSIndexPath *_autoHighlightIndexPath;
    _Bool _fadedIn;
    double _impressionThreshold;
    _Bool _preloadOnLayout;
    struct CGSize _preloadContentSize;
    UIImageView *_topHeroImageView;
    UIView *_topHeroSeparatorView;
    UIImageView *_topHeroGradientView;
    _Bool _topHeroImageVisible;
    _Bool _lightStatusBar;
    IKImageElement *_topHeroImageElement;
    double _largeTitleHeight;
    _Bool _sportsProductTemplate;
    _TVProductCollectionViewCell *_bannerCell;
}

- (void).cxx_destruct;
- (struct CGSize)_maxContentSize;
- (void)_updateBackgroundTintViewEffects;
- (void)_updateBackgroundTintView;
- (void)_configureBackgroundTintView;
- (_Bool)_sportsLandscapePhoneIsOverlaySection:(id)arg1;
- (_Bool)_sportsLandscapePhone;
- (_Bool)_shouldShowTopHeroImage;
- (_Bool)_shouldUsePartialScrollingTemplate;
- (struct UIEdgeInsets)_cellMarginForIndex:(long long)arg1 partialMargins:(struct UIEdgeInsets *)arg2;
- (id)_spacingMetricsForViewControllers:(id)arg1 contentSize:(struct CGSize *)arg2;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (_Bool)_isBackdropNeeded;
- (_Bool)_backgroundImageRequiresBlur;
- (id)_backgroundImageProxy;
- (struct CGSize)_backgroundImageProxySize;
- (long long)_blurEffectStyle;
- (void)_configureWithBannerElement:(id)arg1;
- (void)_configureWithBgElement:(id)arg1;
- (void)_configureTopHeroImage:(id)arg1;
- (id)_relatedSectionHeaderView;
- (unsigned long long)_lastFocusableCellIndex;
- (id)_yOffsetForView:(id)arg1 withScrollView:(id)arg2 targetYOffset:(double)arg3;
- (id)_canonicalIDForElement:(id)arg1;
- (id)_adamIDForElement:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_recordImpressionsForVisibleView;
- (void)_cancelImpressionsUpdate;
- (void)_updateImpressions;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (void)_updateTopHeroImageVisibility:(id)arg1;
- (void)_updateTopHeroImageOverlay;
- (double)_largeTitleHeight;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)_topHeroImageViewSize;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)_overrideLargeTitleDisplayMode;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)configureAppearanceTransition;
- (void)viewWillAppear:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;
- (void)updateWithProductTemplate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

