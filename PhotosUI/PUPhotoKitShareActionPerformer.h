//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotoKitActionPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPhotoKitShareActionPerformer : PUPhotoKitActionPerformer
{
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2;
- (void)_displayShareSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)performUserInteractionTask;

@end

