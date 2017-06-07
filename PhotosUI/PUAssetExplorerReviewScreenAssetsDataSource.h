//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSource.h>

@class NSCache, NSDictionary;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenAssetsDataSource : PUAssetsDataSource
{
    PUAssetsDataSource *__originalDataSource;
    NSDictionary *__substitutedAssetsByUUID;
    NSCache *__assetReferenceByIndexPathCache;
}

@property(readonly, nonatomic) NSCache *_assetReferenceByIndexPathCache; // @synthesize _assetReferenceByIndexPathCache=__assetReferenceByIndexPathCache;
@property(readonly, nonatomic) NSDictionary *_substitutedAssetsByUUID; // @synthesize _substitutedAssetsByUUID=__substitutedAssetsByUUID;
@property(readonly, nonatomic) PUAssetsDataSource *_originalDataSource; // @synthesize _originalDataSource=__originalDataSource;
- (void).cxx_destruct;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)identifier;
- (id)initWithDataSource:(id)arg1 substitutedAssets:(id)arg2;

@end

