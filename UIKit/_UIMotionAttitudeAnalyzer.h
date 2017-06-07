//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIMotionAnalyzer.h>

#import <UIKit/_UISettingsKeyObserver-Protocol.h>

@class NSString, UILabel, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIMotionAttitudeAnalyzer : _UIMotionAnalyzer <_UISettingsKeyObserver>
{
    double _smoothingDegree;
    double _referenceShiftSpeed;
    double _distanceMultiplier;
    _Bool _hasReferenceQuaternion;
    union _GLKQuaternion _referenceQuaternion;
    union _GLKQuaternion _absoluteQuaternion;
    double _lastUpdate;
    double _idleStartTime;
    struct UIOffset _idleStartOffset;
    double _jumpThreshold;
    double _idleLeeway;
    double _secondsBeforeIdle;
    double _lockValue;
    double _lockStrength;
    UIWindow *_diagnosticsWindow;
    UILabel *_idleIndicator;
    UIView *_horizontalLockIndicator;
    UIView *_verticalLockIndicator;
    _Bool _hasHistory;
    struct UIOffset _lastAppliedViewerOffset;
    union _GLKQuaternion _lastAppliedRelativeQuaternion;
    _Bool _isApplyingHysteresis;
    union _GLKQuaternion _relativeQuaternionOnHysteresisEntry;
}

- (void).cxx_destruct;
- (void)_tearDownDiagnosticsWindow;
- (void)_createDiagnosticsWindow;
- (void)_tearDownDirectionLockIndicators;
- (void)_createDirectionLockIndicators;
- (void)_tearDownIdleIndicator;
- (void)_createIdleIndicator;
- (void)_updateDirectionalLockIndicators;
- (void)_showIdleUI:(_Bool)arg1;
- (void)_updateSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)resetHysteresis;
- (void)updateHistory;
- (_Bool)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(struct UIOffset)arg1 wasSuspendingApplicationForHysteresis:(_Bool)arg2;
- (_Bool)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(_Bool)arg3 returningShouldToggleSlowUpdates:(_Bool *)arg4 logger:(id)arg5;
- (_Bool)_isIdleGivenTimestamp:(double)arg1;
- (void)_updateIdleStateForRawOffset:(struct UIOffset)arg1 timestamp:(double)arg2;
- (double)_directionLockStrength;
- (long long)_directionLockStatus;
- (void)_resetDirectionalLockWithViewerOffset:(struct UIOffset)arg1;
- (void)_shiftReferenceToYieldRelativeQuaternion:(union _GLKQuaternion)arg1;
- (union _GLKQuaternion)_relativeQuaternion;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
- (void)_updateReferenceAttitude:(union _GLKQuaternion)arg1 timestamp:(double)arg2;
- (struct UIOffset)_currentRawOffset:(union _GLKQuaternion)arg1;
- (void)_updateAcceleratedOutputRangeFixingOffset:(struct UIOffset)arg1;
- (void)_updateSmoothedOffsetForRawOffset:(struct UIOffset)arg1;
- (void)reset;
- (void)updateWithEvent:(id)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

