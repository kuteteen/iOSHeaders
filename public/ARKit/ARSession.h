//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensorDelegate-Protocol.h>
#import <ARKit/ARTechniqueDelegate-Protocol.h>

@class ARFrame, ARSessionConfiguration, ARTechnique, CMMotionManager, NSArray, NSHashTable, NSMutableSet, NSString;
@protocol ARSessionDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARSession : NSObject <ARSensorDelegate, ARTechniqueDelegate>
{
    ARTechnique *_technique;
    ARFrame *_lastProcessedFrame;
    NSObject<OS_dispatch_semaphore> *_lastProcessedFrameSemaphore;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSMutableSet *_anchorsToAdd;
    NSMutableSet *_anchorsToRemove;
    _Bool _sessionOriginUpdated;
    NSHashTable *_observers;
    NSObject<OS_dispatch_semaphore> *_observersSemaphore;
    id _thermalStateObserver;
    long long _thermalState;
    CMMotionManager *_motionManger;
    id <ARSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    unsigned long long _state;
    ARSessionConfiguration *_configuration;
    NSArray *_availableSensors;
    unsigned long long _runningSensors;
    unsigned long long _pausedSensors;
    unsigned long long _powerUsage;
    // Error parsing type: {?="columns"[4]}, name: _sessionOriginTransform
}

@property(nonatomic) unsigned long long powerUsage; // @synthesize powerUsage=_powerUsage;
// Error parsing type for property sessionOriginTransform:
// Property attributes: T{?=[4]},N,V_sessionOriginTransform

@property(nonatomic) unsigned long long pausedSensors; // @synthesize pausedSensors=_pausedSensors;
@property(nonatomic) unsigned long long runningSensors; // @synthesize runningSensors=_runningSensors;
@property(retain, nonatomic) NSArray *availableSensors; // @synthesize availableSensors=_availableSensors;
@property(copy, nonatomic) ARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <ARSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sessionDidRemoveAnchors:(id)arg1;
- (void)_sessionDidUpdateAnchors:(id)arg1;
- (void)_sessionDidAddAnchors:(id)arg1;
- (void)_sessionDidFailWithError:(id)arg1;
- (void)_sessionCameraDidChangeTrackingState:(id)arg1;
- (void)_sessionDidUpdateFrame:(id)arg1;
- (void)sensorDidRestart:(id)arg1;
- (void)sensorDidPause:(id)arg1;
- (void)sensor:(id)arg1 didFailWithError:(id)arg2;
- (void)sensor:(id)arg1 didOutputSensorData:(id)arg2;
- (void)_stopAllSensors;
- (void)_stopSensorsWithDataTypes:(unsigned long long)arg1 keepingDataTypes:(unsigned long long)arg2;
- (void)_startSensorsWithDataTypes:(unsigned long long)arg1;
- (id)_imageSensorForConfiguration:(id)arg1 existingSensor:(id)arg2;
- (void)_updateSensorsWithConfiguration:(id)arg1;
- (void)_replaceOrAddSensor:(id)arg1;
- (void)_updateAnchorsForFrame:(id)arg1 resultDatas:(id)arg2 addedAnchors:(id)arg3 updatedAnchors:(id)arg4 removedAnchors:(id)arg5 worldOriginUpdated:(_Bool)arg6;
- (void)technique:(id)arg1 didFailWithError:(id)arg2;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;
- (void)_updateSessionStateWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (void)_updateSessionWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (void)_setTechnique:(id)arg1;
- (id)technique;
- (id)_getObservers;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_stateQueue;
- (void)_updatePowerUsage;
- (void)_updateThermalState:(id)arg1;
- (void)_endInterruption;
- (void)_interruptSession;
- (void)removeAnchor:(id)arg1;
- (void)addAnchor:(id)arg1;
- (void)pause;
- (void)runWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (void)runWithConfiguration:(id)arg1;
@property(readonly, copy, nonatomic) ARFrame *currentFrame;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
