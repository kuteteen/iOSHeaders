//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIFocusUpdateContext, _UIFocusAnimationConfiguration;

@interface UIFocusAnimationCoordinator : NSObject
{
    _Bool _locked;
    NSMutableDictionary *_configurations;
    NSMutableDictionary *_coordinatedAnimations;
    NSMutableDictionary *_coordinatedCompletions;
    UIFocusUpdateContext *_focusUpdateContext;
    long long _activeFocusAnimation;
}

+ (id)_focusAnimationCoordinatorForAnimationType:(long long)arg1 withConfiguration:(id)arg2 inContext:(id)arg3;
+ (id)_unfocusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;
+ (id)_focusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;
@property(readonly, nonatomic) long long activeFocusAnimation; // @synthesize activeFocusAnimation=_activeFocusAnimation;
@property(readonly, nonatomic, getter=_isLocked) _Bool locked; // @synthesize locked=_locked;
@property(readonly, nonatomic, getter=_focusUpdateContext) UIFocusUpdateContext *focusUpdateContext; // @synthesize focusUpdateContext=_focusUpdateContext;
@property(readonly, nonatomic, getter=_coordinatedCompletions) NSMutableDictionary *coordinatedCompletions; // @synthesize coordinatedCompletions=_coordinatedCompletions;
@property(readonly, nonatomic, getter=_coordinatedAnimations) NSMutableDictionary *coordinatedAnimations; // @synthesize coordinatedAnimations=_coordinatedAnimations;
@property(readonly, nonatomic, getter=_configurations) NSMutableDictionary *configurations; // @synthesize configurations=_configurations;
- (void).cxx_destruct;
- (void)_cancelFocusAnimation:(long long)arg1;
- (void)_animateFocusAnimation:(long long)arg1;
- (void)_animate;
- (void)addCoordinatedAnimationsForAnimation:(long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addCoordinatedAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(CDUnknownBlockType)arg2;
- (id)_coordinatedCompletionsForFocusAnimation:(long long)arg1 createIfNeeded:(_Bool)arg2;
- (id)_coordinatedAnimationsForFocusAnimation:(long long)arg1 createIfNeeded:(_Bool)arg2;
- (void)_prepareForFocusAnimation:(long long)arg1;
@property(readonly, copy, nonatomic, getter=_activeConfiguration) _UIFocusAnimationConfiguration *activeConfiguration;
- (id)_configurationForFocusAnimation:(long long)arg1;
- (void)_setConfiguration:(id)arg1 forFocusAnimation:(long long)arg2;
@property(readonly, nonatomic, getter=_unfocusingRepositionAnimationDuration) double unfocusingRepositionAnimationDuration;
@property(readonly, nonatomic, getter=_unfocusingAnimationDuration) double unfocusingAnimationDuration;
@property(readonly, nonatomic, getter=_focusingAnimationDuration) double focusingAnimationDuration;
@property(readonly, nonatomic, getter=_activeAnimationDuration) double activeAnimationDuration;
@property(readonly, nonatomic, getter=_animationDelay) double animationDelay;
@property(readonly, nonatomic, getter=_animationOptions) unsigned long long animationOptions;
- (void)_configureWithFocusUpdateContext:(id)arg1;
- (id)_initWithFocusUpdateContext:(id)arg1;
- (id)init;

@end

