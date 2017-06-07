//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/_UIFocusEnginePanGestureRecognizerDelegate-Protocol.h>
#import <UIKit/_UIFocusFastScrollingRecognizerDelegate-Protocol.h>

@class CADisplayLink, CARInputDeviceTouchpad, CARSessionStatus, NSArray, NSString, NSTimer, UIMoveEvent, UIScrollView, UITapGestureRecognizer, UIView, _UIFocusEngineJoystickGestureRecognizer, _UIFocusEnginePanGestureRecognizer, _UIFocusFastScrollingRecognizer, _UIFocusMotionEffectsController, _UIFocusMovementInfo, _UIFocusPressGestureRecognizer;
@protocol _UIFocusEventRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusEventRecognizer : NSObject <UIGestureRecognizerDelegate, _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusFastScrollingRecognizerDelegate>
{
    _UIFocusEnginePanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _UIFocusPressGestureRecognizer *_selectGestureRecognizer;
    struct CGPoint _touchBeganPoint;
    struct CGPoint _lastKnownTouchPoint;
    struct CGVector _progressAccumulator;
    _UIFocusFastScrollingRecognizer *_fastScrollingRecognizer;
    struct CGPoint _firstMomentumTouchPoint;
    struct CGPoint _lastMomentumTouchPoint;
    struct CGPoint _momentumVelocity;
    double _momentumFriction;
    unsigned long long _focusUpdateCountSinceLastPanBegan;
    CADisplayLink *_momentumDisplayLink;
    NSArray *_remoteGestures;
    _UIFocusEngineJoystickGestureRecognizer *_joystickGestureRecognizer;
    NSTimer *_joystickModeExitTimer;
    NSTimer *_joystickModeRepeatTimer;
    double _previousJoystickFocusMovementTime;
    double _previousJoystickRegionEntryTime;
    unsigned long long _joystickRepeatingHeading;
    CADisplayLink *_joystickFocusDirectionDisplayLink;
    _UIFocusMovementInfo *_previousJoystickFocusMovementInfo;
    long long _joystickRepeatCount;
    UIScrollView *_lastScrolledScroll;
    double _lastEdgeScrollEdgeValue;
    unsigned long long _inputType;
    CARSessionStatus *_sessionStatus;
    CARInputDeviceTouchpad *_currentCarTouchpad;
    struct {
        unsigned int isEligibleToCrossSpeedBump:1;
        unsigned int isContinuingTouchWithMomentum:1;
        unsigned int isPerformingJoystickRollback:1;
        unsigned int isJoystickInRepeatMode:1;
        unsigned int isPendingJoystickRepeat:1;
        unsigned int isFastScrolling:1;
        unsigned int shouldApplyAcceleration:1;
    } _flags;
    _Bool _enabled;
    _Bool _supportsFastScrolling;
    UIView *_owningView;
    id <_UIFocusEventRecognizerDelegate> _delegate;
    UIView *_viewForTouchDeferredFocus;
    UIMoveEvent *_moveEvent;
    _UIFocusMotionEffectsController *_motionEffectsController;
}

@property(readonly, nonatomic, getter=_motionEffectsController) _UIFocusMotionEffectsController *motionEffectsController; // @synthesize motionEffectsController=_motionEffectsController;
@property(retain, nonatomic, getter=_moveEvent, setter=_setMoveEvent:) UIMoveEvent *moveEvent; // @synthesize moveEvent=_moveEvent;
@property(nonatomic) __weak UIView *viewForTouchDeferredFocus; // @synthesize viewForTouchDeferredFocus=_viewForTouchDeferredFocus;
@property(nonatomic) __weak id <_UIFocusEventRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportsFastScrolling; // @synthesize supportsFastScrolling=_supportsFastScrolling;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) __weak UIView *owningView; // @synthesize owningView=_owningView;
- (void).cxx_destruct;
- (void)_uiktest_handlePanGesture:(id)arg1;
- (id)_uiktest_panGestureRecognizer;
- (void)_uiktest_setPanGestureRecognizer:(id)arg1;
- (void)_sendGestureBeginNotification;
- (void)_fastScrollingEnded;
- (void)_fastScrollingBeganInScrollView:(id)arg1;
- (void)fastScrollingRecognizer:(id)arg1 didRecognizeFastScrollingRequest:(id)arg2;
- (void)_createFastScrollingRecognizerIfNeeded;
- (void)_setSupportsFastScrolling:(_Bool)arg1;
- (void)_sendMomentumEndNotificationsAndAnimateRollback:(_Bool)arg1;
- (void)_stopMomentumAndPerformRollback;
- (_Bool)_shouldPerformFocusUpdateWithCurrentMomentumStatus;
- (void)_momentumHeartbeat:(id)arg1;
- (void)_continueTouchWithMomentum;
- (double)_frictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2 slope:(double)arg3 shortDistance:(double)arg4 longDistance:(double)arg5;
- (double)_verticalFrictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2;
- (double)_horizontalFrictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2;
- (void)_recordMomentumForPoint:(struct CGPoint)arg1;
- (void)_resetMomentum;
- (void)_resetMotionEffects;
- (void)_resetJoystick;
- (void)_joystickDisplayLinkHeartbeat:(id)arg1;
- (unsigned long long)_headingForJoystickPosition:(struct CGPoint)arg1 usingMinimumRadius:(double)arg2;
- (struct CGVector)_joystickVelocityForHeading:(unsigned long long)arg1;
- (id)_focusMovementForJoystickPosition:(struct CGPoint)arg1 usingMinimumRadius:(double)arg2 focusMovementStyle:(long long)arg3;
- (_Bool)_joystickFocusMovement:(id)arg1 shouldBeConsideredEqualToFocusMovement:(id)arg2;
- (double)_joystickRepeatDurationForTimeInMovementZone:(double)arg1;
- (void)_joystickPerformRepeat:(id)arg1;
- (_Bool)_joystickAttemptFocusMovementWithRequest:(id)arg1;
- (void)_handleJoystickTiltMode:(id)arg1;
- (void)_handleJoystickRepeatMode:(id)arg1;
- (void)_exitJoystickModeForReal:(id)arg1;
- (void)_joystickGestureEnded:(id)arg1;
- (void)_joystickGestureUpdated:(id)arg1;
- (void)_joystickGestureBegan:(id)arg1;
- (void)_resetPanGestureState;
- (void)_resetProgressAccumulatorWithRequest:(id)arg1;
- (void)_panGestureEnd:(id)arg1;
- (void)_updatePanLocation:(struct CGPoint)arg1 reportedVelocity:(struct CGVector)arg2;
- (void)_panGestureStart:(id)arg1;
- (_Bool)focusEnginePanGestureRecognizerShouldRecognizeImmediately:(id)arg1;
- (_Bool)_shouldAcceptInputType:(unsigned long long)arg1;
- (struct CGSize)_touchSensitivityForItem:(id)arg1;
- (int)_touchRegionForDigitizerLocation:(struct CGPoint)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleJoystickGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleButtonGesture:(id)arg1;
- (void)_handleSelectGesture:(id)arg1;
- (_Bool)_moveInDirection:(unsigned long long)arg1;
- (_Bool)_moveWithEvent:(id)arg1;
- (_Bool)_didRecognizeFocusMovementRequest:(id)arg1;
- (id)_focusMovementSystem;
- (void)_focusSystemEnabledStateDidChange:(id)arg1;
- (void)_removeGestureRecognizers;
- (void)_addGestureRecognizers;
- (void)reset;
- (void)dealloc;
- (id)initWithOwningView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

