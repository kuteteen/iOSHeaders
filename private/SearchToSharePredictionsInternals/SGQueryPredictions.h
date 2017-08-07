//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchToSharePredictionsInternals/SFFeedbackListener-Protocol.h>
#import <SearchToSharePredictionsInternals/SGQPAssetUpdateDelegate-Protocol.h>
#import <SearchToSharePredictionsInternals/SGQPSearchToShareInternalToolServerProtocol-Protocol.h>
#import <SearchToSharePredictionsInternals/SGQPSearchToShareServerProtocol-Protocol.h>

@class NSString, SGQPAssetManager, SGQPLanguageContext, SGQPMetricsTracker, SGQPSessionTracker, SGQPSqlStore;
@protocol PMLTrainingProtocol;

@interface SGQueryPredictions : NSObject <SGQPAssetUpdateDelegate, SFFeedbackListener, SGQPSearchToShareServerProtocol, SGQPSearchToShareInternalToolServerProtocol>
{
    SGQPAssetManager *_assetManager;
    SGQPSqlStore *_store;
    id <PMLTrainingProtocol> _pmlTraining;
    SGQPMetricsTracker *_metricsTracker;
    SGQPSessionTracker *_sessionTracker;
    SGQPLanguageContext *_noLanguageContext;
    SGQPLanguageContext *_primaryLanguageContext;
    unsigned long long _currentAssetVersion;
}

+ (id)sharedInstanceWithDirectory:(id)arg1;
+ (id)sharedInstanceWithDirectory:(id)arg1 errorHandler:(id)arg2;
@property unsigned long long currentAssetVersion; // @synthesize currentAssetVersion=_currentAssetVersion;
@property(retain) SGQPLanguageContext *primaryLanguageContext; // @synthesize primaryLanguageContext=_primaryLanguageContext;
@property(retain) SGQPLanguageContext *noLanguageContext; // @synthesize noLanguageContext=_noLanguageContext;
@property(retain) SGQPSessionTracker *sessionTracker; // @synthesize sessionTracker=_sessionTracker;
@property(retain) SGQPMetricsTracker *metricsTracker; // @synthesize metricsTracker=_metricsTracker;
- (void).cxx_destruct;
- (void)assetInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)addMessageToConversation:(id)arg1 withContent:(id)arg2 isSent:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendCustomFeedback:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didEngageResult:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didEngageSuggestion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didEndSearch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didStartSearch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)searchViewDidDisappear:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)searchViewDidAppear:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)queryPredictionsForConversation:(id)arg1 count:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)rankedCategoriesForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryPredictionsFeedbackReportForConversation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryPredictionsForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteMessagesForConversation:(id)arg1;
- (void)deleteMessagesWithUniqueIdentifiers:(id)arg1;
- (void)trimMessages;
- (void)storeMessageWithUid:(id)arg1 conversationId:(id)arg2 content:(id)arg3 createdAt:(id)arg4 senderIsAccountOwner:(_Bool)arg5;
- (id)currentMetricsTrackerForTesting;
- (void)searchViewDidDisappear:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (id)queryPredictionsFeedbackReportForConversation:(id)arg1;
- (id)rankedCategoriesForConversation:(id)arg1 limit:(unsigned long long)arg2;
- (id)predictionsForConversation:(id)arg1 limit:(unsigned long long)arg2;
- (id)languageContextForMessages:(id)arg1;
- (void)primaryAssetUpdated:(id)arg1;
- (id)initWithStore:(id)arg1 training:(id)arg2;
- (id)initWithAssetManagerAndStore:(id)arg1 training:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

