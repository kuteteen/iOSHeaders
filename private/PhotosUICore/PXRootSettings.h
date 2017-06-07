//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@class NSMutableSet, PXAssetsSceneSettings, PXDiagnosticsSettings, PXKitSettings, PXMemoriesFeedSettings, PXMemoriesRelatedSettings, PXModelSettings, PXPeopleDetailSettings, PXPhotosDataSourceSettings, PXPhotosDetailsHeaderTileSettings, PXPhotosDetailsSettings, PXRelatedSettings, PXSnapBackSettings, PXTilingSettings, PXViewControllerTransitionSettings;

@interface PXRootSettings : PXSettings
{
    NSMutableSet *_archivedSettings;
    PXDiagnosticsSettings *_diagnostics;
    PXPhotosDetailsSettings *_photosDetails;
    PXPhotosDetailsHeaderTileSettings *_photosDetailsHeaderTile;
    PXRelatedSettings *_related;
    PXMemoriesFeedSettings *_memoryFeed;
    PXMemoriesRelatedSettings *_memoriesRelated;
    PXAssetsSceneSettings *_assetsScene;
    PXPhotosDataSourceSettings *_photosDataSource;
    PXTilingSettings *_tiling;
    PXModelSettings *_model;
    PXKitSettings *_kit;
    PXViewControllerTransitionSettings *_viewControllerTransition;
    PXSnapBackSettings *_snapBack;
    PXPeopleDetailSettings *_peopleDetail;
}

+ (id)archiveKey;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(retain, nonatomic) PXPeopleDetailSettings *peopleDetail; // @synthesize peopleDetail=_peopleDetail;
@property(retain, nonatomic) PXSnapBackSettings *snapBack; // @synthesize snapBack=_snapBack;
@property(retain, nonatomic) PXViewControllerTransitionSettings *viewControllerTransition; // @synthesize viewControllerTransition=_viewControllerTransition;
@property(retain, nonatomic) PXKitSettings *kit; // @synthesize kit=_kit;
@property(retain, nonatomic) PXModelSettings *model; // @synthesize model=_model;
@property(retain, nonatomic) PXTilingSettings *tiling; // @synthesize tiling=_tiling;
@property(retain, nonatomic) PXPhotosDataSourceSettings *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(retain, nonatomic) PXAssetsSceneSettings *assetsScene; // @synthesize assetsScene=_assetsScene;
@property(retain, nonatomic) PXMemoriesRelatedSettings *memoriesRelated; // @synthesize memoriesRelated=_memoriesRelated;
@property(retain, nonatomic) PXMemoriesFeedSettings *memoryFeed; // @synthesize memoryFeed=_memoryFeed;
@property(retain, nonatomic) PXRelatedSettings *related; // @synthesize related=_related;
@property(retain, nonatomic) PXPhotosDetailsHeaderTileSettings *photosDetailsHeaderTile; // @synthesize photosDetailsHeaderTile=_photosDetailsHeaderTile;
@property(retain, nonatomic) PXPhotosDetailsSettings *photosDetails; // @synthesize photosDetails=_photosDetails;
@property(retain, nonatomic) PXDiagnosticsSettings *diagnostics; // @synthesize diagnostics=_diagnostics;
- (void).cxx_destruct;
- (id)archiveValueForKey:(id)arg1;
- (void)save;

@end
