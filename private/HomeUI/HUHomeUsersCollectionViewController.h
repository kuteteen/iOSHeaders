//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUItemCollectionViewController.h>

#import "UICollectionViewDelegateFlowLayout.h"

@class HFHomeBuilder, NSString;

@interface HUHomeUsersCollectionViewController : HUItemCollectionViewController <UICollectionViewDelegateFlowLayout>
{
    HFHomeBuilder *_homeBuilder;
    double _cellWidth;
    double _cellAvatarDiameter;
}

@property(nonatomic) double cellAvatarDiameter; // @synthesize cellAvatarDiameter=_cellAvatarDiameter;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) HFHomeBuilder *homeBuilder; // @synthesize homeBuilder=_homeBuilder;
- (void).cxx_destruct;
- (double)_horizontalInset;
- (double)_verticalInset;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)isLayoutDependentOnItemState;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)viewWillLayoutSubviews;
- (id)initWithHomeBuilder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

