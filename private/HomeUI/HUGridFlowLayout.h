//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <HomeUI/HUControllableCollectionViewLayout-Protocol.h>

@class HFWallpaperSlice, HUGridLayoutOptions, HUWallpaperView, NSMutableDictionary, NSString;

@interface HUGridFlowLayout : UICollectionViewFlowLayout <HUControllableCollectionViewLayout>
{
    HUGridLayoutOptions *_layoutOptions;
    HUWallpaperView *_wallpaperView;
    HFWallpaperSlice *_blurredWallpaperSlice;
    NSMutableDictionary *_overrideAttributesByIndexPath;
}

+ (Class)layoutAttributesClass;
@property(readonly, nonatomic) NSMutableDictionary *overrideAttributesByIndexPath; // @synthesize overrideAttributesByIndexPath=_overrideAttributesByIndexPath;
@property(retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice; // @synthesize blurredWallpaperSlice=_blurredWallpaperSlice;
@property(nonatomic) __weak HUWallpaperView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
- (void).cxx_destruct;
- (void)_invalidateCollectionViewLayoutsForSubviewsOfView:(id)arg1;
- (id)_modifiedLayoutAttributesForAttributes:(id)arg1;
- (void)clearAllOverrideAttributes;
- (void)clearOverrideAttributesForItemAtIndexPath:(id)arg1;
- (void)applyOverrideAttributes:(id)arg1 toItemAtIndexPath:(id)arg2;
- (void)invalidateLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
