//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUActivity.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface PUWallpaperActivity : PUActivity
{
    UIViewController *_wallpaperActivityViewController;
    _Bool __wallpaperModificationAllowed;
    _Bool __needsUpdateWallpaperModificationAllowed;
}

@property(nonatomic, setter=_setNeedsUpdateWallpaperModificationAllowed:) _Bool _needsUpdateWallpaperModificationAllowed; // @synthesize _needsUpdateWallpaperModificationAllowed=__needsUpdateWallpaperModificationAllowed;
@property(nonatomic, getter=_isWallpaperModificationAllowed, setter=_setWallpaperModificationAllowed:) _Bool _wallpaperModificationAllowed; // @synthesize _wallpaperModificationAllowed=__wallpaperModificationAllowed;
- (void).cxx_destruct;
- (void)wallpaperImageViewControllerDidCancel:(id)arg1;
- (void)wallpaperImageViewControllerDidFinishSaving:(id)arg1;
- (void)wallpaperImageViewControllerDidCropWallpaper:(id)arg1;
- (void)_updateWallpaperModificationAllowedIfNeeded;
- (void)_restrictionsChanged:(id)arg1;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;
- (id)init;

@end

