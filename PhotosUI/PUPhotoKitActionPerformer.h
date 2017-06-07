//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAssetActionPerformer.h>

@class NSArray, PUPhotoKitDataSourceManager;

__attribute__((visibility("hidden")))
@interface PUPhotoKitActionPerformer : PUAssetActionPerformer
{
    PUPhotoKitDataSourceManager *_photoKitDataSourceManager;
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
@property(retain, nonatomic) PUPhotoKitDataSourceManager *photoKitDataSourceManager; // @synthesize photoKitDataSourceManager=_photoKitDataSourceManager;
- (void).cxx_destruct;
- (id)_photosDataSourceFromDataSourceManager:(id)arg1;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (void)forceIncludeAssetsInDataSource;
- (void)stopExcludingAssetsFromDataSource;
- (void)instantlyExcludeAssetsFromDataSource;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *assets; // @dynamic assets;

@end

