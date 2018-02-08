//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDeflatedFeedGroup, FCFeedGroup, FCFeedViewport, FCFeedViewportBookmark, FCFeedViewportPersistenceGap;

@interface FCFeedViewportExpandPersistenceGapOperation : FCOperation
{
    _Bool _cachedOnly;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedViewport *_viewport;
    FCFeedViewportPersistenceGap *_gap;
    FCFeedViewportBookmark *_bookmark;
    unsigned long long _gapExpansionDirection;
    long long _gapExpansionPolicy;
    CDUnknownBlockType _expandGapCompletionHandler;
    unsigned long long _indexOfGroupToInflate;
    FCDeflatedFeedGroup *_groupToInflate;
    FCFeedGroup *_inflatedGroup;
}

@property(retain, nonatomic) FCFeedGroup *inflatedGroup; // @synthesize inflatedGroup=_inflatedGroup;
@property(retain, nonatomic) FCDeflatedFeedGroup *groupToInflate; // @synthesize groupToInflate=_groupToInflate;
@property(nonatomic) unsigned long long indexOfGroupToInflate; // @synthesize indexOfGroupToInflate=_indexOfGroupToInflate;
@property(copy, nonatomic) CDUnknownBlockType expandGapCompletionHandler; // @synthesize expandGapCompletionHandler=_expandGapCompletionHandler;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(nonatomic) long long gapExpansionPolicy; // @synthesize gapExpansionPolicy=_gapExpansionPolicy;
@property(nonatomic) unsigned long long gapExpansionDirection; // @synthesize gapExpansionDirection=_gapExpansionDirection;
@property(copy, nonatomic) FCFeedViewportBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(copy, nonatomic) FCFeedViewportPersistenceGap *gap; // @synthesize gap=_gap;
@property(retain, nonatomic) FCFeedViewport *viewport; // @synthesize viewport=_viewport;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

