//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class FBSScene, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, _UICanvas;

@protocol _UICanvasSettingsDiffAction <NSObject>
- (void)performActionsForCanvas:(_UICanvas *)arg1 withUpdatedScene:(FBSScene *)arg2 settingsDiff:(FBSSceneSettingsDiff *)arg3 fromSettings:(FBSSceneSettings *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5;
@end

