//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;
@protocol PHAssetCollectionDataSource;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingTransitionContext : NSObject
{
    id <PHAssetCollectionDataSource> _assetCollectionsDataSource;
    NSIndexPath *_keyAssetIndexPath;
}

@property(retain, nonatomic) NSIndexPath *keyAssetIndexPath; // @synthesize keyAssetIndexPath=_keyAssetIndexPath;
@property(retain, nonatomic) id <PHAssetCollectionDataSource> assetCollectionsDataSource; // @synthesize assetCollectionsDataSource=_assetCollectionsDataSource;
- (void).cxx_destruct;

@end

