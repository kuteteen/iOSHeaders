//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIVisualEffectDiffable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectViewEntry : NSObject <_UIVisualEffectDiffable>
{
    long long _requirements;
}

@property(nonatomic) long long requirements; // @synthesize requirements=_requirements;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (_Bool)isSameTypeOfEffect:(id)arg1;
- (_Bool)applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 toView:(id)arg3;
- (void)applyEffectAsRequested:(_Bool)arg1 toView:(id)arg2;
- (void)removeEffectFromView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)addEffectToView:(id)arg1;
- (_Bool)hasTransform;
- (_Bool)shouldManageCornerRadius;
- (_Bool)shouldAnimateProperty:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

