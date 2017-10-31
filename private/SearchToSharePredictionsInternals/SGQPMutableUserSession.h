//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SGQPMutablePredictionsSession;

@interface SGQPMutableUserSession : NSObject
{
    _Bool _searchPerformed;
    _Bool _resultEngaged;
    NSString *_conversationId;
    unsigned long long _searchAction;
    NSString *_engagedSuggestion;
    SGQPMutablePredictionsSession *_rankedCategories;
    SGQPMutablePredictionsSession *_queryPredictions;
}

+ (id)sessionWithConversationId:(id)arg1;
@property(retain) SGQPMutablePredictionsSession *queryPredictions; // @synthesize queryPredictions=_queryPredictions;
@property(retain) SGQPMutablePredictionsSession *rankedCategories; // @synthesize rankedCategories=_rankedCategories;
@property(retain) NSString *engagedSuggestion; // @synthesize engagedSuggestion=_engagedSuggestion;
@property _Bool resultEngaged; // @synthesize resultEngaged=_resultEngaged;
@property unsigned long long searchAction; // @synthesize searchAction=_searchAction;
@property _Bool searchPerformed; // @synthesize searchPerformed=_searchPerformed;
@property(readonly) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (void)clearEngagedPredictionsAndSetCustomQuerySearch;
- (void)setResultEngaged;
- (void)setSearchPerformed;
- (void)setQueryPredictions:(id)arg1 messages:(id)arg2 language:(id)arg3 abGroup:(id)arg4;
- (void)setRankedCategories:(id)arg1 messages:(id)arg2 language:(id)arg3 abGroup:(id)arg4;
- (id)initWithConversationId:(id)arg1;

@end

