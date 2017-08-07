//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, UIDelayedAction, UITouch;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPoint;
    double _allowableMovement;
    int _numberOfFullTaps;
    double _minimumFinalPressDuration;
    NSMutableSet *_activeTouches;
    int _currentNumberOfTaps;
    UITouch *_touch;
    UIDelayedAction *_tapTimer;
}

@property(nonatomic) double minimumFinalPressDuration; // @synthesize minimumFinalPressDuration=_minimumFinalPressDuration;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
@property(nonatomic) int numberOfFullTaps; // @synthesize numberOfFullTaps=_numberOfFullTaps;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_verifyMovementInAllowableRange;
- (void)recognized:(id)arg1;
- (void)tooSlow:(id)arg1;
- (void)startTapTimer:(double)arg1;
- (void)startRecognitionTimer:(double)arg1;
- (void)clearTapTimer;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

