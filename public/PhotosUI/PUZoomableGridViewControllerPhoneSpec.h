//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUZoomableGridViewControllerSpec.h>

__attribute__((visibility("hidden")))
@interface PUZoomableGridViewControllerPhoneSpec : PUZoomableGridViewControllerSpec
{
}

- (long long)yearsSectionHeaderStyle;
- (struct UIEdgeInsets)yearsLevelSectionHeaderHighlightInset;
- (struct UIEdgeInsets)yearsLevelSectionHeaderContentInset;
- (struct CGSize)yearsLevelThumbnailSize;
- (void)configureYearsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (long long)collectionsSectionHeaderStyle;
- (struct UIEdgeInsets)collectionsLevelSectionHeaderHighlightInset;
- (struct UIEdgeInsets)collectionsLevelSectionHeaderContentInset;
- (struct CGSize)collectionsLevelThumbnailSize;
- (void)configureCollectionsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (long long)fullMomentsSectionHeaderStyle;
- (struct UIEdgeInsets)fullMomentsLevelSectionHeaderHighlightInset;
- (struct CGSize)fullMomentsLevelThumbnailSize;
- (void)configureFullMomentsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (struct UIEdgeInsets)magnifiedDragEdgeInsets;
- (double)magnifiedYOffset;
- (struct CGSize)magnifiedImageSize;
- (_Bool)dynamicLayoutEnabled;
- (void)updateGridLayoutUsingFloatingHeaders:(id)arg1;
- (_Bool)canDisplayMultipleRightBarButtonItems;
- (id)newGridSpec;

@end

