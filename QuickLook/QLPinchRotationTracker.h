//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLDismissGestureTracking-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLPinchRotationTracker : NSObject <QLDismissGestureTracking>
{
    double _trackedScale;
    double _rotation;
    double _previousScale;
    double _targetZoom;
    struct CGRect _initialBounds;
    struct CGPoint _initialTrackingCenter;
    struct CGPoint _initialGestureLocation;
    struct CGPoint _location;
    struct CGPoint _anchorLocationOffset;
    struct CGAffineTransform _trackedTransform;
    _Bool _shouldFinishDismissal;
    double _dismissalProgress;
    double _minimumZoomForDismissal;
    struct CGPoint _anchorPoint;
    struct CGPoint _trackedCenter;
}

@property(nonatomic) double minimumZoomForDismissal; // @synthesize minimumZoomForDismissal=_minimumZoomForDismissal;
@property(nonatomic) double targetZoom; // @synthesize targetZoom=_targetZoom;
@property(readonly, nonatomic) _Bool shouldFinishDismissal; // @synthesize shouldFinishDismissal=_shouldFinishDismissal;
@property(readonly, nonatomic) double dismissalProgress; // @synthesize dismissalProgress=_dismissalProgress;
@property(readonly, nonatomic) struct CGAffineTransform trackedTransform; // @synthesize trackedTransform=_trackedTransform;
@property(readonly, nonatomic) struct CGPoint trackedCenter; // @synthesize trackedCenter=_trackedCenter;
@property(readonly, nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
- (void)update;
@property(readonly, nonatomic) double finalAnimationSpringDamping;
@property(readonly, nonatomic) double finalAnimationDuration;
@property(readonly, nonatomic) struct CGRect trackedBounds;
@property(readonly, nonatomic) struct _QLDismissGestureTrackingVelocity trackedVelocity;
- (void)trackRotation:(double)arg1;
- (void)trackScale:(double)arg1;
- (void)trackGestureLocation:(struct CGPoint)arg1;
- (void)startTrackingCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 withInitialGestureLocation:(struct CGPoint)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

