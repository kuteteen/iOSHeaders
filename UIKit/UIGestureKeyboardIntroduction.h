//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, UIKBKeyView, UIKeyboardLayoutStar, UIView;

__attribute__((visibility("hidden")))
@interface UIGestureKeyboardIntroduction : NSObject
{
    UIKeyboardLayoutStar *m_layout;
    UIView *m_view;
    UIKBKeyView *m_firstKeyView;
    UIKBKeyView *m_secondKeyView;
    CDUnknownBlockType m_completionBlock;
    double m_start;
    NSTimer *m_gestureKeyboardInfoTimer;
    struct CGPoint m_initPoint;
    _Bool m_isInTransition;
    _Bool m_hasPeeked;
    unsigned long long m_insertedTextLength;
}

- (void)dismissGestureKeyboardIntroduction;
- (void)dismissGestureKeyboardIntroduction:(id)arg1;
- (void)playGestureKeyboardIntroduction:(id)arg1;
- (void)tryGestureKeyboardFromView:(id)arg1 withEvent:(id)arg2;
- (void)insertText:(id)arg1 forKey:(id)arg2;
- (void)showGestureKeyboardIntroduction;
- (id)initWithLayoutStar:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

