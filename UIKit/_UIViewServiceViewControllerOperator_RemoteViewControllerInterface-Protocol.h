//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIViewServiceDeputy_UIViewServiceInterface-Protocol.h>
#import <UIKit/_UIViewServiceUIBehaviorInterface-Protocol.h>

@class BKSAnimationFenceHandle, BSMachPortSendRight, FBSDisplayConfiguration, FBSDisplayIdentity, NSArray, NSString, NSUUID, UIColor, UITraitCollection, _UIViewControllerTransitionCoordinatorContextDescription;

@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface, _UIViewServiceUIBehaviorInterface>
- (void)__cancelAlertActionWithToken:(long long)arg1;
- (void)__redoActionWithToken:(long long)arg1;
- (void)__undoActionWithToken:(long long)arg1;
- (void)__restoreStateForSession:(NSString *)arg1 restorationAnchor:(NSString *)arg2;
- (void)__saveStateForSession:(NSString *)arg1 restorationAnchor:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)__exchangeAccessibilityPortInformation:(BSMachPortSendRight *)arg1 replyHandler:(void (^)(BSMachPortSendRight *, NSError *))arg2;
- (void)__dimmingViewWasTapped;
- (void)__textServiceDidDismiss;
- (void)__hostWillTransitionToTraitCollection:(UITraitCollection *)arg1 withContextDescription:(_UIViewControllerTransitionCoordinatorContextDescription *)arg2 deferIfAnimated:(_Bool)arg3;
- (void)__setHostTraitCollection:(UITraitCollection *)arg1 deferIfAnimated:(_Bool)arg2;
- (void)__setHostTintColor:(UIColor *)arg1 tintAdjustmentMode:(long long)arg2;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(NSArray *)arg1 originalSource:(id)arg2 legacyAppearance:(_Bool)arg3;
- (void)__scrollToTopFromTouchAtViewLocation:(struct CGPoint)arg1 resultHandler:(void (^)(_Bool, NSError *))arg2;
- (void)__setHostViewUnderlapsStatusBar:(_Bool)arg1;
- (void)__hostDidSetPresentationControllerClassName:(NSString *)arg1;
- (void)__hostDidSetContentOverlayInsets:(struct UIEdgeInsets)arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)__hostDisablesAutomaticKeyboardBehavior:(_Bool)arg1;
- (void)__hostDidPromoteFirstResponder;
- (void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(_Bool)arg2;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(_Bool)arg3;
- (void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(_Bool)arg3;
- (void)__hostViewWillTransitionToSize:(struct CGSize)arg1 withContextDescription:(_UIViewControllerTransitionCoordinatorContextDescription *)arg2 statusBarHeight:(double)arg3 underlapsStatusBar:(_Bool)arg4 whenDone:(void (^)(struct CGSize, double))arg5;
- (void)__hostDidChangeStatusBarHeight:(double)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1;
- (void)__hostDidBecomeActive;
- (void)__hostWillResignActive;
- (void)__hostDidEnterBackground;
- (void)__hostWillEnterForeground;
- (void)__setContentSize:(struct CGSize)arg1 withFence:(BKSAnimationFenceHandle *)arg2;
- (void)__setContentSize:(struct CGSize)arg1;
- (void)__setServiceInPopover:(_Bool)arg1;
- (void)__hostDidDetachDisplay:(FBSDisplayConfiguration *)arg1;
- (void)__hostDidUpdateDisplay:(FBSDisplayConfiguration *)arg1;
- (void)__hostDidAttachDisplay:(FBSDisplayConfiguration *)arg1;
- (void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(FBSDisplayIdentity *)arg1 newHostingHandleReplyHandler:(void (^)(_UIHostedWindowHostingHandle *))arg2;
- (void)__hostViewDidDisappear:(_Bool)arg1;
- (void)__hostViewWillDisappear:(_Bool)arg1;
- (void)__hostViewDidAppear:(_Bool)arg1;
- (void)__hostViewWillAppear:(_Bool)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(UITraitCollection *)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(_Bool)arg5 completionHandler:(void (^)(struct CGSize))arg6;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__createViewController:(NSString *)arg1 withContextToken:(NSUUID *)arg2 fbsDisplays:(NSArray *)arg3 appearanceSerializedRepresentations:(NSArray *)arg4 legacyAppearance:(_Bool)arg5 traitCollection:(UITraitCollection *)arg6 initialInterfaceOrientation:(long long)arg7 hostAccessibilityServerPort:(BSMachPortSendRight *)arg8 canShowTextServices:(_Bool)arg9 replyHandler:(void (^)(_UIHostedWindowHostingHandle *, NSArray *, long long, int, BSMachPortSendRight *, NSError *))arg10;
- (void)__createViewController:(NSString *)arg1 withAppearanceSerializedRepresentations:(NSArray *)arg2 legacyAppearance:(_Bool)arg3 hostAccessibilityServerPort:(BSMachPortSendRight *)arg4 canShowTextServices:(_Bool)arg5 replyHandler:(void (^)(_UIHostedWindowHostingHandle *, NSArray *, long long, int, BSMachPortSendRight *, NSError *))arg6;
@end

