//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCNView.h"

#import "ARInternalSessionObserver.h"
#import "_SCNSceneRendererDelegate.h"

@class ARPointCloud, ARSession, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString, SCNNode, SCNScene, UIView;

@interface ARSCNView : SCNView <ARInternalSessionObserver, _SCNSceneRendererDelegate>
{
    ARSession *_session;
    double _lastFrameTimestamp;
    id <SCNCaptureDeviceOutputConsumer> _captureDeviceOutputConsumer;
    SCNNode *_lightNode;
    SCNNode *_cameraNode;
    NSMutableDictionary *_nodesByAnchorIdentifier;
    NSMutableArray *_addedAnchors;
    NSMutableArray *_updatedAnchors;
    NSMutableArray *_removedAnchors;
    SCNNode *_worldOriginNode;
    SCNNode *_featurePointNode;
    ARPointCloud *_currentlyVisibleDebugPointerCloud;
    NSObject<OS_dispatch_semaphore> *_anchorsSemaphore;
    id _originalBackgroundContents;
    unsigned long long _arDebugOptions;
    long long _interfaceOrientation;
    long long _lastInterfaceOrientation;
    struct CGSize _viewportSize;
    UIView *_rotationSnapshot;
    _Bool _automaticallyUpdatesLighting;
    _Bool _shouldRestrictFrameRate;
    _Bool _drawsCameraImage;
    long long _targetFramesPerSecond;
    long long _developerPreferredFramesPerSecond;
    long long _frameToRemoveRotationSnapshotOn;
}

@property long long frameToRemoveRotationSnapshotOn; // @synthesize frameToRemoveRotationSnapshotOn=_frameToRemoveRotationSnapshotOn;
@property _Bool drawsCameraImage; // @synthesize drawsCameraImage=_drawsCameraImage;
@property long long developerPreferredFramesPerSecond; // @synthesize developerPreferredFramesPerSecond=_developerPreferredFramesPerSecond;
@property long long targetFramesPerSecond; // @synthesize targetFramesPerSecond=_targetFramesPerSecond;
@property _Bool shouldRestrictFrameRate; // @synthesize shouldRestrictFrameRate=_shouldRestrictFrameRate;
@property(nonatomic) _Bool automaticallyUpdatesLighting; // @synthesize automaticallyUpdatesLighting=_automaticallyUpdatesLighting;
- (void).cxx_destruct;
- (void)cleanupLingeringRotationState;
- (void)windowDidRotateNotification:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowWillRotateNotification:(id)arg1;
- (void)didMoveToWindow;
- (void)_updatePreferredFramesPerSecond;
- (void)_updateFramesPerSecondWithTarget:(long long)arg1 shouldRestrictFrameRate:(_Bool)arg2;
@property(nonatomic) long long actualPreferredFramesPerSecond;
- (void)_updateDebugVisualization:(id)arg1;
- (void)_removeAnchors;
- (void)_updateNode:(id)arg1 forAnchor:(id)arg2;
- (void)_updateAnchors;
- (void)_addAnchors;
- (void)_updateLighting:(id)arg1;
- (void)_updateCamera:(id)arg1;
- (void)_forceUpdateCamera;
- (void)_renderCapturedPixelBuffer:(struct __CVBuffer *)arg1;
- (id)_hitTest:(struct CGPoint)arg1 frame:(id)arg2 types:(unsigned long long)arg3;
- (id)_anchorForNode:(id)arg1 inFrame:(id)arg2;
- (void)session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)_renderer:(id)arg1 updateAtTime:(double)arg2;
- (long long)preferredFramesPerSecond;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (unsigned long long)debugOptions;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setPointOfView:(id)arg1;
@property(retain, nonatomic) SCNScene *scene; // @dynamic scene;
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;
- (id)nodeForAnchor:(id)arg1;
- (id)anchorForNode:(id)arg1;
@property(retain, nonatomic) ARSession *session;
@property(readonly, copy) NSString *description;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <ARSCNViewDelegate> delegate; // @dynamic delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

