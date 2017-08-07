//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXUIWidget-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, PHAsset, PXOneUpPresentation, PXPhotosDetailsContext, PXPlacesMapFetchResultViewController, PXPlacesMapViewPort, PXPlacesSnapshotFactory, PXSectionedSelectionManager, PXTilingController, PXUIImageView, PXWidgetSpec, UIButton, UIFont, UIView;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXUIMapWidget : NSObject <PXPhotosDataSourceChangeObserver, PXUIWidget>
{
    struct CGSize _contentSize;
    PXPlacesMapViewPort *_viewPort;
    _Bool _didDisplayContentView;
    _Bool _isLoaded;
    NSMutableDictionary *_fetchedImages;
    long long _lastFetchedBoundingRectAssetCount;
    _Bool _showAddressLink;
    _Bool _hasLoadedContentData;
    UIFont *_footerFont;
    id <PXWidgetDelegate> _widgetDelegate;
    id <PXWidgetUnlockDelegate> _widgetUnlockDelegate;
    PXPhotosDetailsContext *_context;
    PXWidgetSpec *_spec;
    UIView *__containerView;
    UIView *__contentView;
    PXUIImageView *__imageView;
    PXPlacesMapFetchResultViewController *__mapViewController;
    NSString *__cachedLocalizedTitle;
    NSString *__cachedDisclosureTitle;
    UIButton *_footerButton;
    PHAsset *_assetUsedForFooterTitle;
    NSString *_cachedFooterTitle;
    double _footerHeight;
    double _height;
    NSMutableArray *__nearbyCountCompletionBlocks;
    PXPlacesSnapshotFactory *__factory;
}

@property(nonatomic, setter=_setHasLoadedContentData:) _Bool hasLoadedContentData; // @synthesize hasLoadedContentData=_hasLoadedContentData;
@property(retain, nonatomic) PXPlacesSnapshotFactory *_factory; // @synthesize _factory=__factory;
@property(retain, nonatomic) NSMutableArray *_nearbyCountCompletionBlocks; // @synthesize _nearbyCountCompletionBlocks=__nearbyCountCompletionBlocks;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(retain, nonatomic) NSString *cachedFooterTitle; // @synthesize cachedFooterTitle=_cachedFooterTitle;
@property(retain, nonatomic) PHAsset *assetUsedForFooterTitle; // @synthesize assetUsedForFooterTitle=_assetUsedForFooterTitle;
@property(readonly, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) NSString *_cachedDisclosureTitle; // @synthesize _cachedDisclosureTitle=__cachedDisclosureTitle;
@property(retain, nonatomic) NSString *_cachedLocalizedTitle; // @synthesize _cachedLocalizedTitle=__cachedLocalizedTitle;
@property(readonly, nonatomic) PXPlacesMapFetchResultViewController *_mapViewController; // @synthesize _mapViewController=__mapViewController;
@property(readonly, nonatomic) PXUIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(readonly, nonatomic) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(nonatomic) _Bool showAddressLink; // @synthesize showAddressLink=_showAddressLink;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate; // @synthesize widgetUnlockDelegate=_widgetUnlockDelegate;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (void).cxx_destruct;
- (_Bool)_hasCachedSnapshotImageForKey:(id)arg1;
- (void)_setImage:(id)arg1 animated:(_Bool)arg2;
- (void)_handleSnapshotResponse:(id)arg1 viewPort:(id)arg2 snapshotMapType:(unsigned long long)arg3 shouldFetchNearbyAssetCount:(_Bool)arg4 fetchedImageKey:(id)arg5 error:(id)arg6;
- (id)_createSnapshotOptions;
- (void)_fetchPlacesSnapshotUsingMapType:(unsigned long long)arg1 fetchResults:(id)arg2 shouldFetchNearbyAssetCount:(_Bool)arg3;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (id)_mapViewControllerWithContentMode:(unsigned long long)arg1;
- (void)_showPlacesWithContentMode:(unsigned long long)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)userDidSelectDisclosureControl;
- (void)userDidSelectFooter:(id)arg1;
- (id)_firstAsset;
- (id)_localizedGeoDescriptionForAsset:(id)arg1;
- (void)_updateFooterButton;
- (void)_handleFooterTitleUpdateCompleteForAsset:(id)arg1 footerTitle:(id)arg2;
- (void)_updateFooterTitle;
- (void)_updateHeight;
- (void)_updateFooterHeight;
@property(readonly, nonatomic) UIFont *footerFont; // @synthesize footerFont=_footerFont;
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
- (double)preferredContentHeightForWidth:(double)arg1;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (void)_showPlaceholder;
- (void)_layoutSubviews;
- (void)_updateContentViewFrame;
- (long long)_fetchCountOfAssetsWithLocation;
- (id)_fetchResultsForSections;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)unloadContentData;
- (void)loadContentData;
- (void)_loadContainerView;
- (void)setContentSize:(struct CGSize)arg1;
- (id)standaloneMapViewController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, nonatomic) long long contentViewAnchoringType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;

@end

