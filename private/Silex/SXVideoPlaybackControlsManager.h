//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXTopVideoControlsManager, SXVideoAccessoryBarManager, SXVideoControlsVisibilityManager;

@interface SXVideoPlaybackControlsManager : NSObject
{
    SXVideoControlsVisibilityManager *_controlsVisibilityManager;
    SXVideoAccessoryBarManager *_accessoryBarManager;
    SXTopVideoControlsManager *_topControlsManager;
    id <SXVideoControlsLockManager> _controlsLockManager;
}

@property(readonly, nonatomic) id <SXVideoControlsLockManager> controlsLockManager; // @synthesize controlsLockManager=_controlsLockManager;
@property(readonly, nonatomic) SXTopVideoControlsManager *topControlsManager; // @synthesize topControlsManager=_topControlsManager;
@property(readonly, nonatomic) SXVideoAccessoryBarManager *accessoryBarManager; // @synthesize accessoryBarManager=_accessoryBarManager;
@property(readonly, nonatomic) SXVideoControlsVisibilityManager *controlsVisibilityManager; // @synthesize controlsVisibilityManager=_controlsVisibilityManager;
- (void).cxx_destruct;
- (id)initWithVisibilityManger:(id)arg1 topControlsManager:(id)arg2 accessoryBarManager:(id)arg3 controlsLockManager:(id)arg4;

@end

