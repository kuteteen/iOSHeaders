//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/NSObject-Protocol.h>

@class CAAnimation, NSArray, NSString, SCNAnimationPlayer;
@protocol SCNAnimation;

@protocol SCNAnimatable <NSObject>
@property(readonly) NSArray *animationKeys;
- (_Bool)isAnimationForKeyPaused:(NSString *)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(NSString *)arg2;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (void)removeAnimationForKey:(NSString *)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(NSString *)arg1 blendOutDuration:(double)arg2;
- (SCNAnimationPlayer *)animationPlayerForKey:(NSString *)arg1;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimationPlayer:(SCNAnimationPlayer *)arg1 forKey:(NSString *)arg2;
- (void)addAnimation:(id <SCNAnimation>)arg1 forKey:(NSString *)arg2;
@end

