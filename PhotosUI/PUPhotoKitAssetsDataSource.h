//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSource.h>

@class NSCache, NSString, PXPhotosDataSource, PXPhotosDataSourceChange;

@interface PUPhotoKitAssetsDataSource : PUAssetsDataSource
{
    PXPhotosDataSource *_photosDataSource;
    PXPhotosDataSourceChange *_change;
    NSString *_changeFromDataSourceIdentifier;
    NSCache *__assetReferenceByIndexPathCache;
}

@property(readonly, nonatomic) NSCache *_assetReferenceByIndexPathCache; // @synthesize _assetReferenceByIndexPathCache=__assetReferenceByIndexPathCache;
@property(readonly, nonatomic) NSString *changeFromDataSourceIdentifier; // @synthesize changeFromDataSourceIdentifier=_changeFromDataSourceIdentifier;
@property(readonly, nonatomic) PXPhotosDataSourceChange *change; // @synthesize change=_change;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (void).cxx_destruct;
- (id)assetAtIndexPath:(id)arg1;
- (_Bool)couldAssetReferenceAppear:(id)arg1;
- (long long)numberOfAssetsWithMaximum:(long long)arg1;
- (_Bool)isEmpty;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)startingAssetReference;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2 fromDataSourceIdentifier:(id)arg3;

@end

