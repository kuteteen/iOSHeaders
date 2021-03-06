//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView;

@interface AVFullScreenViewController : UIViewController
{
    _Bool _canChangeStatusBarHidden;
    UIView *_presentationBackgroundView;
    id <AVFullScreenViewControllerDelegate> _delegate;
    UIView *_contentView;
}

@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool canChangeStatusBarHidden; // @synthesize canChangeStatusBarHidden=_canChangeStatusBarHidden;
@property(nonatomic) __weak id <AVFullScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *presentationBackgroundView; // @synthesize presentationBackgroundView=_presentationBackgroundView;
- (void).cxx_destruct;
- (long long)preferredWhitePointAdaptivityStyle;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)keyCommands;
- (void)fullScreenPresentationWillBegin;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 presentingViewController:(id)arg2 sourceView:(id)arg3;

@end

