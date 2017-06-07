//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIFocusRegionContainer-Protocol.h>
#import <UIKit/_UILegacyFocusRegion-Protocol.h>

@class NSArray, NSString, UICollectionView, UICollectionViewLayoutAttributes, UIView;
@protocol UIFocusEnvironment;

__attribute__((visibility("hidden")))
@interface _UICollectionViewCellPromiseRegion : NSObject <_UILegacyFocusRegion, _UIFocusRegionContainer>
{
    UICollectionView *_collectionView;
    UICollectionViewLayoutAttributes *_layoutAttributes;
}

@property(retain, nonatomic) UICollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly, nonatomic, getter=_parentFocusEnvironment) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (id)_focusDebugOverlayParentView;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (_Bool)_isTransparentFocusRegion;
- (id)_fulfillPromisedFocusRegion;
- (_Bool)_isPromiseFocusRegion;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)_legacy_isEligibleForFocusInteraction;
- (struct CGRect)_focusRegionFrame;
- (id)_focusRegionFocusSystem;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

