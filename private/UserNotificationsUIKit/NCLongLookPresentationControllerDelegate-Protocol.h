//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSAnimationSettings, UIPresentationController<NCLongLookPresentationController>, UIView;

@protocol NCLongLookPresentationControllerDelegate <NSObject>
- (struct CGRect)longLookPresentationController:(UIPresentationController<NCLongLookPresentationController> *)arg1 frameForTransitionViewInPresentationSuperview:(UIView *)arg2;

@optional
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForLongLookPresentationController:(UIPresentationController<NCLongLookPresentationController> *)arg1;
- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForLongLookPresentationController:(UIPresentationController<NCLongLookPresentationController> *)arg1;
- (_Bool)longLookPresentationControllerShouldAllowKeyboardOnAppearance:(UIPresentationController<NCLongLookPresentationController> *)arg1;
@end

