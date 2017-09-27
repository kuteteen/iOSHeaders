//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarAnimation : NSObject <NSCopying>
{
    _Bool _delaysAnimatingItems;
    _Bool _delaysDependentItems;
    _Bool _enabled;
    NSString *_displayItemIdentifier;
    NSString *_identifier;
    NSString *_exclusivityGroupIdentifier;
    long long _type;
    CDUnknownBlockType _prepareBlock;
    NSSet *_delayedItemIdentifiers;
    NSSet *_delayedDisplayItemPlacements;
    long long _priority;
    NSMutableArray *_subAnimations;
    _UIStatusBarAnimation *_parentAnimation;
    CDUnknownBlockType _animationBlock;
    NSMutableArray *_completionHandlers;
}

+ (void)_addAnimations:(id)arg1 toDispatchGroup:(id)arg2;
+ (void)_addAnimations:(id)arg1 toPreparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 visitedDisplayItemIdentifiers:(id)arg4;
+ (void)prepareAnimations:(id)arg1 forStatusBar:(id)arg2;
+ (id)animationWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(copy, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property(nonatomic) __weak _UIStatusBarAnimation *parentAnimation; // @synthesize parentAnimation=_parentAnimation;
@property(retain, nonatomic) NSMutableArray *subAnimations; // @synthesize subAnimations=_subAnimations;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool delaysDependentItems; // @synthesize delaysDependentItems=_delaysDependentItems;
@property(nonatomic) _Bool delaysAnimatingItems; // @synthesize delaysAnimatingItems=_delaysAnimatingItems;
@property(copy, nonatomic) NSSet *delayedDisplayItemPlacements; // @synthesize delayedDisplayItemPlacements=_delayedDisplayItemPlacements;
@property(copy, nonatomic) NSSet *delayedItemIdentifiers; // @synthesize delayedItemIdentifiers=_delayedItemIdentifiers;
@property(copy, nonatomic) CDUnknownBlockType prepareBlock; // @synthesize prepareBlock=_prepareBlock;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *exclusivityGroupIdentifier; // @synthesize exclusivityGroupIdentifier=_exclusivityGroupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *displayItemIdentifier; // @synthesize displayItemIdentifier=_displayItemIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)_dependentItemIdentifiersEnabledOnly:(_Bool)arg1;
@property(readonly, nonatomic) NSSet *effectiveDelayedItemIdentifiers;
- (void)addSubAnimation:(id)arg1 forDisplayItemWithIdentifier:(id)arg2;
- (void)cancel;
- (void)performForStatusBar:(id)arg1;
- (void)_prepareForStatusBar:(id)arg1 preparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3;
- (void)addTotalCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

