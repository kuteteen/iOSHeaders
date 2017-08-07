//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCFeedDatabase, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol FCContentContext;

@interface FCFeedRequestOperation : FCOperation
{
    id <FCContentContext> _context;
    FCFeedDatabase *_feedDatabase;
    NSArray *_feedRequests;
    unsigned long long _maxCount;
    long long _options;
    NSArray *_feedTransformations;
    unsigned long long _expectedNetworkEventCount;
    CDUnknownBlockType _requestCompletionHandler;
    CDUnknownBlockType _requestCompletionHandlerWithInterestToken;
    NSMutableArray *_mutableNetworkEvents;
    NSDictionary *_feedRequestsByFeedID;
    NSDictionary *_databaseLookupsByFeedID;
    NSMutableDictionary *_resultFeedResponses;
    NSMutableArray *_resultHeldArticleAndTagRecords;
}

+ (_Bool)_orderFeedTopKEnabled;
+ (id)feedRequestContentEnvironmentTokenWithContext:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *resultHeldArticleAndTagRecords; // @synthesize resultHeldArticleAndTagRecords=_resultHeldArticleAndTagRecords;
@property(retain, nonatomic) NSMutableDictionary *resultFeedResponses; // @synthesize resultFeedResponses=_resultFeedResponses;
@property(retain, nonatomic) NSDictionary *databaseLookupsByFeedID; // @synthesize databaseLookupsByFeedID=_databaseLookupsByFeedID;
@property(retain, nonatomic) NSDictionary *feedRequestsByFeedID; // @synthesize feedRequestsByFeedID=_feedRequestsByFeedID;
@property(retain, nonatomic) NSMutableArray *mutableNetworkEvents; // @synthesize mutableNetworkEvents=_mutableNetworkEvents;
@property(copy, nonatomic) CDUnknownBlockType requestCompletionHandlerWithInterestToken; // @synthesize requestCompletionHandlerWithInterestToken=_requestCompletionHandlerWithInterestToken;
@property(copy, nonatomic) CDUnknownBlockType requestCompletionHandler; // @synthesize requestCompletionHandler=_requestCompletionHandler;
@property(nonatomic) unsigned long long expectedNetworkEventCount; // @synthesize expectedNetworkEventCount=_expectedNetworkEventCount;
@property(copy, nonatomic) NSArray *feedTransformations; // @synthesize feedTransformations=_feedTransformations;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(copy, nonatomic) NSArray *feedRequests; // @synthesize feedRequests=_feedRequests;
@property(retain, nonatomic) FCFeedDatabase *feedDatabase; // @synthesize feedDatabase=_feedDatabase;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (unsigned long long)_orderFeedTopKFromBin:(long long)arg1 timeInterval:(double)arg2;
- (id)_orderFeedIDFromFeedID:(id)arg1;
- (id)_failureResponseForRequest:(id)arg1 error:(id)arg2;
- (void)_gatherAllOrderFeedResponsesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_gatherAllFeedResponsesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)_networkEventCount;
@property(readonly, nonatomic) NSArray *networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;
- (id)init;

@end

