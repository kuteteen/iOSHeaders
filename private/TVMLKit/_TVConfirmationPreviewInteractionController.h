//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIPreviewInteractionDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IKCollectionElement, NSString, UICollectionView, UICollectionViewCell, UIPreviewInteraction, UIViewController, UIViewPropertyAnimator, _TVAppDocumentController, _TVConfirmationDialogPresentationController, _TVConfirmationDocumentWrapperViewController;

@interface _TVConfirmationPreviewInteractionController : NSObject <UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UIPreviewInteraction *_previewInteraction;
    _Bool _previewTransitionEnded;
    _TVConfirmationDocumentWrapperViewController *_wrapperController;
    _TVAppDocumentController *_appDocumentController;
    _TVConfirmationDialogPresentationController *_dialogPresentationController;
    UIViewPropertyAnimator *_previewPropertyAnimator;
    UIViewPropertyAnimator *_commitPropertyAnimator;
    UICollectionViewCell *_stashedCell;
    IKCollectionElement *_collectionElement;
    id <_TVConfirmationPreviewInteractionControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    UIViewController *_presentingViewController;
}

@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <_TVConfirmationPreviewInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak IKCollectionElement *collectionElement; // @synthesize collectionElement=_collectionElement;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_cleanupPreviewInteraction;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)dismissConfirmation;
- (void)dealloc;
- (id)initWithPresentingViewController:(id)arg1 andCollectionView:(id)arg2 andCollectionElement:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

