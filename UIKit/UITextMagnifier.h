//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIResponder, UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifier : UIView
{
    UIView *_target;
    struct CGPoint _magnificationPoint;
    struct CGPoint _animationPoint;
    struct CGPoint _terminalPoint;
    _Bool _terminalPointPlacedCarefully;
    UIResponder<UITextInput> *_text;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    UIView *_magnifierRenderer;
    UIView *_autoscrollRenderer;
    int _autoscrollDirections;
}

+ (id)getLoupeBackgroundColor:(id)arg1;
@property(retain, nonatomic) UIResponder<UITextInput> *text; // @synthesize text=_text;
@property(retain, nonatomic) UIView *target; // @synthesize target=_target;
@property(nonatomic) struct CGPoint animationPoint; // @synthesize animationPoint=_animationPoint;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isHorizontal;
- (void)stopMagnifying:(_Bool)arg1;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(_Bool)arg5;
- (void)windowWillRotate:(id)arg1;
- (void)detectLostTouches:(id)arg1;
- (void)remove;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomDownAnimation;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomUpAnimation;
- (void)setNeedsDisplay;
- (void)setFrame:(struct CGRect)arg1;
- (void)autoscrollWillNotStart;
- (void)setAutoscrollDirections:(int)arg1;
- (void)animateToMagnifierRenderer;
- (void)setToMagnifierRenderer;
- (void)animateToAutoscrollRenderer;
- (void)postAutoscrollPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool terminalPointPlacedCarefully; // @synthesize terminalPointPlacedCarefully=_terminalPointPlacedCarefully;
@property(readonly, nonatomic) struct CGPoint terminalPoint; // @synthesize terminalPoint=_terminalPoint;
@property(nonatomic) struct CGPoint magnificationPoint; // @synthesize magnificationPoint=_magnificationPoint;
- (id)initWithFrame:(struct CGRect)arg1;

@end

