//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCFeedGroupEmitting.h"

@class FCReadingList, NSSet, NSString;

@interface FCSavedStoriesGroupEmitter : NSObject <FCFeedGroupEmitting>
{
    unsigned long long _minPrecedingTopicGroups;
    long long _desiredArticlesCount;
    FCReadingList *_readingList;
}

@property(retain, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(nonatomic) long long desiredArticlesCount; // @synthesize desiredArticlesCount=_desiredArticlesCount;
@property(nonatomic) unsigned long long minPrecedingTopicGroups; // @synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool emitsSingletonGroups;
- (id)backingChannelTagIDWithCoreConfiguration:(id)arg1;
@property(readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
@property(readonly, copy, nonatomic) NSSet *emittableGroupTypes;
- (_Bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (_Bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (id)initWithDesiredArticlesCount:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool emitsSingleRefreshSessionGroups;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRequiredByFollowingEmitters;
@property(readonly, nonatomic) long long requiredForYouContentTypes;
@property(readonly) Class superclass;

@end

