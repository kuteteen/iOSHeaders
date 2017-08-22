//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <UIKit/FBSSceneDelegate-Protocol.h>
#import <UIKit/UICoordinateSpace-Protocol.h>
#import <UIKit/_UICanvasLifecycleStateMonitoring-Protocol.h>

@class FBSScene, FBSSceneSettings, NSArray, NSPointerArray, NSString, UIScreen, _UIContextBinder, __UISceneSubstrate;
@protocol UICoordinateSpace, _UIAnimationFenceCoordinating, _UICanvasDelegate, _UICanvasMetricsUpdating;

@interface _UICanvas : UIResponder <UICoordinateSpace, FBSSceneDelegate, _UICanvasLifecycleStateMonitoring>
{
    _UIContextBinder *_binder;
    UIScreen *_screen;
    __UISceneSubstrate *_sceenSubstrate;
    _UICanvas *_settingsCanvas;
    FBSSceneSettings *_overrideSettings;
    id <_UICanvasMetricsUpdating> _metricsCalculator;
    NSPointerArray *_inheritingCanvases;
    _Bool _active;
    _Bool suspendedEventsOnly;
    _Bool runningInTaskSwitcher;
    _Bool suspendedUnderLock;
    _Bool respondingToLifecycleEvent;
    long long state;
    FBSSceneSettings *_oldSettings;
    id <_UICanvasDelegate> _delegate;
    FBSScene *_scene;
}

+ (void)_enumerateAllWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 asCopy:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (void)_updateVisibleCanvasAndWindowOrderWithTest:(CDUnknownBlockType)arg1;
+ (id)_canvasForScene:(id)arg1 create:(_Bool)arg2;
+ (id)_keyboardCanvasForScreen:(id)arg1;
+ (id)_unassociatedCanvasForScreen:(id)arg1 create:(_Bool)arg2;
+ (void)_enqueuePostSettingUpdateTransactionBlock:(CDUnknownBlockType)arg1;
+ (void)setActiveSettingsTransaction:(_Bool)arg1;
+ (_Bool)activeSettingsTransaction;
+ (id)canvasForScene:(id)arg1;
+ (id)_actionsHandlers;
+ (id)_settingsDiffActions;
+ (id)canvases;
@property(readonly, nonatomic) FBSScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) id <_UICanvasDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=_oldSettings) FBSSceneSettings *oldSettings; // @synthesize oldSettings=_oldSettings;
@property(nonatomic, getter=_isRespondingToLifecycleEvent, setter=_setIsRespondingToLifecycleEvent:) _Bool respondingToLifecycleEvent; // @synthesize respondingToLifecycleEvent;
@property(nonatomic, getter=_suspendedUnderLock, setter=_setSuspendedUnderLock:) _Bool suspendedUnderLock; // @synthesize suspendedUnderLock;
@property(nonatomic, getter=_runningInTaskSwitcher, setter=_setRunningInTaskSwitcher:) _Bool runningInTaskSwitcher; // @synthesize runningInTaskSwitcher;
@property(nonatomic, getter=_suspendedEventsOnly, setter=_setSuspendedEventsOnly:) _Bool suspendedEventsOnly; // @synthesize suspendedEventsOnly;
@property(readonly, nonatomic) long long state; // @synthesize state;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <_UIAnimationFenceCoordinating> animationFencingCoordinator;
- (void)_invalidate;
- (void)_recycleAttachmentForWindow:(id)arg1;
- (id)sceneLayerForWindow:(id)arg1;
- (struct CGRect)_referenceBoundsForOrientation:(long long)arg1;
- (struct CGRect)_referenceBounds;
- (void)_computeMetrics:(_Bool)arg1;
- (_Bool)_windowIsFront:(id)arg1;
- (void)_windowUpdatedProperties:(id)arg1;
- (void)_windowUpdatedVisibility:(id)arg1;
- (void)_updateVisibleWindowOrderWithTest:(CDUnknownBlockType)arg1;
- (void)_enumerateWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 asCopy:(_Bool)arg3 stopped:(_Bool *)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)_enumerateWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 asCopy:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)allWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *_allWindows;
- (id)initWithScene:(id)arg1;
- (void)_prepareCanvasForResumeWithTest:(CDUnknownBlockType)arg1;
- (void)_prepareCanvasForSuspend;
@property(readonly, nonatomic, getter=_hasLifecycle) _Bool hasLifecycle;
- (void)_performActions:(CDUnknownBlockType)arg1 withOverrideSettings:(id)arg2;
@property(readonly, nonatomic, getter=_effectiveSettings) FBSSceneSettings *effectiveSettings;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
@property(readonly, nonatomic) __weak _UICanvas *settingsCanvas;
- (void)inheritSettingsFromCanvas:(id)arg1;
- (id)_inheritingWindowsIncludingInvisible:(_Bool)arg1;
- (void)_removeInheritingCanvas:(id)arg1;
- (void)_addInheritingCanvas:(id)arg1;
@property(nonatomic) _Bool keepContextAssociationInBackground;
@property(readonly, copy) NSString *description;
- (void)detachWindow:(id)arg1;
- (void)attachWindow:(id)arg1;
- (void)_willAttach;
- (void)_willResignActive;
- (void)_didBecomeActive;
@property(nonatomic, getter=_isActive, setter=_setIsActive:) _Bool active;
- (void)_invalidateScreen;
@property(readonly, nonatomic) UIScreen *screen;
@property(readonly, nonatomic) NSArray *_visibleWindows;
@property(readonly, nonatomic) NSArray *windows;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

