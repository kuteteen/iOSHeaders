//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSHashTable, NSString;

@interface FBSceneDeactivationBand : NSObject <BSDescriptionProviding>
{
    double _level;
    NSHashTable *_assertions;
}

+ (id)bandWithSceneLevel:(double)arg1;
@property(readonly, nonatomic) double level; // @synthesize level=_level;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (unsigned long long)deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2;
- (void)removeAssertion:(id)arg1;
- (void)addAssertion:(id)arg1;
@property(readonly, nonatomic) unsigned long long assertionCount;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithSceneLevel:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

