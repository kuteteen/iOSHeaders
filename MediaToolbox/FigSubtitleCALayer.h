//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleCALayer : FigBaseCALayer
{
    struct OpaqueFigSubtitleCALayerInternal *layerInternal;
}

+ (id)defaultActionForKey:(id)arg1;
- (void)handleNeedsLayoutNotification;
- (void)removeAnimationsForKey:(id)arg1;
- (void)addAnimations:(id)arg1 forKey:(id)arg2;
- (void)_addPositionAnimation:(id)arg1 forKey:(id)arg2;
- (void)_addBoundsAnimation:(id)arg1 forKey:(id)arg2;
- (id)subtitleLayerDisplay;
@property(nonatomic, getter=isOverscanSubtitleSupportEnabled) _Bool overscanSubtitleSupportEnabled;
- (void)endUpdate;
- (void)beginUpdate;
- (void)clear;
- (void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1;
- (void)setSubtitleGravityNonObscuring:(unsigned char)arg1;
- (void)setVideosize:(struct CGSize)arg1;
- (void)setViewport:(struct CGRect)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (void)dealloc;
- (void)finalize;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void)setPlayer:(struct OpaqueFigPlayer *)arg1;
- (id)actionForKey:(id)arg1;

@end

