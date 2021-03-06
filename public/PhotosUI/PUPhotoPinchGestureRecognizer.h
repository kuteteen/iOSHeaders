//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPinchGestureRecognizer.h"

@class PUValueFilter;

__attribute__((visibility("hidden")))
@interface PUPhotoPinchGestureRecognizer : UIPinchGestureRecognizer
{
    struct CGPoint _initialTouchLocations[2];
    struct CGPoint _latestTouchLocations[2];
    _Bool _initialTouchLocationsSet;
    _Bool __touchesNeedUpdate;
    double _rotationHysteresisDegrees;
    PUValueFilter *__rotationFilter;
    struct CGRect _initialPinchRect;
}

@property(retain, nonatomic, setter=_setRotationFilter:) PUValueFilter *_rotationFilter; // @synthesize _rotationFilter=__rotationFilter;
@property(nonatomic, setter=_setTouchesNeedUpdate:) _Bool _touchesNeedUpdate; // @synthesize _touchesNeedUpdate=__touchesNeedUpdate;
@property(nonatomic) struct CGRect initialPinchRect; // @synthesize initialPinchRect=_initialPinchRect;
@property(nonatomic) double rotationHysteresisDegrees; // @synthesize rotationHysteresisDegrees=_rotationHysteresisDegrees;
- (void).cxx_destruct;
- (void)_updateIfNeeded;
- (double)adjustedScaleVelocityInView:(id)arg1;
- (double)adjustedRotationVelocityInView:(id)arg1;
- (struct CGPoint)adjustedTranslationVelocityInView:(id)arg1;
- (double)adjustedScaleInView:(id)arg1;
- (double)adjustedRotationInView:(id)arg1;
- (struct CGPoint)adjustedTranslationInView:(id)arg1;
- (struct CGPoint)adjustedInitialCenterInView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

