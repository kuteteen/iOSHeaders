//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCAsyncSerialQueue, FCCloudContext, NFMutexLock, NSMapTable;

@interface FCFeedManager : NSObject
{
    id <FCFeedPersonalizing> _feedPersonalizer;
    FCCloudContext *_context;
    NSMapTable *_feedDescriptorsByID;
    NFMutexLock *_feedDescriptorsLock;
    FCAsyncSerialQueue *_feedUpdateQueue;
}

+ (id)feedDescriptorNameForReadingList;
+ (id)feedDescriptorNameForReadingHistory;
+ (id)feedDescriptorNameForForYou;
+ (id)_identifierForFeedName:(id)arg1;
@property(retain, nonatomic) FCAsyncSerialQueue *feedUpdateQueue; // @synthesize feedUpdateQueue=_feedUpdateQueue;
@property(retain, nonatomic) NFMutexLock *feedDescriptorsLock; // @synthesize feedDescriptorsLock=_feedDescriptorsLock;
@property(retain, nonatomic) NSMapTable *feedDescriptorsByID; // @synthesize feedDescriptorsByID=_feedDescriptorsByID;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
- (void).cxx_destruct;
- (void)prefetchForYouWithHighPriority:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCloudContext:(id)arg1;
- (id)init;
- (id)_feedDescriptorWithIdentifier:(id)arg1 forceRecreate:(_Bool)arg2 tag:(id)arg3;
- (id)feedDescriptorWithIdentifier:(id)arg1;
- (id)feedDescriptorForArticlesInSameClusterAsArticleID:(id)arg1;
- (id)feedDescriptorForTag:(id)arg1;
- (id)feedDescriptorForReadingList;
- (id)feedDescriptorForReadingHistory;
- (id)feedDescriptorForForYou;

@end

