//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@class PUBrowsingIrisPlayerChange, PUBrowsingVideoPlayerChange;

@interface PUAssetViewModelChange : PUViewModelChange
{
    _Bool _assetChanged;
    _Bool _modelTileTransformChanged;
    _Bool _isUserTransformingTileDidChange;
    _Bool _isInFocusChanged;
    _Bool _focusValueChanged;
    _Bool _loadingStatusChanged;
    _Bool _forceBadgesVisibleChanged;
    _Bool _badgeInfoChanged;
    _Bool _wantsIrisBadgeVisibleChanged;
    _Bool _isFavoriteChanged;
    _Bool _accessoryViewVisibilityChanged;
    _Bool _contentOffsetChanged;
    _Bool _isInEditModeChanged;
    _Bool _badgeInfoPromiseChanged;
    PUBrowsingVideoPlayerChange *_videoPlayerChange;
    PUBrowsingIrisPlayerChange *_irisPlayerChange;
}

@property(nonatomic, setter=_setBadgeInfoPromiseChanged:) _Bool badgeInfoPromiseChanged; // @synthesize badgeInfoPromiseChanged=_badgeInfoPromiseChanged;
@property(nonatomic, setter=_setIsInEditModeChanged:) _Bool isInEditModeChanged; // @synthesize isInEditModeChanged=_isInEditModeChanged;
@property(nonatomic, setter=_setContentOffsetChanged:) _Bool contentOffsetChanged; // @synthesize contentOffsetChanged=_contentOffsetChanged;
@property(nonatomic, setter=_setAccessoryViewVisibilityChanged:) _Bool accessoryViewVisibilityChanged; // @synthesize accessoryViewVisibilityChanged=_accessoryViewVisibilityChanged;
@property(nonatomic, setter=_setIsFavoriteChanged:) _Bool isFavoriteChanged; // @synthesize isFavoriteChanged=_isFavoriteChanged;
@property(nonatomic, setter=_setWantsIrisBadgeVisibleChanged:) _Bool wantsIrisBadgeVisibleChanged; // @synthesize wantsIrisBadgeVisibleChanged=_wantsIrisBadgeVisibleChanged;
@property(readonly, nonatomic) _Bool badgeInfoChanged; // @synthesize badgeInfoChanged=_badgeInfoChanged;
@property(retain, nonatomic, setter=_setIrisPlayerChange:) PUBrowsingIrisPlayerChange *irisPlayerChange; // @synthesize irisPlayerChange=_irisPlayerChange;
@property(nonatomic, setter=_setForceBadgesVisibleChanged:) _Bool forceBadgesVisibleChanged; // @synthesize forceBadgesVisibleChanged=_forceBadgesVisibleChanged;
@property(retain, nonatomic, setter=_setVideoPlayerChange:) PUBrowsingVideoPlayerChange *videoPlayerChange; // @synthesize videoPlayerChange=_videoPlayerChange;
@property(nonatomic, setter=_setLoadingStatusChanged:) _Bool loadingStatusChanged; // @synthesize loadingStatusChanged=_loadingStatusChanged;
@property(nonatomic, setter=_setFocusValueChanged:) _Bool focusValueChanged; // @synthesize focusValueChanged=_focusValueChanged;
@property(nonatomic, setter=_setInFocusChanged:) _Bool isInFocusChanged; // @synthesize isInFocusChanged=_isInFocusChanged;
@property(nonatomic, setter=_setUserTransformingTileDidChange:) _Bool isUserTransformingTileDidChange; // @synthesize isUserTransformingTileDidChange=_isUserTransformingTileDidChange;
@property(nonatomic, setter=_setModelTileTransformChanged:) _Bool modelTileTransformChanged; // @synthesize modelTileTransformChanged=_modelTileTransformChanged;
@property(nonatomic, setter=_setAssetChanged:) _Bool assetChanged; // @synthesize assetChanged=_assetChanged;
- (void).cxx_destruct;
- (_Bool)hasChanges;

@end

