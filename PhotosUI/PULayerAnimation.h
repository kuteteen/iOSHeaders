//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAnimationGroup.h>

#import <PhotosUI/CAAnimationDelegate-Protocol.h>

@class CAAnimation, CALayer, NSString;

__attribute__((visibility("hidden")))
@interface PULayerAnimation : PUAnimationGroup <CAAnimationDelegate>
{
    float _speed;
    double _timeOffset;
    double _beginTime;
    _Bool _isAnimationRunning;
    CALayer *_layer;
    NSString *_key;
    CAAnimation *__animation;
}

@property(retain, nonatomic, setter=_setAnimation:) CAAnimation *_animation; // @synthesize _animation=__animation;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)_updateLayerAnimation;
- (void)finishImmediately;
- (void)setSpeed:(float)arg1 timeOffset:(double)arg2 beginTime:(double)arg3;
- (_Bool)isReadyToComplete;
- (id)initWithLayer:(id)arg1 key:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

