//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUStorageManagementBaseController.h>

#import <PhotosUI/PUDeletePhotosActionControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpPresentationHelperAssetDisplayDelegate-Protocol.h>
#import <PhotosUI/PUOneUpPresentationHelperDelegate-Protocol.h>
#import <PhotosUI/PUVideoListAssetExpungeActionPerformerDelegate-Protocol.h>
#import <PhotosUI/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUI/UIScrollViewDelegate-Protocol.h>
#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSIndexPath, NSMutableArray, NSString, PHImageRequestOptions, PUOneUpPresentationHelper, PUOneUpViewController, PUVideoListContentUnavailableView, PXPhotoKitAssetsDataSourceManager, PXPhotosDataSource, PXPhotosDataSourceConfiguration, UIBarButtonItem, UITableView, UITableViewCell, UIViewController;

@interface PUVideoListViewController : PUStorageManagementBaseController <UITableViewDataSource, UITableViewDelegate, PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PUDeletePhotosActionControllerDelegate, PUVideoListAssetExpungeActionPerformerDelegate, UIScrollViewDelegate>
{
    NSMutableArray *_selectedIndexPathForDelete;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_deleteBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UITableViewCell *_videoCell;
    _Bool _needsUpdateCellConfiguration;
    _Bool __viewInSyncWithModel;
    _Bool __assetsFetchResultIsValid;
    PHImageRequestOptions *__imageRequestOptions;
    PUOneUpPresentationHelper *__oneUpPresentationHelper;
    PUOneUpViewController *__pushedOneUpViewController;
    PXPhotosDataSource *__dataSource;
    PXPhotosDataSourceConfiguration *__dataSourceManagerConfiguration;
    PXPhotoKitAssetsDataSourceManager *__photoKitDataSourceManager;
    UIViewController *__expungeActionSheet;
    UITableView *__mainTableView;
    NSIndexPath *__lastNavigatedAssetIndexPath;
    PUVideoListContentUnavailableView *__contentUnavailableView;
}

@property(retain, nonatomic, setter=_setContentUnavailableView:) PUVideoListContentUnavailableView *_contentUnavailableView; // @synthesize _contentUnavailableView=__contentUnavailableView;
@property(retain, nonatomic, setter=_setLastNavigatedAssetIndexPath:) NSIndexPath *_lastNavigatedAssetIndexPath; // @synthesize _lastNavigatedAssetIndexPath=__lastNavigatedAssetIndexPath;
@property(nonatomic, setter=_setAssetsFetchResultIsValid:) _Bool _assetsFetchResultIsValid; // @synthesize _assetsFetchResultIsValid=__assetsFetchResultIsValid;
@property(nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) _Bool _viewInSyncWithModel; // @synthesize _viewInSyncWithModel=__viewInSyncWithModel;
@property(retain, nonatomic, setter=_setMainTableView:) UITableView *_mainTableView; // @synthesize _mainTableView=__mainTableView;
@property(nonatomic, setter=_setExpungeActionSheet:) __weak UIViewController *_expungeActionSheet; // @synthesize _expungeActionSheet=__expungeActionSheet;
@property(retain, nonatomic) PXPhotoKitAssetsDataSourceManager *_photoKitDataSourceManager; // @synthesize _photoKitDataSourceManager=__photoKitDataSourceManager;
@property(retain, nonatomic, setter=_setDataSourceManagerConfiguration:) PXPhotosDataSourceConfiguration *_dataSourceManagerConfiguration; // @synthesize _dataSourceManagerConfiguration=__dataSourceManagerConfiguration;
@property(retain, nonatomic, setter=_setDataSource:) PXPhotosDataSource *_dataSource; // @synthesize _dataSource=__dataSource;
@property(retain, nonatomic, setter=_setPushedOneUpViewController:) PUOneUpViewController *_pushedOneUpViewController; // @synthesize _pushedOneUpViewController=__pushedOneUpViewController;
@property(retain, nonatomic, setter=_setOneUpPresentationHelper:) PUOneUpPresentationHelper *_oneUpPresentationHelper; // @synthesize _oneUpPresentationHelper=__oneUpPresentationHelper;
- (void).cxx_destruct;
- (void)actionPerformer:(id)arg1 stopExcludingAssetsFromDataSource:(id)arg2;
- (void)actionPerformer:(id)arg1 excludeAssetsFromDataSource:(id)arg2;
- (id)presentingViewControllerForActionPerformer:(id)arg1;
- (void)updateVideoListCellContentView:(id)arg1 forItemAtIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)processDataSourceChange:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (_Bool)_shouldUpdateTableViewForDataSource:(id)arg1;
- (long long)oneUpPresentationHelper:(id)arg1 transitionTypeWithProposedTransitionType:(long long)arg2;
- (struct CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets *)arg3 contentsRect:(struct CGRect *)arg4;
- (_Bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (long long)oneUpPresentationHelperPreferredBarStyle:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2;
- (void)_updateAssetsFetchResultIfNeeded;
- (void)_presentOneUpViewControllerForAssetAtInderxPath:(id)arg1;
- (void)_ensureOneUpPresentationHelper;
- (id)_videoThumbnailViewForAssetAtIndexPath:(id)arg1;
@property(readonly, nonatomic) PHImageRequestOptions *_imageRequestOptions; // @synthesize _imageRequestOptions=__imageRequestOptions;
- (id)photoCollectionAtIndex:(unsigned long long)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (id)assetCollectionsFetchResult;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_configureTableView:(id)arg1;
- (id)_headerViewForTableView:(id)arg1;
- (id)_defaultBackgroundColor;
- (void)_deleteItemsAtSelectedIndexes:(id)arg1;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (long long)preferredAlertControllerStyleForDeletePhotosActionController:(id)arg1;
- (id)_videoCell;
- (void)cancelEditingMode:(id)arg1;
- (void)deleteSelectedItems:(id)arg1;
- (void)_clearAllIndexPathsForDeleteSelection;
- (void)_removeIndexPathFromDeleteSelection:(id)arg1;
- (unsigned long long)_numberOfSelectedCellsForDelete;
- (void)_addIndexPathToDeleteSelection:(id)arg1;
- (void)selectVideoItems:(id)arg1;
- (void)updateListCellForItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)_tableViewCellContentViewAtIndexPath:(id)arg1;
- (void)_updatePreparedCellsConfiguration;
- (void)_invalidatePreparedCellsConfiguration;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)updateInterfaceLayoutIfNecessary;
- (void)viewDidLayoutSubviews;
- (void)_installVideoListView;
- (void)_installContentUnavailableView;
- (void)_updateSubviewsOrderingAndVisibilityWithVideoCounts:(unsigned long long)arg1;
- (void)_updateNavigationBarAnimated:(_Bool)arg1;
- (void)_setRightBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)_setLeftBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (id)_cancelBarButtonItem;
- (id)_deleteBarButtonItem;
- (id)_editBarButtonItem;
- (void)_updateMainView;
- (void)_reloadContentView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

