//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PKMotionManagerClientProtocol.h"
#import "SCNSceneRendererDelegate.h"

@class NSString, SCNMaterial, SCNView;

@interface PK3DCardView : UIView <PKMotionManagerClientProtocol, SCNSceneRendererDelegate>
{
    SCNView *_sceneView;
    SCNMaterial *_cardMaterial;
    int _design;
    // Error parsing type: , name: _lastRollPitch
    _Bool _renderedOnce;
    id <PK3DLiveCardViewDelegate> _delegate;
}

+ (id)_sharedMotionManager;
@property(nonatomic) __weak id <PK3DLiveCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)startMotionUpdates;
- (void)stopMotionUpdates;
- (void)setMotionEnabled:(_Bool)arg1;
- (void)setRollPitch: /* Error: Ran out of types for this method. */;
- (void)layoutSubviews;
- (void)renderSceneWithTextures:(id)arg1 shaders:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

