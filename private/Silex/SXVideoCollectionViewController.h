//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, SXVideoCollectionViewScrollLock, SXVideoControlsViewController, SXVideoItemViewControllerVisibilityManager, SXVideoView, UICollectionView;

@interface SXVideoCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    id <SXVideoCollectionViewLayoutFactory> _collectionViewLayoutFactory;
    SXVideoItemViewControllerVisibilityManager *_visibilityManager;
    id <SXVideoQueueObserving> _queueObserver;
    id <SXVideoQueueProviding> _queueProvider;
    id <SXVideoItemViewControllerFactory> _itemViewControllerFactory;
    SXVideoControlsViewController *_controlsViewController;
    SXVideoCollectionViewScrollLock *_scrollLock;
    id <SXVideoCollectionViewContentOffsetProviding> _contentOffsetProvider;
}

@property(readonly, nonatomic) id <SXVideoCollectionViewContentOffsetProviding> contentOffsetProvider; // @synthesize contentOffsetProvider=_contentOffsetProvider;
@property(readonly, nonatomic) SXVideoCollectionViewScrollLock *scrollLock; // @synthesize scrollLock=_scrollLock;
@property(readonly, nonatomic) SXVideoControlsViewController *controlsViewController; // @synthesize controlsViewController=_controlsViewController;
@property(readonly, nonatomic) id <SXVideoItemViewControllerFactory> itemViewControllerFactory; // @synthesize itemViewControllerFactory=_itemViewControllerFactory;
@property(readonly, nonatomic) id <SXVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
@property(readonly, nonatomic) id <SXVideoQueueObserving> queueObserver; // @synthesize queueObserver=_queueObserver;
@property(readonly, nonatomic) SXVideoItemViewControllerVisibilityManager *visibilityManager; // @synthesize visibilityManager=_visibilityManager;
@property(readonly, nonatomic) id <SXVideoCollectionViewLayoutFactory> collectionViewLayoutFactory; // @synthesize collectionViewLayoutFactory=_collectionViewLayoutFactory;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, nonatomic) SXVideoView *videoViewForCurrentVideo;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCollectionViewProvider:(id)arg1 visibilityManager:(id)arg2 queueProvider:(id)arg3 queueObserver:(id)arg4 skipObserver:(id)arg5 itemViewControllerFactory:(id)arg6 collectionViewLayoutFactory:(id)arg7 controlsViewController:(id)arg8 scrollLock:(id)arg9 contentOffsetProvider:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

