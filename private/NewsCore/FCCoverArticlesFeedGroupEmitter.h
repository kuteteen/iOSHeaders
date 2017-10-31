//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCFeedGroupEmitting.h"

@class NSString;

@interface FCCoverArticlesFeedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
    unsigned long long _minPrecedingTopicGroups;
}

@property(nonatomic) unsigned long long minPrecedingTopicGroups; // @synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups;
@property(readonly, nonatomic) long long requiredForYouContentTypes;
@property(readonly, nonatomic) _Bool emitsSingletonGroups;
- (id)backingChannelTagIDWithAppConfig:(id)arg1;
@property(readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
- (_Bool)canEmitGroupsWithType:(long long)arg1;
- (_Bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (_Bool)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (id)initWithMinPrecedingTopicGroups:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRequiredByFollowingEmitters;
@property(readonly) Class superclass;

@end

