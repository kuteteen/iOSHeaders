//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

#import <PhotosUI/PLCPLStatusDelegate-Protocol.h>
#import <PhotosUI/PUMagnfiedViewControllerDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSString, NSTimer, PLCPLStatus, PUGridMagnifiedImageViewController, PUGridPinchGestureRecognizer, PUGridZoomLevelInfo, PUMomentsZoomLevelManager, PUZoomableGridTransition, PUZoomableGridViewControllerSpec, UITapGestureRecognizer;

@interface PUZoomableGridViewController : PUPhotosGridViewController <PLCPLStatusDelegate, PUMagnfiedViewControllerDelegate>
{
    _Bool __hasAppearedOnce;
    NSArray *__syncProgressAlbums;
    PUMomentsZoomLevelManager *_zoomLevelManager;
    unsigned long long _zoomLevel;
    PUZoomableGridViewControllerSpec *_zoomableGridSpec;
    PUGridZoomLevelInfo *__zoomLevelInfo;
    PUZoomableGridTransition *_currentGridZoomTransitionInfo;
    NSIndexPath *__transitionExplicitAnchorIndexPath;
    NSIndexPath *__lastZoomInTransitionAnchorIndexPath;
    UITapGestureRecognizer *__tapGestureRecognizer;
    PUGridPinchGestureRecognizer *__gridPinchGestureRecognizer;
    PUGridMagnifiedImageViewController *_magnifiedImageViewController;
    double __lastUpdateWidth;
    PLCPLStatus *__cplStatus;
    NSTimer *__cplStatusUpdateTimer;
    unsigned long long __magnifierState;
    struct CGPoint __frozeMagnifierAtPosition;
}

@property(nonatomic, setter=_setFrozeMagnifierAtPosition:) struct CGPoint _frozeMagnifierAtPosition; // @synthesize _frozeMagnifierAtPosition=__frozeMagnifierAtPosition;
@property(nonatomic, setter=_setMagnifierState:) unsigned long long _magnifierState; // @synthesize _magnifierState=__magnifierState;
@property(nonatomic) NSTimer *_cplStatusUpdateTimer; // @synthesize _cplStatusUpdateTimer=__cplStatusUpdateTimer;
@property(retain, nonatomic, setter=_setCplStatus:) PLCPLStatus *_cplStatus; // @synthesize _cplStatus=__cplStatus;
@property(nonatomic, setter=_setHasAppearedOnce:) _Bool _hasAppearedOnce; // @synthesize _hasAppearedOnce=__hasAppearedOnce;
@property(nonatomic, setter=_setLastUpdateWidth:) double _lastUpdateWidth; // @synthesize _lastUpdateWidth=__lastUpdateWidth;
@property(retain, nonatomic, setter=_setMagnifiedImageViewController:) PUGridMagnifiedImageViewController *magnifiedImageViewController; // @synthesize magnifiedImageViewController=_magnifiedImageViewController;
@property(retain, nonatomic, setter=_setGridPinchGestureRecognizer:) PUGridPinchGestureRecognizer *_gridPinchGestureRecognizer; // @synthesize _gridPinchGestureRecognizer=__gridPinchGestureRecognizer;
@property(retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(retain, nonatomic, setter=_setLastZoomInTransitionAnchorIndexPath:) NSIndexPath *_lastZoomInTransitionAnchorIndexPath; // @synthesize _lastZoomInTransitionAnchorIndexPath=__lastZoomInTransitionAnchorIndexPath;
@property(retain, nonatomic, setter=_setTransitionExplicitAnchorIndexPath:) NSIndexPath *_transitionExplicitAnchorIndexPath; // @synthesize _transitionExplicitAnchorIndexPath=__transitionExplicitAnchorIndexPath;
@property(retain, nonatomic, setter=_setCurrentGridZoomTransitionInfo:) PUZoomableGridTransition *currentGridZoomTransitionInfo; // @synthesize currentGridZoomTransitionInfo=_currentGridZoomTransitionInfo;
@property(readonly, nonatomic) PUGridZoomLevelInfo *_zoomLevelInfo; // @synthesize _zoomLevelInfo=__zoomLevelInfo;
@property(retain, nonatomic) PUZoomableGridViewControllerSpec *zoomableGridSpec; // @synthesize zoomableGridSpec=_zoomableGridSpec;
@property(readonly, nonatomic) unsigned long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly, nonatomic) PUMomentsZoomLevelManager *zoomLevelManager; // @synthesize zoomLevelManager=_zoomLevelManager;
- (void).cxx_destruct;
- (void)cplStatusDidChange:(id)arg1;
- (id)imageWithSize:(struct CGSize)arg1 forIndexPath:(id)arg2;
- (_Bool)zoomTransition:(id)arg1 getFrame:(struct CGRect *)arg2 contentMode:(long long *)arg3 cropInsets:(struct UIEdgeInsets *)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6;
- (void)navigateToLowerZoomLevelWithReferenceItemPath:(id)arg1;
- (_Bool)_disallowNavigationToHigherZoomLevel;
- (id)_beginInteractiveTransitionWithReferenceItemPath:(id)arg1 zoomingOut:(_Bool)arg2;
- (void)_reclaimCollectionView;
- (struct CGRect)_frameForItemAtIndexPath:(id)arg1;
- (id)_itemPathForLocationInGesture:(id)arg1;
- (void)tearDownMagnifiedImageViewController;
- (id)magnifiedImageViewControllerCreatingIfNecessary:(_Bool)arg1;
- (void)_updateMagnifierWithGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)_configureMagnifiedImageViewController:(id)arg1 forIndexPath:(id)arg2 gestureLocationInWindow:(struct CGPoint)arg3;
- (void)_handleTapGesture:(id)arg1;
- (void)_handleGridPinchGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)_cplStatusUpdateTimerFired:(id)arg1;
- (void)_stopCPLStatusUpdateTimer;
- (void)_startCPLStatusUpdateTimer;
- (_Bool)allowSlideshowButton;
- (_Bool)collectionViewPointInSectionHeader:(struct CGPoint)arg1;
- (void)_invalidateSyncProgressAlbums;
@property(readonly, nonatomic) NSArray *_syncProgressAlbums; // @synthesize _syncProgressAlbums=__syncProgressAlbums;
- (void)configureGlobalFooterView:(id)arg1;
- (_Bool)wantsGlobalFooter;
- (_Bool)shouldPreventRevealInMomentAction;
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2;
- (double)cellAspectRatioHint;
- (void)preheatAssets;
- (unsigned long long)dateRangeFormatterPreset;
- (long long)imageDeliveryMode;
- (struct CGSize)contentSizeForPreheating;
- (struct CGPoint)contentOffsetForPreheating;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(_Bool)arg4;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (_Bool)canBeginStackCollapseTransition;
- (_Bool)canNavigateToPhotoInteractively:(_Bool)arg1;
- (_Bool)canDisplayEditButton;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)setSelected:(_Bool)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(_Bool)arg4;
- (void)uninstallGestureRecognizers;
- (void)installGestureRecognizers;
- (long long)cellFillMode;
- (struct CGSize)imageRequestItemSize;
- (void)updateLayoutMetrics;
- (id)newGridLayout;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1;
- (void)processDataSourceChange:(id)arg1;
- (_Bool)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1;
- (_Bool)shouldPerformAutomaticContentOffsetAdjustment;
- (_Bool)isCurrentCollectionViewDataSource;
@property(readonly, copy) NSString *description;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(struct CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4;
- (void)oneUpPresentationHelper:(id)arg1 willPresentOneUpPreviewViewController:(id)arg2;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)_handlePreviewGesture:(id)arg1;
- (_Bool)pu_shouldActAsTabRootViewController;
- (_Bool)px_isSnapBackDestination;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)_eventSourceFromZoomLevel:(unsigned long long)arg1;
- (_Bool)updateSpec;
- (void)_updateTransitionsIfNecessary;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (id)initWithSpec:(id)arg1 zoomLevelManager:(id)arg2 zoomLevel:(unsigned long long)arg3;
- (void)ppt_navigateToPhotosDetailsAnimated:(_Bool)arg1;
- (void)reclaimCollectionView;
- (id)bestTransitionReferenceItemIndexPathOutIsFromLastTransition:(_Bool *)arg1 outIsExplicit:(_Bool *)arg2;
- (void)gridZoomTransitionDidFinish:(_Bool)arg1;
- (_Bool)isTransitionAutoAdjustContentOffsetEnabled;
- (void)prepareForTransitionToZoomableViewController:(id)arg1 anchorItemIndexPath:(id)arg2 anchorShiftsColumns:(_Bool)arg3 animated:(_Bool)arg4 interactive:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

