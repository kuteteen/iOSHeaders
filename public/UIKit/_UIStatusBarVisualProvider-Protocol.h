//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSOrderedSet, NSString, UIView, _UIStatusBar, _UIStatusBarAnimation, _UIStatusBarData, _UIStatusBarRegion, _UIStatusBarStyleAttributes;

@protocol _UIStatusBarVisualProvider <NSObject>
+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
@property(readonly, nonatomic) _UIStatusBarStyleAttributes *styleAttributes;
@property(nonatomic) __weak _UIStatusBar *statusBar;
- (NSArray *)orderedDisplayItemPlacementsInRegionWithIdentifier:(NSString *)arg1;
- (NSArray *)setupInContainerView:(UIView *)arg1;

@optional
- (NSString *)displayItemIdentifierFromExternalRegionIdentifier:(NSString *)arg1;
- (NSString *)regionIdentifierFromExternalRegionIdentifier:(NSString *)arg1;
- (void)region:(_UIStatusBarRegion *)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (_UIStatusBarAnimation *)removalAnimationForDisplayItemWithIdentifier:(NSString *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (_UIStatusBarAnimation *)additionAnimationForDisplayItemWithIdentifier:(NSString *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (void)dataUpdated:(_UIStatusBarData *)arg1;
- (NSOrderedSet *)region:(_UIStatusBarRegion *)arg1 willSetDisplayItems:(NSOrderedSet *)arg2;
- (NSArray *)willUpdateWithData:(_UIStatusBarData *)arg1;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
@end
