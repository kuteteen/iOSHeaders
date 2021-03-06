//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTopStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
}

- (id)_defaultBackgroundGradient;
- (_Bool)hasSeenAllPreviousArticleIDs:(id)arg1;
- (id)headlinesLogFromHeadlines:(id)arg1 includeScore:(_Bool)arg2;
- (id)_filterHeadlines:(id)arg1 withArticleMetadata:(id)arg2;
- (void)_fetchHeadlinesForArticleIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_personalizedFeedTransformationWithLimit:(unsigned long long)arg1 otherArticleIDs:(id)arg2 preselectedArticles:(id)arg3;
- (id)_feedTransformationWithOtherArticleIDs:(id)arg1;
- (void)_selectHeadlinesFromMandatory:(id)arg1 optional:(id)arg2 articleMetadataByArticleID:(id)arg3 cursor:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)performOperation;
- (void)_buildGroupWithCatchUpOperation:(id)arg1;

@end

