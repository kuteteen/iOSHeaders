//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (PhotosUI)
+ (double)pu_springOscillationRootAtIndex:(long long)arg1 forMass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 initialVelocity:(double)arg5;
+ (void)pu_transitionWithView:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)pu_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)pu_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)pu_animateWithEnforcedDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_pu_animateWithDuration:(double)arg1 enforced:(_Bool)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (double)pu_layoutMarginWidthForCurrentScreenSize;
- (void)pu_removeAllGeometryAnimationsRecursively:(_Bool)arg1;
- (void)pu_setCenterAndBoundsForFrameRect:(struct CGRect)arg1;
- (id)_pu_ancestorSharedWithView:(id)arg1;
- (struct CGAffineTransform)pu_convertTransform:(struct CGAffineTransform)arg1 toView:(id)arg2;
- (struct CGAffineTransform)pu_convertTransform:(struct CGAffineTransform)arg1 fromView:(id)arg2;
- (void)pu_addTransform:(struct CGAffineTransform)arg1;
@end

