//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlaybackControlsView, AVPlayerViewControllerContentView;

@protocol AVPlayerViewControllerContentViewDelegate <NSObject>
- (_Bool)playerViewControllerContentViewIsBeingTransitionedToOrFromFullScreen:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(AVPlayerViewControllerContentView *)arg1;
- (_Bool)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidMoveToWindow:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidLayoutSubviews:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentView:(AVPlayerViewControllerContentView *)arg1 didLoadPlaybackControlsView:(AVPlaybackControlsView *)arg2;
- (_Bool)playerViewControllerContentViewIsPlayingOnSecondScreen:(AVPlayerViewControllerContentView *)arg1;
@end

