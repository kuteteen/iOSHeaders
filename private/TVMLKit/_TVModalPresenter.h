//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UINavigationController, UIViewController, _TVPlaybackFadeAnimator, _UIProgressiveBlurPresentationAnimator;

@interface _TVModalPresenter : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate>
{
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;
    _Bool _dismissing;
    _TVPlaybackFadeAnimator *_playbackAnimator;
    UINavigationController *_modalRootViewController;
}

+ (id)presenter;
@property(readonly, nonatomic) UINavigationController *modalRootViewController; // @synthesize modalRootViewController=_modalRootViewController;
- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)_willRotateNotification:(id)arg1;
- (void)_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isDismissing;
- (void)_configureModalController:(id)arg1 withFromController:(id)arg2 andConfiguration:(id)arg3;
- (void)hideAllAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hideController:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)showController:(id)arg1 fromController:(id)arg2 withConfiguration:(id)arg3 animated:(_Bool)arg4 andCompletionBlock:(CDUnknownBlockType)arg5;
- (void)showController:(id)arg1 fromController:(id)arg2 withConfiguration:(id)arg3 andCompletionBlock:(CDUnknownBlockType)arg4;
- (void)showController:(id)arg1 fromController:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(readonly, nonatomic) UIViewController *presentedViewController;
- (void)dealloc;
- (id)_hidden;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

