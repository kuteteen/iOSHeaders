//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIVisualEffectView;

@interface SKUIContextActionsPresentationController : UIPresentationController
{
    UIVisualEffectView *_backgroundView;
    CDUnknownBlockType _dismissalAnimations;
}

@property(copy, nonatomic) CDUnknownBlockType dismissalAnimations; // @synthesize dismissalAnimations=_dismissalAnimations;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (_Bool)shouldRemovePresentersView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end
