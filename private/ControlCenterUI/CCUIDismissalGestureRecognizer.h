//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class NSSet;

@interface CCUIDismissalGestureRecognizer : UIPanGestureRecognizer
{
    _Bool _triggered;
    NSSet *_currentTouches;
}

- (void).cxx_destruct;
- (void)_cancelOtherGestureRecognizersForTouches:(id)arg1;
- (void)_tryToCancelTouches;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

