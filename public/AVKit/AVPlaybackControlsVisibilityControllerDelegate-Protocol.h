//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlaybackControlsVisibilityController, UIView;

@protocol AVPlaybackControlsVisibilityControllerDelegate <NSObject>
- (void)playbackControlsVisibilityControllerWillExitAutoplayPhase:(AVPlaybackControlsVisibilityController *)arg1;
- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 animateAlongsideVisibilityAnimations:(id <UIViewImplicitlyAnimating>)arg2;
- (void)playbackControlsVisibilityControllerDidChangeViewVisibility:(AVPlaybackControlsVisibilityController *)arg1;
- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 willShowView:(UIView *)arg2;
- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 updateStatusBarAppearanceUsingAnimator:(id <UIViewImplicitlyAnimating>)arg2;
@end

