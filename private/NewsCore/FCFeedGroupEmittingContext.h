//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCCloudContext, FCDateRange, FCFeedDescriptor, FCFeedEdition, FCFeedRefreshSession, FCForYouCatchUpOperation, NSArray, NSDate, NSHashTable, NSSet;

@interface FCFeedGroupEmittingContext : NSObject
{
    _Bool _isTopOfPage;
    _Bool _isFirstPageInRefreshSession;
    _Bool _preferSpeedOverQuality;
    _Bool _isOffline;
    FCForYouCatchUpOperation *_forYouCatchUpOperation;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_cloudContext;
    id <FCFeedPersonalizing> _personalizer;
    FCDateRange *_refreshDateRange;
    FCDateRange *_pageDateRange;
    FCFeedEdition *_edition;
    NSDate *_editionKeyDate;
    FCFeedDescriptor *_feedDescriptor;
    unsigned long long _desiredHeadlineCount;
    NSArray *_precedingGroups;
    NSArray *_pendingGroups;
    NSArray *_followingGroups;
    NSArray *_pendingGroupsFromOtherSessions;
    NSHashTable *_groupsFromPage;
    FCFeedRefreshSession *_refreshSession;
    FCFeedEdition *_followingEdition;
    NSArray *_emitters;
    NSArray *_remainingEmitters;
    NSSet *_articleIDs;
    NSSet *_clusterIDs;
}

@property(readonly, copy, nonatomic) NSSet *clusterIDs; // @synthesize clusterIDs=_clusterIDs;
@property(readonly, copy, nonatomic) NSSet *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(retain, nonatomic) NSArray *remainingEmitters; // @synthesize remainingEmitters=_remainingEmitters;
@property(retain, nonatomic) NSArray *emitters; // @synthesize emitters=_emitters;
@property(retain, nonatomic) FCFeedEdition *followingEdition; // @synthesize followingEdition=_followingEdition;
@property(retain, nonatomic) FCFeedRefreshSession *refreshSession; // @synthesize refreshSession=_refreshSession;
@property(readonly, nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(retain, nonatomic) NSHashTable *groupsFromPage; // @synthesize groupsFromPage=_groupsFromPage;
@property(readonly, copy, nonatomic) NSArray *pendingGroupsFromOtherSessions; // @synthesize pendingGroupsFromOtherSessions=_pendingGroupsFromOtherSessions;
@property(readonly, copy, nonatomic) NSArray *followingGroups; // @synthesize followingGroups=_followingGroups;
@property(readonly, copy, nonatomic) NSArray *pendingGroups; // @synthesize pendingGroups=_pendingGroups;
@property(readonly, copy, nonatomic) NSArray *precedingGroups; // @synthesize precedingGroups=_precedingGroups;
@property(readonly, nonatomic) _Bool preferSpeedOverQuality; // @synthesize preferSpeedOverQuality=_preferSpeedOverQuality;
@property(readonly, nonatomic) unsigned long long desiredHeadlineCount; // @synthesize desiredHeadlineCount=_desiredHeadlineCount;
@property(readonly, copy, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property(readonly, nonatomic) NSDate *editionKeyDate; // @synthesize editionKeyDate=_editionKeyDate;
@property(readonly, copy, nonatomic) FCFeedEdition *edition; // @synthesize edition=_edition;
@property(readonly, nonatomic) _Bool isFirstPageInRefreshSession; // @synthesize isFirstPageInRefreshSession=_isFirstPageInRefreshSession;
@property(readonly, nonatomic) _Bool isTopOfPage; // @synthesize isTopOfPage=_isTopOfPage;
@property(readonly, copy, nonatomic) FCDateRange *pageDateRange; // @synthesize pageDateRange=_pageDateRange;
@property(readonly, nonatomic) FCDateRange *refreshDateRange; // @synthesize refreshDateRange=_refreshDateRange;
@property(readonly, nonatomic) id <FCFeedPersonalizing> personalizer; // @synthesize personalizer=_personalizer;
@property(readonly, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(readonly, copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)_filterTransformationWithFilterOptions:(long long)arg1 groupTypes:(id)arg2 includeArticlesFromGroupTypes:(_Bool)arg3;
@property(readonly, nonatomic) FCForYouCatchUpOperation *forYouCatchUpOperation; // @synthesize forYouCatchUpOperation=_forYouCatchUpOperation;
- (_Bool)isNewEdition;
- (id)articleIDsContainedByGroupType:(long long)arg1;
- (id)allArticleIDs;
- (id)filterTransformationWithFilterOptions:(long long)arg1 considerOutputFrom:(id)arg2;
- (id)filterTransformationWithFilterOptions:(long long)arg1 ignoringOutputFrom:(id)arg2;
- (id)filterTransformationWithFilterOptions:(long long)arg1 ignoringCurrentPageOutputFrom:(id)arg2;
- (id)filterTransformationWithFilterOptions:(long long)arg1 additionalArticleIDs:(id)arg2;
- (id)filterTransformationWithFilterOptions:(long long)arg1;
- (id)creationDateOfFollowingGroupWithType:(long long)arg1;
- (id)precedingNewFavoriteTagIDs;
- (_Bool)pageHasPrecedingGroupWithSourceIdentifier:(id)arg1;
- (_Bool)pageHasExhaustedGroupsWithTypes:(id)arg1;
- (_Bool)pageWillContainHeadlineCount:(unsigned long long)arg1 fromGroupTypes:(id)arg2;
- (_Bool)pageWillContainGroupWithType:(long long)arg1;
- (unsigned long long)countOfPrecedingAdjacentGroupsWithTypes:(id)arg1;
- (id)followingAdjacentHeadlinesFromGroupType:(long long)arg1;
- (id)precedingAdjacentHeadlinesFromGroupType:(long long)arg1;
@property(readonly, nonatomic) unsigned long long countOfArticlesInPrecedingGroup;
@property(readonly, nonatomic) long long precedingGroupType;
- (id)groupFromPageWithType:(long long)arg1;
- (id)copyWithRefreshSession:(id)arg1;
- (id)initWithCoreConfiguration:(id)arg1 cloudContext:(id)arg2 refreshSession:(id)arg3 refreshDateRange:(id)arg4 currentEdition:(id)arg5 followingEdition:(id)arg6 precedingGroups:(id)arg7 followingGroups:(id)arg8 pendingGroupsFromOtherSessions:(id)arg9 feedDescriptor:(id)arg10 emitters:(id)arg11 desiredHeadlineCount:(unsigned long long)arg12 preferSpeedOverQuality:(_Bool)arg13 forYouCatchUpOperation:(id)arg14;

@end

