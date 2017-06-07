//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UISettingsKeyObserver-Protocol.h>

@class NSString, UIDelayedAction, _UIScreenEdgePanRecognizerSettings;
@protocol _UIScreenEdgePanRecognizerDelegate;

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver>
{
    struct CGRect _screenBounds;
    _Bool _shouldUseGrapeFlags;
    _Bool _hasRecordedData;
    _Bool _hasDoneInitialBackProjectionTest;
    double _gestureRestrictionFactor;
    struct CGPoint _initialTouchLocation;
    double _initialTouchTimestamp;
    long long _initialInterfaceOrientation;
    unsigned long long _touchedRegion;
    UIDelayedAction *_recognitionTimer;
    struct CGPoint _lastTouchLocation;
    double _lastTouchTimestamp;
    long long _type;
    _Bool _requiresLongPress;
    int _notifyToken;
    _Bool _simulatorWantsEdgeSwipes;
    _Bool _requiresFlatThumb;
    _Bool _recognizeImmediatelyFromEdgeLocked;
    _Bool _recognizeAlongEdge;
    unsigned long long _targetEdges;
    long long _state;
    unsigned long long _recognizedRegion;
    id <_UIScreenEdgePanRecognizerDelegate> _delegate;
    _UIScreenEdgePanRecognizerSettings *_settings;
}

+ (_Bool)_edgeSwipeNavigationGestureEnabled;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerSettings *settings; // @synthesize settings=_settings;
@property id <_UIScreenEdgePanRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long recognizedRegion; // @synthesize recognizedRegion=_recognizedRegion;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool recognizeAlongEdge; // @synthesize recognizeAlongEdge=_recognizeAlongEdge;
@property(nonatomic) _Bool recognizeImmediatelyFromEdgeLocked; // @synthesize recognizeImmediatelyFromEdgeLocked=_recognizeImmediatelyFromEdgeLocked;
@property(nonatomic) _Bool requiresFlatThumb; // @synthesize requiresFlatThumb=_requiresFlatThumb;
@property(nonatomic) unsigned long long targetEdges; // @synthesize targetEdges=_targetEdges;
@property(nonatomic) struct CGRect screenBounds; // @synthesize screenBounds=_screenBounds;
@property(readonly, nonatomic) struct CGPoint _lastTouchLocation; // @synthesize _lastTouchLocation;
@property(nonatomic) _Bool shouldUseGrapeFlags; // @synthesize shouldUseGrapeFlags=_shouldUseGrapeFlags;
- (void).cxx_destruct;
- (unsigned long long)_targetEdges;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_createOrDestoryAnalysisWindowIfNeeded;
- (void)_idleTimerElapsed:(id)arg1;
- (void)_longPressTimerElapsed:(id)arg1;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4 forceState:(long long)arg5;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4 forceState:(long long)arg5;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4 forceState:(long long)arg5;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic, getter=isRequiringLongPress) _Bool requiringLongPress;
- (long long)_type;
- (void)_setState:(long long)arg1;
@property(readonly, nonatomic) _Bool useGrapeFlags;
- (void)reset;
- (void)dealloc;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

