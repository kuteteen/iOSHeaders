//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAlbumListViewController.h>

#import <PhotosUI/PUPhotoPickerServicesConsumer-Protocol.h>

@class NSArray, NSString, PUUIImagePickerControllerHelper, UIBarButtonItem;
@protocol PUPhotoPicker;

__attribute__((visibility("hidden")))
@interface PUUIAlbumListViewController : PUAlbumListViewController <PUPhotoPickerServicesConsumer>
{
    UIBarButtonItem *_imagePickerCancelButton;
    _Bool _collectionsFetchResultIsValid;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    id <PUPhotoPicker> _photoPicker;
    NSArray *__imagePickerMediaTypes;
    unsigned long long __imagePickerAssetTypes;
}

@property(nonatomic, setter=_setImagePickerAssetTypes:) unsigned long long _imagePickerAssetTypes; // @synthesize _imagePickerAssetTypes=__imagePickerAssetTypes;
@property(copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes; // @synthesize _imagePickerMediaTypes=__imagePickerMediaTypes;
@property(nonatomic) __weak id <PUPhotoPicker> photoPicker; // @synthesize photoPicker=_photoPicker;
- (void).cxx_destruct;
- (_Bool)pu_wantsNavigationBarVisible;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (long long)filteringAssetTypes;
- (id)assetsFilterPredicate;
- (_Bool)shouldHideEmptyCollections;
- (_Bool)shouldShowAllPhotosItem;
- (_Bool)shouldAllowEmailInAlbumSubtitle;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (id)newGridViewControllerForAssetCollection:(id)arg1;
- (id)newGridViewControllerForAllPhotos;
- (id)newGridViewControllerForFolder:(id)arg1;
- (void)_handleImagePickerCancel:(id)arg1;
- (id)_imagePickerControllerHelper;
- (void)_updateCollectionsFetchResultIfNeeded;
- (void)_invalidateCollectionsFetchResult;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

