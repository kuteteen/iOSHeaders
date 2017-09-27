//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIDataSourceTranslating.h"
#import "_UIDataSourceBackedView.h"
#import "_UIKeyboardAutoRespondingScrollView.h"

@class NSArray, NSHashTable, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, UICollectionReusableView, UICollectionViewCell, UICollectionViewData, UICollectionViewLayout, UICollectionViewLayoutAttributes, UICollectionViewUpdate, UIFocusContainerGuide, UITouch, UIView, _UICollectionViewDragAndDropController, _UICollectionViewDragDestinationController, _UICollectionViewDragSourceController, _UICollectionViewPrefetchingContext, _UIDragSnappingFeedbackGenerator, _UIDynamicAnimationGroup, _UIVelocityIntegrator;

@interface UICollectionView : UIScrollView <_UIKeyboardAutoRespondingScrollView, _UIDataSourceBackedView, UIDataSourceTranslating>
{
    UICollectionViewLayout *_layout;
    id <UICollectionViewDataSource_Private> _dataSource;
    UIView *_backgroundView;
    NSMutableSet *_indexPathsForSelectedItems;
    NSMutableDictionary *_cellReuseQueues;
    NSMutableDictionary *_supplementaryViewReuseQueues;
    NSMutableSet *_indexPathsForHighlightedItems;
    NSHashTable *_notifiedDisplayedCells;
    long long _reloadingSuspendedCount;
    long long _updateAnimationCount;
    UICollectionReusableView *_firstResponderView;
    UIView *_newContentView;
    long long _firstResponderViewType;
    NSString *_firstResponderViewKind;
    NSIndexPath *_firstResponderIndexPath;
    NSMutableDictionary *_visibleCellsDict;
    NSMutableDictionary *_visibleSupplementaryViewsDict;
    NSMutableDictionary *_visibleDecorationViewsDict;
    NSMutableDictionary *_clonedCellsDict;
    NSMutableDictionary *_clonedSupplementaryViewsDict;
    NSMutableDictionary *_clonedDecorationViewsDict;
    NSMutableDictionary *_templateLayoutCells;
    NSIndexPath *_pendingSelectionIndexPath;
    NSMutableSet *_pendingDeselectionIndexPaths;
    UICollectionViewData *_collectionViewData;
    UICollectionViewUpdate *_currentUpdate;
    struct CGRect _visibleBounds;
    struct UIEdgeInsets _visibleRectInsets;
    struct CGRect _preRotationBounds;
    struct CGPoint _rotationBoundsOffset;
    long long _rotationAnimationCount;
    long long _updateCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    NSArray *_originalInsertItems;
    NSArray *_originalDeleteItems;
    UITouch *_currentTouch;
    CDUnknownBlockType _updateCompletionHandler;
    CDUnknownBlockType _postUpdateBlock;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_cellNibDict;
    NSMutableDictionary *_supplementaryViewClassDict;
    NSMutableDictionary *_supplementaryViewNibDict;
    NSMutableDictionary *_cellNibExternalObjectsTables;
    NSMutableDictionary *_supplementaryViewNibExternalObjectsTables;
    NSMutableSet *_supplementaryViewRegisteredKinds;
    UICollectionViewLayoutAttributes *_transitionLayoutAttributes;
    _Bool _isInInteractiveTransition;
    _Bool _shouldAccumulateTrackedLayoutValues;
    NSMutableDictionary *_interactiveTransitionInfos;
    CDUnknownBlockType _interactiveCompletionHandler;
    double _currentInteractiveTransitionTimeStamp;
    double _previousInteractiveTransitionTimeStamp;
    double _startTimeStamp;
    struct CGPoint _currentCenterOffset;
    struct CGPoint _previousCenterOffset;
    double _currentInteractiveTransitionProgress;
    double _previousInteractiveTransitionProgress;
    _UIDynamicAnimationGroup *_endInteractiveTransitionAnimationGroup;
    UICollectionViewLayout *_nextLayoutForInteractiveTranstion;
    _UIDragSnappingFeedbackGenerator *_reorderFeedbackGenerator;
    NSMutableDictionary *_interactiveTransitionValueTrackingDict;
    NSMutableArray *_trackedValuesKeys;
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    CDUnknownBlockType _invalidationBlock;
    struct CGPoint _reorderingTargetPosition;
    NSTimer *_autoscrollTimer;
    long long _focusedViewType;
    UIFocusContainerGuide *_contentFocusContainerGuide;
    struct {
        unsigned int delegateShouldHighlightItemAtIndexPath:1;
        unsigned int delegateDidHighlightItemAtIndexPath:1;
        unsigned int delegateDidUnhighlightItemAtIndexPath:1;
        unsigned int delegateShouldSelectItemAtIndexPath:1;
        unsigned int delegateShouldDeselectItemAtIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateDidDeselectItemAtIndexPath:1;
        unsigned int delegateSupportsMenus:1;
        unsigned int delegateWillDisplayCell:1;
        unsigned int delegateWillDisplaySupplementaryView:1;
        unsigned int delegateDidEndDisplayingCell:1;
        unsigned int delegateDidEndDisplayingSupplementaryView:1;
        unsigned int delegateIndexForReferenceItemDuringLayoutTransition:1;
        unsigned int delegateOverrideForTransitionOffsetSize:1;
        unsigned int delegateTargetContentOffsetForProposedContentOffsetSPI:1;
        unsigned int delegateTargetContentOffsetForProposedContentOffset:1;
        unsigned int delegateTargetIndexPathForMoveSPI:1;
        unsigned int delegateTargetIndexPathForMove:1;
        unsigned int delegateCanFocusItemAtIndexPath_deprecated:1;
        unsigned int delegateDidFocusItemAtIndexPath_deprecated:1;
        unsigned int delegateCanFocusItemAtIndexPath:1;
        unsigned int delegateDidFocusItemAtIndexPath:1;
        unsigned int delegateDidUnfocusItemAtIndexPath:1;
        unsigned int delegateIndexPathForPreferredFocusedItem:1;
        unsigned int delegateShouldUpdateFocusFromRowAtIndexPathToView:1;
        unsigned int delegateIndexPathForPreferredFocusedView:1;
        unsigned int delegateShouldUpdateFocusInContext:1;
        unsigned int delegateDidUpdateFocusInContext:1;
        unsigned int delegateTemplateLayoutCell:1;
        unsigned int delegateWillLayoutCellUsingTemplateLayoutCell:1;
        unsigned int delegateWasNonNil:1;
        unsigned int dataSourceNumberOfSections:1;
        unsigned int dataSourceViewForSupplementaryElement:1;
        unsigned int dataSourceCanMoveItemAtIndexPathSPI:1;
        unsigned int dataSourceMoveItemAtIndexPathSPI:1;
        unsigned int dataSourceCanMoveItemAtIndexPath:1;
        unsigned int dataSourceMoveItemAtIndexPath:1;
        unsigned int dataSourceSectionIndexTitlesSPI:1;
        unsigned int dataSourceIndexPathForSectionIndexSPI:1;
        unsigned int dataSourceIndexTitles:1;
        unsigned int dataSourceIndexPathForIndex:1;
        unsigned int dataSourceWasNonNil:1;
        unsigned int prefetchDataSourcePrefetchItemsAtIndexPaths:1;
        unsigned int prefetchDataSourceCancelPrefetchingForItemsAtIndexPaths:1;
        unsigned int prefetchDataSourceWasNonNil:1;
        unsigned int reloadSkippedDuringSuspension:1;
        unsigned int scheduledUpdateVisibleCells:1;
        unsigned int scheduledUpdateVisibleCellLayoutAttributes:1;
        unsigned int allowsSelection:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int allowsSelectionDuringEditing:1;
        unsigned int allowsMultipleSelectionDuringEditing:1;
        unsigned int fadeCellsForBoundsChange:1;
        unsigned int updatingLayout:1;
        unsigned int needsReload:1;
        unsigned int reloading:1;
        unsigned int skipLayoutDuringSnapshotting:1;
        unsigned int layoutInvalidatedSinceLastCellUpdate:1;
        unsigned int doneFirstLayout:1;
        unsigned int loadingOffscreenViews:1;
        unsigned int updating:1;
        unsigned int updatingVisibleCells:1;
        unsigned int preRotationBoundsSet:1;
        unsigned int updateFocusAfterItemAnimations:1;
        unsigned int remembersLastFocusedIndexPath:1;
        unsigned int updateFocusAfterLoadingCells:1;
        unsigned int performingLayout:1;
        unsigned int keepsFirstResponderVisibleOnBoundsChange:1;
        unsigned int inCreateTemplateCell:1;
        unsigned int editing:1;
        unsigned int shouldDeriveVisibleBoundsFromContainingScrollView:1;
        unsigned int usingCustomLayoutMargins:1;
        unsigned int settingDefaultLayoutMargins:1;
        unsigned int defaultLayoutMarginsSetFromViewController:1;
        unsigned int shouldPrefetchCellsWhenPerformingReloadData:1;
        unsigned int scheduledReloadPrefetchDuringNextLayoutPass:1;
        unsigned int indexTitlesLoaded:1;
        unsigned int shouldApplyShadowUpdates:1;
        unsigned int preventNotificationOfRebaseObserversWhenApplyingUpdates:1;
        unsigned int allowsVisibleCellUpdatesDuringUpdateAnimations:1;
        unsigned int isCompletingInteractiveMovement:1;
        unsigned int isRegisteredForGeometryChanges:1;
    } _collectionViewFlags;
    struct CGPoint _lastLayoutOffset;
    NSIndexPath *_cancellingToIndexPath;
    long long _prefetchMode;
    _UICollectionViewPrefetchingContext *_currentPrefetchingContext;
    NSMutableDictionary *_prefetchCacheItems;
    _UIVelocityIntegrator *_prefetchVelocityIntegrator;
    id <UICollectionViewDataSourcePrefetching> _prefetchDataSource;
    long long _containerScrollViewVisitationCount;
    _UICollectionViewDragAndDropController *_dragAndDropController;
    long long _performUsingPresentationValuesRefCount;
    id <UICollectionViewDragDelegate_Private> _dragDelegate;
    id <UICollectionViewDropDelegate_Private> _dropDelegate;
    long long _dragInteractionEnabledState;
    id <UICollectionViewDragDestination> _dragDestinationDelegate;
    id <UICollectionViewDragSource> _dragSourceDelegate;
    _UICollectionViewDragSourceController *_dragSourceController;
    _UICollectionViewDragDestinationController *_dragDestinationController;
    long long _dragReorderingCadence;
    long long _dragPlaceholderInsertionCadence;
    long long _reorderingCadence;
    NSIndexPath *_highlightedSpringLoadedItem;
    _Bool _prefetchingEnabled;
    NSIndexPath *_focusedCellIndexPath;
    UICollectionReusableView *_focusedCell;
    NSString *_focusedCellElementKind;
    CDUnknownBlockType _navigationCompletion;
    UIFocusContainerGuide *_endOfContentFocusContainerGuide;
    UICollectionViewCell *_currentPromiseFulfillmentCell;
    struct UIEdgeInsets _defaultLayoutMargins;
}

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;
@property(retain, nonatomic, getter=_currentPromiseFulfillmentCell, setter=_setCurrentPromiseFulfillmentCell:) UICollectionViewCell *currentPromiseFulfillmentCell; // @synthesize currentPromiseFulfillmentCell=_currentPromiseFulfillmentCell;
@property(readonly, nonatomic, getter=_endOfContentFocusContainerGuide) UIFocusContainerGuide *endOfContentFocusContainerGuide; // @synthesize endOfContentFocusContainerGuide=_endOfContentFocusContainerGuide;
@property(copy, nonatomic, getter=_navigationCompletion, setter=_setNavigationCompletion:) CDUnknownBlockType navigationCompletion; // @synthesize navigationCompletion=_navigationCompletion;
@property(nonatomic, getter=_defaultLayoutMargins, setter=_setDefaultLayoutMargins:) struct UIEdgeInsets defaultLayoutMargins; // @synthesize defaultLayoutMargins=_defaultLayoutMargins;
@property(copy, nonatomic, getter=_focusedCellElementKind, setter=_setFocusedCellElementKind:) NSString *focusedCellElementKind; // @synthesize focusedCellElementKind=_focusedCellElementKind;
@property(retain, nonatomic, getter=_focusedCell, setter=_setFocusedCell:) UICollectionReusableView *focusedCell; // @synthesize focusedCell=_focusedCell;
@property(copy, nonatomic, getter=_focusedCellIndexPath, setter=_setFocusedCellIndexPath:) NSIndexPath *focusedCellIndexPath; // @synthesize focusedCellIndexPath=_focusedCellIndexPath;
@property(nonatomic, getter=isPrefetchingEnabled) _Bool prefetchingEnabled; // @synthesize prefetchingEnabled=_prefetchingEnabled;
@property(retain, nonatomic, getter=_currentTouch, setter=_setCurrentTouch:) UITouch *currentTouch; // @synthesize currentTouch=_currentTouch;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <UICollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_layout;
- (void).cxx_destruct;
- (id)_prefetchDataSourceActual;
- (id)_delegateActual;
- (id)_dataSourceActual;
- (id)_prefetchDataSourceProxy;
- (id)_delegateProxy;
- (id)_dataSourceProxy;
- (void)_performUpdate:(id)arg1;
- (void)_addUpdateToShadowControllerIfNeeded:(id)arg1;
- (_Bool)_shouldApplyShadowUpdates;
- (void)_highlightSpringLoadedItemAtIndexPath:(id)arg1;
- (void)_unhighlightSpringLoadedItem;
- (_Bool)_shouldSpringLoadItemAtIndexPath:(id)arg1 withContext:(id)arg2;
- (id)_dragDestinationDelegateActual;
- (id)_dragSourceDelegateActual;
- (id)_dragDestinationDelegateProxy;
- (id)_dragSourceDelegateProxy;
- (id)_dropDelegateActual;
- (id)_dragDelegateActual;
- (id)_dropDelegateProxy;
- (id)_dragDelegateProxy;
- (id)_translatePresentationIndexPathToDataSourceIndexPathAsNeeded:(id)arg1;
- (id)_translatePresentationIndexPathsToDataSourceIndexPathsAsNeeded:(id)arg1;
- (id)_translateDataSourceIndexPathToPresentationIndexPathAsNeeded:(id)arg1;
- (id)_translateDataSourceIndexPathsToPresentationIndexPathsAsNeeded:(id)arg1;
- (_Bool)_isOperatingWithPresentationValues;
- (void)_performUsingPresentationValues:(CDUnknownBlockType)arg1;
- (id)_dataSourceIndexPathForPresentationIndexPath:(id)arg1;
- (id)_presentationIndexPathForDataSourceIndexPath:(id)arg1;
- (long long)_dataSourceSectionIndexForPresentationSectionIndex:(long long)arg1;
- (long long)_presentationSectionIndexForDataSourceSectionIndex:(long long)arg1;
- (void)performUsingPresentationValues:(CDUnknownBlockType)arg1;
- (id)dataSourceIndexPathForPresentationIndexPath:(id)arg1;
- (id)presentationIndexPathForDataSourceIndexPath:(id)arg1;
- (long long)dataSourceSectionIndexForPresentationSectionIndex:(long long)arg1;
- (long long)presentationSectionIndexForDataSourceSectionIndex:(long long)arg1;
- (void)_performWithoutNotifyingRebaseObserversWhenApplyingUpdates:(CDUnknownBlockType)arg1;
- (id)_performShadowUpdates:(CDUnknownBlockType)arg1;
- (void)setSpringLoaded:(_Bool)arg1;
- (_Bool)isSpringLoaded;
- (void)_addItemAtIndexPathToActiveDragSession:(id)arg1;
- (_Bool)_hasUncommittedUpdates;
- (_Bool)_hasActiveDrop;
- (_Bool)_hasActiveDrag;
@property(readonly, nonatomic) _Bool hasUncommittedUpdates;
@property(readonly, nonatomic) _Bool hasActiveDrop;
@property(readonly, nonatomic) _Bool hasActiveDrag;
- (_Bool)isDragSessionActive;
- (id)_dragDestinationController;
- (id)_dragSourceController;
- (id)_dragAndDropController;
- (void)_setEffectiveDataSource:(id)arg1;
- (_Bool)_isCurrentlyPerformingLegacyReordering;
- (_Bool)_isDragDestinationInteractivelyReordering;
- (id)_indexPathBeforeShadowUpdatesForIndexPath:(id)arg1;
- (id)_indexPathAfterShadowUpdatesForIndexPath:(id)arg1;
- (id)_indexPathsAfterShadowUpdatesForIndexPaths:(id)arg1 allowingAppendingInserts:(_Bool)arg2;
- (id)_indexPathsAfterShadowUpdatesForIndexPaths:(id)arg1;
- (id)_indexPathsBeforeShadowUpdatesForIndexPaths:(id)arg1;
- (id)_sectionIndexesAfterShadowUpdatesForSectionIndexes:(id)arg1 allowingAppendingInserts:(_Bool)arg2;
- (id)_sectionIndexesAfterShadowUpdatesForSectionIndexes:(id)arg1;
- (id)_indexPathOfItemNearestToPoint:(struct CGPoint)arg1 intersectingRect:(struct CGRect)arg2;
@property(readonly, nonatomic, getter=_dataSourceSupportsReordering) _Bool dataSourceSupportsReordering;
- (void)_scrollFirstResponderCellToVisible:(_Bool)arg1;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(_Bool)arg2 lastAdjustment:(double *)arg3;
@property(nonatomic, getter=_keepsFirstResponderVisibleOnBoundsChange, setter=_setKeepsFirstResponderVisibleOnBoundsChange:) _Bool keepsFirstResponderVisibleOnBoundsChange;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_reusePreviouslyFocusedManagedSubviewIfNeeded:(id)arg1;
- (id)_managedSubviewForView:(id)arg1;
- (_Bool)_shouldUpdateFocusInContext:(id)arg1;
- (void)_cellDidBecomeUnfocused:(id)arg1;
- (void)_cellDidBecomeFocused:(id)arg1;
- (void)_getOriginalReorderingIndexPaths:(id *)arg1 targetIndexPaths:(id *)arg2;
- (void)_completeInteractiveMovementWithDisposition:(long long)arg1;
- (void)cancelInteractiveMovement;
- (void)endInteractiveMovement;
- (void)_cancelReordering;
- (void)_endReordering;
- (void)_stopAutoscrollTimer;
- (void)_autoscrollForReordering:(id)arg1;
- (void)updateInteractiveMovementTargetPosition:(struct CGPoint)arg1;
- (_Bool)_beginInteractiveMovementForItemAtIndexPath:(id)arg1;
- (_Bool)beginInteractiveMovementForItemAtIndexPath:(id)arg1;
- (_Bool)_canReorderItemAtIndexPath:(id)arg1;
- (void)_updateReorderingTargetPosition:(struct CGPoint)arg1 forced:(_Bool)arg2;
- (void)_offsetPinnedReorderedItemsWithCurrentContentOffset:(struct CGPoint)arg1;
- (void)_unpinReorderedItemsIfNeeded;
- (void)_pinReorderedItemsWithPinningTest:(CDUnknownBlockType)arg1;
- (void)_updateReorderingTargetPosition:(struct CGPoint)arg1;
- (_Bool)_beginReorderingItemAtIndexPath:(id)arg1;
- (void)_focusedItem:(id)arg1 isMinX:(_Bool *)arg2 isMaxX:(_Bool *)arg3 isMinY:(_Bool *)arg4 isMaxY:(_Bool *)arg5;
- (id)_fulfillPromisedFocusRegionForCell:(id)arg1;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (void)_cellBecameFocused:(id)arg1;
- (_Bool)_cellCanBecomeFocused:(id)arg1;
- (id)_delegatePreferredIndexPath;
- (id)preferredFocusedView;
- (_Bool)canBecomeFocused;
- (_Bool)_remembersPreviouslyFocusedItem;
- (void)_setRemembersPreviouslyFocusedItem:(_Bool)arg1;
@property(nonatomic) _Bool remembersLastFocusedIndexPath;
- (id)_contentFocusContainerGuide;
- (void)_updateContentFocusContainerGuides;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (_Bool)_indexPathIsValid:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)_dynamicAnimationsForTrackValues;
- (void)_updateTrackedLayoutValuesWith:(id)arg1;
- (double)_trackedLayoutValueForKey:(id)arg1;
- (void)_trackLayoutValue:(double)arg1 forKey:(id)arg2;
- (long long)maximumGlobalItemIndex;
- (long long)highlightedGlobalItem;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_unhighlightAllItemsAndHighlightGlobalItem:(long long)arg1;
- (void)_highlightFirstVisibleItemIfAppropriate;
- (_Bool)canBecomeFirstResponder;
- (void)_cellMenuDismissed;
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (_Bool)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (_Bool)_shouldShowMenuForCell:(id)arg1;
- (struct CGPoint)_contentOffsetForNewFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2 newContentSize:(struct CGSize)arg3 andOldContentSize:(struct CGSize)arg4;
- (void)_scrollViewDidEndDraggingWithDeceleration:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_cancelTouches;
- (void)_selectAllSelectedItems;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_userSelectItemAtIndexPath:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_selectableIndexPathForItemContainingHitView:(id)arg1;
- (void)_unhighlightAllItems;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateWithBlock:(CDUnknownBlockType)arg1;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(_Bool)arg4 animator:(id)arg5;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(_Bool)arg4;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 invalidationContext:(id)arg3;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 withAnimator:(id)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_endUpdatesWithInvalidationContext:(id)arg1 tentativelyForReordering:(_Bool)arg2 animator:(id)arg3;
- (void)_beginUpdates;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateWithItems:(id)arg1 tentativelyForReordering:(_Bool)arg2 animator:(id)arg3;
- (id)_viewAnimationsForCurrentUpdate;
- (void)_prepareLayoutForUpdates;
- (void)_updateFocusedCellIndexPathIfNecessaryWithLastFocusedRect:(struct CGRect)arg1;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(_Bool)arg2 animator:(id)arg3;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(_Bool)arg2;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1;
- (void)_setupCellAnimations;
- (void)_moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2 updates:(id)arg3;
- (void)_updateWithUpdates:(id)arg1 updateAction:(long long)arg2;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2;
- (void)_moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2;
- (id)_arrayForUpdateAction:(int)arg1;
@property(readonly, nonatomic, getter=_currentUpdate) UICollectionViewUpdate *currentUpdate;
- (void)_reuseSupplementaryView:(id)arg1;
- (_Bool)_reuseCell:(id)arg1 notifyDidEndDisplaying:(_Bool)arg2;
- (_Bool)_reuseCell:(id)arg1;
- (_Bool)_isViewInReuseQueue:(id)arg1;
- (id)_createTemplateLayoutCellForCellsWithIdentifier:(id)arg1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4;
- (id)_reuseQueueForViewWithElementCategory:(unsigned long long)arg1 elementKind:(id)arg2 reuseIdentifier:(id)arg3;
- (id)_reuseDictionaryForCell:(_Bool)arg1;
- (void)_prepareViewForUse:(id)arg1 withElementCategory:(unsigned long long)arg2 elementKind:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5 applyDefaultAttributes:(_Bool)arg6;
- (void)_prepareViewForUse:(id)arg1 withElementCategory:(unsigned long long)arg2 elementKind:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfCellWithReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)_registeredSupplementaryViewKind:(id)arg1;
- (struct UIEdgeInsets)_focusFastScrollingIndexBarInsets;
- (id)_focusFastScrollingDestinationItemForIndexEntry:(id)arg1;
- (id)_focusFastScrollingDestinationItemAtContentEnd;
- (id)_focusFastScrollingDestinationItemAtContentStart;
- (struct CGPoint)indexBarAccessoryView:(id)arg1 contentOffsetForEntry:(id)arg2 atIndex:(long long)arg3;
- (id)_indexPathForEntryWithTitle:(id)arg1 atIndex:(long long)arg2;
- (id)_focusFastScrollingIndexBarEntries;
- (void)_updateSectionIndex;
- (void)_reloadSectionIndexTitles;
- (void)_updateIndex;
- (void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (struct CGPoint)_contentOffsetForScrollingToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2;
- (id)_templateLayoutCellForCellsWithReuseIdentifier:(id)arg1;
- (id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(_Bool)arg2;
- (id)_visibleDecorationViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(_Bool)arg2;
- (id)indexPathsForVisibleSupplementaryElementsOfKind:(id)arg1;
- (id)visibleSupplementaryViewsOfKind:(id)arg1;
- (id)supplementaryViewForElementKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_indexPathsForVisibleItems;
@property(readonly, nonatomic) NSArray *indexPathsForVisibleItems;
- (void)traitCollectionDidChange:(id)arg1;
- (id)preparedCells;
@property(readonly, nonatomic) NSArray *visibleCells;
- (id)_cellForItemAtIndexPath:(id)arg1 includePrefetchedCells:(_Bool)arg2;
- (id)_cellForItemAtIndexPath:(id)arg1;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathForSupplementaryView:(id)arg1;
- (id)_indexPathForCell:(id)arg1 includePrefetchedCells:(_Bool)arg2;
- (id)_indexPathForCell:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)_indexPathForView:(id)arg1 ofType:(unsigned long long)arg2 includePrefetchedCells:(_Bool)arg3;
- (id)_visibleViewDictForElementCategory:(unsigned long long)arg1 elementKind:(id)arg2;
- (id)_indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (id)_pivotForTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)_cancelInteractiveTransitionWithFinalAnimation:(_Bool)arg1;
- (void)_finishInteractiveTransitionWithFinalAnimation:(_Bool)arg1;
- (void)_finishInteractiveTransitionShouldFinish:(_Bool)arg1 finalAnimation:(_Bool)arg2;
- (void)_cleanUpAfterInteractiveTransitionDidFinish:(_Bool)arg1;
- (void)_updateTransitionWithProgress:(double)arg1;
- (id)startInteractiveTransitionToCollectionViewLayout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2 isInteractive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 animator:(id)arg5;
- (void)_setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2 isInteractive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCollectionViewLayout:(id)arg1 withAnimator:(id)arg2;
- (void)setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_visible;
- (void)layoutSubviews;
- (void)_applyBlockToAllReusableViews:(CDUnknownBlockType)arg1;
- (void)_setVisibleView:(id)arg1 forLayoutAttributes:(id)arg2;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (void)_updateBackgroundView;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(CDUnknownBlockType)arg6 animationCompletion:(CDUnknownBlockType)arg7 enableCustomAnimations:(_Bool)arg8 customAnimationsType:(unsigned long long)arg9;
- (void)_setAllowsVisibleCellUpdatesDuringUpdateAnimations:(_Bool)arg1;
- (_Bool)_allowsVisibleCellUpdatesDuringUpdateAnimations;
- (void)_setVisibleRectEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)_ensureViewsAreLoadedInRect:(struct CGRect)arg1;
- (unsigned long long)_updateVisibleCellsNow:(_Bool)arg1;
- (void)_resetCurrentPrefetchContext;
- (void)_resetPrefetchedCachedCells;
- (void)_resetPrefetchState;
- (void)_performReloadPrefetchIfNeeded;
- (struct CGVector)_unitVectorForVector:(struct CGVector)arg1;
- (id)_reorderPrefetchCandidates:(id)arg1 forPrefetchVelocity:(struct CGVector)arg2 visibleBounds:(struct CGRect)arg3;
- (void)_pruneCachedPrefetchViewsForCacheValidationBounds:(struct CGRect)arg1;
- (void)_pruneCachedPrefetchViewsForVelocity:(struct CGVector)arg1;
- (struct CGRect)_computePrefetchCacheValidationBoundsForPrefetchVelocity:(struct CGVector)arg1 visibleBounds:(struct CGRect)arg2;
- (struct CGRect)_computeFutureVisibleBoundsForPrefetchVelocity:(struct CGVector)arg1 visibleBounds:(struct CGRect)arg2;
- (void)_computePrefetchCandidatesForVisibleBounds:(struct CGRect)arg1 futureVisibleBounds:(struct CGRect)arg2 prefetchVector:(struct CGVector)arg3 notifyDelegateIfNeeded:(_Bool)arg4;
- (void)_computePrefetchCandidatesForVelocity:(struct CGVector)arg1 notifyDelegateIfNeeded:(_Bool)arg2;
- (unsigned long long)_prefetchItemsForVelocity:(struct CGVector)arg1 maxItemsToPrefetch:(unsigned long long)arg2 invalidateCandidatesOnDirectionChanges:(_Bool)arg3;
- (unsigned long long)_prefetchItemsForVelocity:(struct CGVector)arg1 maxItemsToPrefetch:(unsigned long long)arg2;
- (struct CGPoint)_delegateTargetOffsetForProposedContentOffset:(struct CGPoint)arg1;
@property(readonly, nonatomic, getter=_reorderingTargetPosition) struct CGPoint reorderingTargetPosition;
- (id)_reorderingDestinationIndexPath;
@property(readonly, nonatomic, getter=_reorderedItems) NSArray *reorderedItems;
- (id)_reorderedItemForView:(id)arg1;
- (_Bool)_viewIsReorderedCell:(id)arg1;
- (_Bool)_itemIndexPathIsReordered:(id)arg1;
- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(_Bool)arg4;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(_Bool)arg3 isFocused:(_Bool)arg4 notify:(_Bool)arg5;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(_Bool)arg3;
- (void)_notifyDidEndDisplayingCell:(id)arg1 forIndexPath:(id)arg2;
- (void)_notifyWillDisplayCell:(id)arg1 forIndexPath:(id)arg2;
- (_Bool)_shouldPrefetchCells;
- (_Bool)_shouldPrefetchCellsWhenPerformingReloadData;
- (void)_setShouldPrefetchCellsWhenPerformingReloadData:(_Bool)arg1;
- (_Bool)_shouldDeriveVisibleBoundsFromContainingScrollView;
- (void)_setShouldDeriveVisibleBoundsFromContainingScrollView:(_Bool)arg1;
- (_Bool)_prefetchingEnabledDefault;
- (_Bool)_hasPrefetchItems;
- (long long)_cellPrefetchMode;
- (void)_setCellPrefetchMode:(long long)arg1;
- (_Bool)_hasFocusedCellForIndexPath:(id)arg1 shouldUsePreUpdateData:(_Bool)arg2;
- (void)_checkForPreferredAttributesInView:(id)arg1 originalAttributes:(id)arg2;
- (_Bool)_isReordering;
- (struct CGRect)_visibleBounds;
- (void)_addContainerScrollViewForNotifications:(id)arg1;
- (void)_removeContainerScrollViewForNotifications:(id)arg1;
- (void)_didScroll;
- (_Bool)_hasContainerScrollViewsAndScrollingDisabled;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_resetContainerScrollViewVisitationCount;
- (void)_removeAnyAncestorScrollViewNotifications;
- (void)_updateContainerScrollViewsForNotifications;
- (void)_unregisterForGeometryChangesIfNeeded;
- (void)_registerForGeometryChangesIfInSupeview;
- (struct CGSize)intrinsicContentSize;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets)arg1;
- (void)_invalidateLayoutForUpdatedLayoutMarginsIfNeeded;
- (void)safeAreaInsetsDidChange;
- (void)layoutMarginsDidChange;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)_setDefaultLayoutMargins:(struct UIEdgeInsets)arg1 fromViewController:(_Bool)arg2;
- (void)_updateDefaultLayoutMargins;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;
- (void)_addControlledSubview:(id)arg1 atZIndex:(long long)arg2 forced:(_Bool)arg3;
- (void)_setIsAncestorOfFirstResponder:(_Bool)arg1;
- (void)_invalidateLayoutIfNecessaryForReload;
- (long long)_dragPlaceholderInsertionCadence;
- (void)_setDragPlaceholderInsertionCadence:(long long)arg1;
- (long long)_dragReorderingCadence;
- (void)_setDragReorderingCadence:(long long)arg1;
- (void)_setReorderingCadence:(long long)arg1;
- (long long)_reorderingCadence;
@property(nonatomic) long long reorderingCadence;
- (void)_updateDragInteractionForCurrentInteractionEnabledState;
- (void)_teardownDragSourceController;
- (void)_setupDragSourceController;
- (void)_teardownDragDestinationController;
- (void)_setupDragDestinationController;
- (void)setDragSourceDelegate:(id)arg1;
- (id)dragSourceDelegate;
- (void)setDragDestinationDelegate:(id)arg1;
- (id)dragDestinationDelegate;
@property(nonatomic) _Bool dragInteractionEnabled;
@property(nonatomic) __weak id <UICollectionViewDropDelegate> dropDelegate;
@property(nonatomic) __weak id <UICollectionViewDragDelegate> dragDelegate;
- (void)prefetchCompleteForItemAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)_setNeedsVisibleCellsUpdate:(_Bool)arg1 withLayoutAttributes:(_Bool)arg2;
- (void)_resumeReloads;
- (void)_suspendReloads;
- (_Bool)_highlightItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (_Bool)_highlightItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3 notifyDelegate:(_Bool)arg4;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)_reorderFeedbackGenerator;
- (void)_setReorderFeedbackGenerator:(id)arg1;
@property(readonly, nonatomic, getter=_allowsEffectiveMultipleSelection) _Bool allowsEffectiveMultipleSelection;
@property(readonly, nonatomic, getter=_allowsEffectiveSelection) _Bool allowsEffectiveSelection;
- (_Bool)_allowsMultipleSelectionDuringEditing;
- (void)_setAllowsMultipleSelectionDuringEditing:(_Bool)arg1;
- (_Bool)_allowsSelectionDuringEditing;
- (void)_setAllowsSelectionDuringEditing:(_Bool)arg1;
@property(nonatomic) _Bool allowsMultipleSelection;
@property(nonatomic) _Bool allowsSelection;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_deselectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)_selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(_Bool)arg4;
- (void)_deselectAllAnimated:(_Bool)arg1 notifyDelegate:(_Bool)arg2;
- (id)_managedViews;
- (_Bool)_removeCellFromVisibleCells:(id)arg1;
@property(readonly, nonatomic, getter=_visibleViews) NSArray *visibleViews;
@property(readonly, nonatomic, getter=_collectionViewData) UICollectionViewData *collectionViewData;
- (id)_indexPathsForSelectedItems;
@property(readonly, nonatomic) NSArray *indexPathsForSelectedItems;
- (void)_decrementSuspendLayoutCount;
- (void)_incrementSuspendLayoutCount;
- (long long)_dataSourceNumberOfItemsInSection:(long long)arg1;
- (long long)_dataSourceNumberOfSections;
- (long long)_numberOfItemsInSection:(long long)arg1;
- (long long)_numberOfSections;
- (_Bool)_dataSourceMatchesCurrentCounts;
- (_Bool)_dataSourceImplementsNumberOfSections;
- (void)_reloadDataIfNeeded;
@property(nonatomic) __weak id <UICollectionViewDataSourcePrefetching> prefetchDataSource;
@property(nonatomic) __weak id <UICollectionViewDelegate> delegate; // @dynamic delegate;
- (id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)_hasRegisteredClassOrNibForSupplementaryViewOfKind:(id)arg1;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(_Bool)arg3;
- (id)_keysForObject:(id)arg1 inDictionary:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2 andSet:(id)arg3;
- (void)_setObject:(id)arg1 inDictionary:(id)arg2 forKind:(id)arg3 indexPath:(id)arg4;
- (id)_objectInDictionary:(id)arg1 forKind:(id)arg2 indexPath:(id)arg3;
- (void)_updateEditing:(_Bool)arg1 forView:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)_canEditItemAtIndexPath:(id)arg1;
- (_Bool)isEditing;
@property(readonly, nonatomic, getter=_isEditing) _Bool _editing;
- (void)setEditing:(_Bool)arg1;
- (_Bool)canBeEdited;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_visibleViewForLayoutAttributes:(id)arg1;
- (id)_visibleCellForIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

