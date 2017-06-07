//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIInputViewAnimationStyle;

__attribute__((visibility("hidden")))
@interface UIKeyboardRotationState : NSObject
{
    int _state;
    _Bool _requiresNewState;
    int _postRotationState;
    UIInputViewAnimationStyle *_animationStyle;
    long long _targetOrientation;
}

+ (id)stateWithState:(int)arg1 targetOrientation:(long long)arg2;
@property(nonatomic) long long targetOrientation; // @synthesize targetOrientation=_targetOrientation;
@property(retain, nonatomic) UIInputViewAnimationStyle *animationStyle; // @synthesize animationStyle=_animationStyle;
@property(nonatomic) int postRotationState; // @synthesize postRotationState=_postRotationState;
@property(nonatomic) _Bool requiresNewState; // @synthesize requiresNewState=_requiresNewState;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)setPostRotationState:(int)arg1 animationStyle:(id)arg2;
- (void)dealloc;

@end

