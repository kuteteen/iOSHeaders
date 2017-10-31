//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFFeedbackListener.h"
#import "SFResourceLoader.h"

@class GEOSearchFoundationFeedbackListener, NSFileManager, NSString, NSXPCConnection, PARBag, PARRanker, PARSearchClient, PARSessionConfiguration;

@interface PARSession : NSObject <SFFeedbackListener, SFResourceLoader>
{
    NSFileManager *_fileManager;
    GEOSearchFoundationFeedbackListener *_mapsListener;
    PARBag *_bag;
    PARSearchClient *_client;
    id <PARSessionDelegate> _delegate;
    PARRanker *_ranker;
    PARSessionConfiguration *_configuration;
}

+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 startImmediately:(_Bool)arg3;
+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sharedSession;
+ (id)sharedPARSessionWithConfiguration:(id)arg1;
@property(retain, nonatomic) PARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) PARRanker *ranker; // @synthesize ranker=_ranker;
@property __weak id <PARSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PARSearchClient *client; // @synthesize client=_client;
@property(retain) PARBag *bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
- (void)sendCBAEngagementFeedback:(id)arg1 query:(unsigned long long)arg2;
- (void)reportFeedback:(id)arg1 queryId:(unsigned long long)arg2;
- (void)reportEvent:(id)arg1;
- (void)didGradeLookupHintRelevancy:(id)arg1;
- (void)didGradeResultRelevancy:(id)arg1;
- (void)didGoToSearch:(id)arg1;
- (void)didGoToSite:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didAppendLateSections:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)captureMapsResultsDisplayedFeedback:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (void)cardViewDidAppear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (_Bool)loadMoreResults:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)loadCard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)loadImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)enabledStatus;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadTask:(id)arg1;
- (id)taskWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)awaitBag;
@property(readonly, nonatomic) NSXPCConnection *connection;
- (void)start;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2 delegate:(id)arg3 startImmediately:(_Bool)arg4;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

