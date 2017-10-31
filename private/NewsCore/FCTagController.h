//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCAppConfigurationObserving.h"
#import "FCJSONEncodableObjectProviding.h"
#import "FCOperationThrottlerDelegate.h"
#import "FCTagsFetchOperationDelegate.h"

@class FCAppConfigurationManager, FCAssetManager, FCCKContentDatabase, FCOperationThrottler, FCTagRecordSource, NSCache, NSMutableDictionary, NSString;

@interface FCTagController : NSObject <FCTagsFetchOperationDelegate, FCAppConfigurationObserving, FCOperationThrottlerDelegate, FCJSONEncodableObjectProviding>
{
    FCCKContentDatabase *_contentDatabase;
    FCAssetManager *_assetManager;
    FCTagRecordSource *_tagRecordSource;
    FCAppConfigurationManager *_appConfigurationManager;
    NSCache *_fastCache;
    FCOperationThrottler *_tagPrefetchThrottler;
    NSMutableDictionary *_prefetchedTags;
}

+ (_Bool)isTagAllowedInContentStoreFront:(id)arg1;
+ (_Bool)isTagAllowed:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *prefetchedTags; // @synthesize prefetchedTags=_prefetchedTags;
@property(retain, nonatomic) FCOperationThrottler *tagPrefetchThrottler; // @synthesize tagPrefetchThrottler=_tagPrefetchThrottler;
@property(retain, nonatomic) NSCache *fastCache; // @synthesize fastCache=_fastCache;
@property(retain, nonatomic) FCAppConfigurationManager *appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(retain, nonatomic) FCTagRecordSource *tagRecordSource; // @synthesize tagRecordSource=_tagRecordSource;
@property(retain, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain, nonatomic) FCCKContentDatabase *contentDatabase; // @synthesize contentDatabase=_contentDatabase;
- (void).cxx_destruct;
- (id)jsonEncodableObject;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)appConfigurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;
- (void)tagsFetchOperation:(id)arg1 didFetchTags:(id)arg2;
@property(nonatomic) _Bool shouldPrefetchGlobalTags;
- (void)saveTagsToCache:(id)arg1;
- (void)_fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_refreshTagsBasedOnAgeForTagIDs:(id)arg1;
- (id)_cachedTagsForTagIDs:(id)arg1 fastCacheOnly:(_Bool)arg2;
- (id)_cachedTagForTagID:(id)arg1 fastCacheOnly:(_Bool)arg2;
- (id)tagsForTagIDs:(id)arg1;
- (id)tagsForTagIDs:(id)arg1 predicate:(CDUnknownBlockType)arg2;
- (id)tagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 predicate:(CDUnknownBlockType)arg3;
- (void)fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchTagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchTagForTagID:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)fetchOperationForTagsWithIDs:(id)arg1 includeChildren:(_Bool)arg2;
- (id)fetchOperationForTagsWithIDs:(id)arg1 includeParents:(_Bool)arg2;
- (id)fetchOperationForTagsWithIDs:(id)arg1;
- (id)expectedFastCachedTagForID:(id)arg1;
- (id)slowCachedTagsForIDs:(id)arg1;
- (id)slowCachedTagForID:(id)arg1;
- (id)fastCachedTagsForIDs:(id)arg1;
- (id)fastCachedTagForID:(id)arg1;
- (void)dealloc;
- (id)initWithContentDatabase:(id)arg1 assetManager:(id)arg2 tagRecordSource:(id)arg3 appConfigurationManager:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

