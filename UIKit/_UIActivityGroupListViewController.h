//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface _UIActivityGroupListViewController : UICollectionViewController
{
    _Bool _darkStyleOnLegacyApp;
    _Bool _embedded;
    NSArray *_activityGroupViewControllers;
    NSArray *_visibleActivityGroupViewControllers;
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(nonatomic, getter=isEmbedded) _Bool embedded; // @synthesize embedded=_embedded;
@property(copy, nonatomic) NSArray *visibleActivityGroupViewControllers; // @synthesize visibleActivityGroupViewControllers=_visibleActivityGroupViewControllers;
@property(nonatomic) _Bool darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
@property(copy, nonatomic) NSArray *activityGroupViewControllers; // @synthesize activityGroupViewControllers=_activityGroupViewControllers;
- (void).cxx_destruct;
- (_Bool)isAirdropViewController:(id)arg1;
- (_Bool)shouldShowNoActionsPlaceholder;
- (double)preferredContentHeightForViewController:(id)arg1;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLoad;
- (double)displayHeight;
- (void)updateVisibleActivityGroupViewControllers;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithActivityGroupViewControllers:(id)arg1 embedded:(_Bool)arg2;

@end

