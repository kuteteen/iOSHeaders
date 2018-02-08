//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCFeedTransforming.h"

@class NSSet, NSString;

@interface FCFeedTransformationFilter : NSObject <FCFeedTransforming>
{
    long long _filterOptions;
    NSSet *_otherArticleIDs;
    NSSet *_otherClusterIDs;
    NSSet *_mutedChannelTagIDs;
    NSSet *_subscribedTagIDs;
    NSSet *_purchasedTagIDs;
    NSString *_briefingsTagID;
}

+ (id)transformationWithFilterOptions:(long long)arg1 configuration:(id)arg2 context:(id)arg3;
+ (id)transformationWithFilterOptions:(long long)arg1 configuration:(id)arg2 context:(id)arg3 otherArticleIDs:(id)arg4;
+ (id)transformationWithFilterOptions:(long long)arg1 otherArticleIDs:(id)arg2 otherClusterIDs:(id)arg3 subscribedTagIDs:(id)arg4 mutedChannelTagIDs:(id)arg5 purchasedTagIDs:(id)arg6 briefingsTagID:(id)arg7;
@property(copy, nonatomic) NSString *briefingsTagID; // @synthesize briefingsTagID=_briefingsTagID;
@property(copy, nonatomic) NSSet *purchasedTagIDs; // @synthesize purchasedTagIDs=_purchasedTagIDs;
@property(copy, nonatomic) NSSet *subscribedTagIDs; // @synthesize subscribedTagIDs=_subscribedTagIDs;
@property(copy, nonatomic) NSSet *mutedChannelTagIDs; // @synthesize mutedChannelTagIDs=_mutedChannelTagIDs;
@property(copy, nonatomic) NSSet *otherClusterIDs; // @synthesize otherClusterIDs=_otherClusterIDs;
@property(copy, nonatomic) NSSet *otherArticleIDs; // @synthesize otherArticleIDs=_otherArticleIDs;
@property(nonatomic) long long filterOptions; // @synthesize filterOptions=_filterOptions;
- (void).cxx_destruct;
- (id)transformHeadlines:(id)arg1;
- (id)transformFeedItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

