//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewControllerSpec.h>

@interface PUPhotosGridViewControllerPhoneSpec : PUPhotosGridViewControllerSpec
{
}

+ (struct CGSize)bestItemSizeForAvailableWidth:(double)arg1 screenScale:(double)arg2 bestSpacing:(double *)arg3 bestInset:(double *)arg4;
- (_Bool)shouldPlaceSelectAllButtonInRightNavigationBar;
- (_Bool)canDisplaySlideshowButton;
- (_Bool)canDisplaySearchActionInNavigationBar;
- (long long)forceLoadInitialSectionCount;
- (void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3 layoutMargins:(struct UIEdgeInsets)arg4;
- (id)albumPickerViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (_Bool)canDisplayOptionsInPopover;
- (long long)cellFillMode;
- (int)thumbnailImageFormat;
- (struct CGSize)baseInterItemSpacing;
- (unsigned long long)supportedInterfaceOrientations;

@end

