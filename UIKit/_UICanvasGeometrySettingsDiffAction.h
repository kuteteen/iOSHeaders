//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UICanvasSettingsDiffAction-Protocol.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

__attribute__((visibility("hidden")))
@interface _UICanvasGeometrySettingsDiffAction : NSObject <_UICanvasSettingsDiffAction>
{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsGeometryMutationDiffInspector;
}

@property(retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsGeometryMutationDiffInspector; // @synthesize sceneSettingsGeometryMutationDiffInspector=_sceneSettingsGeometryMutationDiffInspector;
- (void).cxx_destruct;
- (void)_updateSceneGeometryWithSettingObserverContext:(CDStruct_d7010776)arg1 canvas:(id)arg2 transitionContext:(id)arg3;
- (void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

