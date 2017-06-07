//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIMotionEffect.h>

@class UIInterpolatingMotionEffect, UIMotionEffectGroup, _UITiltMotionEffect;

@interface _UIParallaxMotionEffect : UIMotionEffect
{
    UIMotionEffectGroup *_group;
    struct UIOffset _slideMagnitude;
    UIInterpolatingMotionEffect *_horizontalSlideEffect;
    UIInterpolatingMotionEffect *_verticalSlideEffect;
    _UITiltMotionEffect *_tiltEffect;
}

@property(nonatomic) struct UIOffset slideMagnitude; // @synthesize slideMagnitude=_slideMagnitude;
- (void).cxx_destruct;
@property(nonatomic) double rotatingSphereRadius;
@property(nonatomic) double maximumVerticalTiltAngle;
@property(nonatomic) double maximumHorizontalTiltAngle;
- (void)_activateTiltEffectIfNecessary;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (void)_updateGroupMotionEffect;
@property(nonatomic) double verticalSlideAccelerationBoostFactor;
@property(nonatomic) double horizontalSlideAccelerationBoostFactor;
- (void)_updateSlideEffectsWithCurrentSlideMagnitude;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

