//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNAnimationRegistry, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface KNAnimationRegistryWithFallbacks : NSObject
{
    KNAnimationRegistry *_registry;
    NSMutableDictionary *_fallbacks;
}

- (void).cxx_destruct;
- (void)registerFallbackEffectIdentifer:(id)arg1 forEffectIdentifer:(id)arg2;
- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2;
- (id)init;

@end

