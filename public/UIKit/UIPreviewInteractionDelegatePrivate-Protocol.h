//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPreviewInteractionDelegate-Protocol.h>

@class UIPreviewInteraction, UIView, UIViewController, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;
@protocol _UIPreviewInteractionViewControllerTransition;

@protocol UIPreviewInteractionDelegatePrivate <UIPreviewInteractionDelegate>

@optional
- (id <_UIPreviewInteractionViewControllerTransition>)_previewInteraction:(UIPreviewInteraction *)arg1 disappearanceTransitionForViewController:(UIViewController *)arg2;
- (id <_UIPreviewInteractionViewControllerTransition>)_previewInteraction:(UIPreviewInteraction *)arg1 appearanceTransitionForViewController:(UIViewController *)arg2;
- (UIViewController *)_previewInteractionViewControllerForPreview:(UIPreviewInteraction *)arg1;
- (UIView *)_previewInteractionViewForHighlight:(UIPreviewInteraction *)arg1;
- (_Bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(UIPreviewInteraction *)arg1;
- (_Bool)_previewInteractionShouldFinishTransitionToPreview:(UIPreviewInteraction *)arg1;
- (_UIPreviewInteractionViewControllerPresentation *)_previewInteraction:(UIPreviewInteraction *)arg1 viewControllerPresentationForPresentingViewController:(UIViewController *)arg2;
- (_UIPreviewInteractionHighlighter *)_previewInteractionHighlighterForPreviewTransition:(UIPreviewInteraction *)arg1;
@end
