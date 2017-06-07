//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIMotionEffectGroup, UIView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject
{
    UIMotionEffectGroup *_installedHighlightedActionMotionEffectsGroup;
    _Bool _highlighted;
    _Bool _pressed;
    UIView *_highlightTransformTargetView;
}

@property(nonatomic) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) __weak UIView *highlightTransformTargetView; // @synthesize highlightTransformTargetView=_highlightTransformTargetView;
- (void).cxx_destruct;
- (id)_newMotionEffectsGroupForHighlightedAction;
- (void)_removeMotionEffects;
- (void)_insertMotionEffects;
- (struct CATransform3D)_enlargedTransformForSize:(struct CGSize)arg1 pressed:(_Bool)arg2;
- (void)_applyHighlightTransform;
- (id)initWithHighlightTransformTargetView:(id)arg1;

@end

