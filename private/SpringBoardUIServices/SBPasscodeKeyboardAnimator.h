//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIKeyboardAnimator.h>

@class BSAnimationSettings;
@protocol SBPasscodeKeyboardAnimatorDelegate;

@interface SBPasscodeKeyboardAnimator : _UIKeyboardAnimator
{
    BSAnimationSettings *_animationSettings;
    id <SBPasscodeKeyboardAnimatorDelegate> _delegate;
}

@property(nonatomic) __weak id <SBPasscodeKeyboardAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (void).cxx_destruct;
- (void)completeAnimationWithState:(id)arg1;
- (void)runAnimationWithState:(id)arg1;
- (void)prepareForAnimationWithState:(id)arg1;
- (void)performAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 onCompletion:(CDUnknownBlockType)arg3;

@end

