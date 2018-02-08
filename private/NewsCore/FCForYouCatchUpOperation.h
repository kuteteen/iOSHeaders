//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCoverArticlesOperation, FCEditorialOperation, FCFeedPersonalizedArticles, FCMyArticlesOperation, FCSpecialEventsOperation, FCTopStoriesOperation, FCTopStoriesOperationResult, FCTrendingOperation, FCVideoArticlesOperation, FCVideoArticlesOperationResult, NFMutexLock, NSArray, NSDictionary, NSError, NSHashTable, NSOperationQueue;

@interface FCForYouCatchUpOperation : FCOperation
{
    FCMyArticlesOperation *_myArticlesOperation;
    FCSpecialEventsOperation *_specialEventsOperation;
    FCTopStoriesOperation *_topStoriesOperation;
    FCTrendingOperation *_trendingOperation;
    FCCoverArticlesOperation *_coverArticlesOperation;
    FCEditorialOperation *_editorialOperation;
    FCVideoArticlesOperation *_videoArticlesOperation;
    NSOperationQueue *_operationQueue;
    NSHashTable *_conditionWaiters;
    NFMutexLock *_conditionWaitersLock;
}

+ (id)sharedCatchUpOperationForEdition:(id)arg1 contentTypes:(long long)arg2 configuration:(id)arg3 context:(id)arg4;
@property(retain, nonatomic) NFMutexLock *conditionWaitersLock; // @synthesize conditionWaitersLock=_conditionWaitersLock;
@property(retain, nonatomic) NSHashTable *conditionWaiters; // @synthesize conditionWaiters=_conditionWaiters;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) FCVideoArticlesOperation *videoArticlesOperation; // @synthesize videoArticlesOperation=_videoArticlesOperation;
@property(retain, nonatomic) FCEditorialOperation *editorialOperation; // @synthesize editorialOperation=_editorialOperation;
@property(retain, nonatomic) FCCoverArticlesOperation *coverArticlesOperation; // @synthesize coverArticlesOperation=_coverArticlesOperation;
@property(retain, nonatomic) FCTrendingOperation *trendingOperation; // @synthesize trendingOperation=_trendingOperation;
@property(retain, nonatomic) FCTopStoriesOperation *topStoriesOperation; // @synthesize topStoriesOperation=_topStoriesOperation;
@property(retain, nonatomic) FCSpecialEventsOperation *specialEventsOperation; // @synthesize specialEventsOperation=_specialEventsOperation;
@property(retain, nonatomic) FCMyArticlesOperation *myArticlesOperation; // @synthesize myArticlesOperation=_myArticlesOperation;
- (void).cxx_destruct;
- (void)_serviceConditionWaiters;
- (void)_addConditionWaiter:(id)arg1;
@property(readonly, copy) NSDictionary *feedContextByFeedID;
- (id)catchUpErrorForContentTypes:(long long)arg1;
@property(readonly, copy, nonatomic) NSError *catchUpError;
@property(readonly, copy, nonatomic) FCVideoArticlesOperationResult *moreVideosResult;
@property(readonly, copy, nonatomic) FCVideoArticlesOperationResult *topVideosResult;
- (void)enumerateEditorialSectionsByRecencyAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)orphanedEditorialHeadlinesAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) FCFeedPersonalizedArticles *nonEditorialPersonalizedArticles;
@property(readonly, copy, nonatomic) NSArray *nonEditorialFeedItems;
- (id)sortedNonEditorialFeedItemsAfterTransformation:(id)arg1;
- (id)allNonEditorialFeedItemsAfterTransformation:(id)arg1;
- (id)allFeedItemsAfterTransformation:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *supplementalCoverArticleHeadlines;
@property(readonly, copy, nonatomic) NSArray *coverArticleHeadlines;
@property(readonly, copy, nonatomic) NSArray *trendingHeadlines;
@property(readonly, copy, nonatomic) FCTopStoriesOperationResult *topStoriesResult;
@property(readonly, copy, nonatomic) id <FCChannelProviding> topStoriesChannel;
@property(readonly, copy, nonatomic) NSArray *specialEventHeadlines;
@property(readonly, copy, nonatomic) NSArray *breakingNewsHeadlines;
- (id)waiterForCondition:(id)arg1;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (id)initWithContext:(id)arg1 configuration:(id)arg2 dateRange:(id)arg3 contentTypes:(long long)arg4 background:(_Bool)arg5;

@end

