//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSIndexPath, UILongPressGestureRecognizer, _UIActivityGroupActivityCell;

__attribute__((visibility("hidden")))
@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout
{
    UILongPressGestureRecognizer *_editingGestureRecognizer;
    NSIndexPath *_indexPathForDraggedItem;
    double _evaluatedHorizontalItemOffset;
    NSArray *_preparedLayoutAttributes;
    NSArray *_preparedUpdateItems;
    _UIActivityGroupActivityCell *_draggingView;
    struct CGSize _evaluatedItemSize;
    struct CGSize _evaluatedContentSize;
    struct UIOffset _draggingOffset;
    struct UIEdgeInsets _evaluatedInset;
}

@property(retain, nonatomic) _UIActivityGroupActivityCell *draggingView; // @synthesize draggingView=_draggingView;
@property(nonatomic) struct UIOffset draggingOffset; // @synthesize draggingOffset=_draggingOffset;
@property(copy, nonatomic) NSArray *preparedUpdateItems; // @synthesize preparedUpdateItems=_preparedUpdateItems;
@property(copy, nonatomic) NSArray *preparedLayoutAttributes; // @synthesize preparedLayoutAttributes=_preparedLayoutAttributes;
@property(nonatomic) double evaluatedHorizontalItemOffset; // @synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset;
@property(nonatomic) struct CGSize evaluatedContentSize; // @synthesize evaluatedContentSize=_evaluatedContentSize;
@property(nonatomic) struct CGSize evaluatedItemSize; // @synthesize evaluatedItemSize=_evaluatedItemSize;
@property(nonatomic) struct UIEdgeInsets evaluatedInset; // @synthesize evaluatedInset=_evaluatedInset;
@property(copy, nonatomic) NSIndexPath *indexPathForDraggedItem; // @synthesize indexPathForDraggedItem=_indexPathForDraggedItem;
@property(retain, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer; // @synthesize editingGestureRecognizer=_editingGestureRecognizer;
- (void).cxx_destruct;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;
- (void)cancelDraggingForGesture:(id)arg1;
- (_Bool)shouldCancelDraggingForGesture:(id)arg1;
- (void)updateDraggingViewForGesture:(id)arg1;
- (void)beginDraggingForGesture:(id)arg1;
- (id)draggingViewForItemAtIndexPath:(id)arg1;
- (_Bool)shouldReverseLayoutDirection;
- (void)invalidateGroupViewLayoutAnimated:(_Bool)arg1;
- (void)handleEditingGesture:(id)arg1;
- (id)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize)arg1 inset:(struct UIEdgeInsets)arg2 offscreenPeekInFactor:(float)arg3;
- (id)_indexPathsForItemsInSection:(long long)arg1;
- (struct UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1;
- (struct CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)indexPathForItemRecognizedByGesture:(id)arg1;

@end

