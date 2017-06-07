//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSMutableSceneSettings.h>

#import <UIKit/UIApplicationSceneSettings-Protocol.h>

@class NSNumber, NSString;

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>
{
}

- (Class)canvasClass;
- (_Bool)isUISubclass;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) long long deviceOrientation;
@property(nonatomic) _Bool statusBarDisabled;
@property(nonatomic) _Bool idleModeEnabled;
@property(nonatomic) _Bool canShowAlerts;
@property(nonatomic) _Bool deviceOrientationEventsEnabled;
@property(nonatomic) _Bool forcedStatusBarForegroundTransparent;
@property(retain, nonatomic) NSNumber *forcedStatusBarHidden;
@property(retain, nonatomic) NSNumber *forcedStatusBarStyle;
@property(nonatomic) long long userInterfaceStyle;
@property(nonatomic) unsigned long long deactivationReasons;
@property(nonatomic) int statusBarStyleOverridesToSuppress;
@property(nonatomic) _Bool underLock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

