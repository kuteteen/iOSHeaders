//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCJSONEncodableObjectProviding.h"

@class FCAppConfigurationResource, FCAsyncSerialQueue, FCCKContentDatabase, FCKeyValueStore, NSArray, NSHashTable, NSMutableArray, NSNumber, NSObject<OS_dispatch_queue>, NSSet, NSString, NSURL;

@interface FCAppConfigurationManager : NSObject <FCJSONEncodableObjectProviding>
{
    _Bool _attemptedAppConfigFetch;
    NSURL *_contentDirectoryFileURL;
    FCCKContentDatabase *_contentDatabase;
    NSNumber *_currentUserBucket;
    NSNumber *_currentTreatmentOverride;
    FCAsyncSerialQueue *_configRequestSerialQueue;
    FCAsyncSerialQueue *_configRefreshSerialQueue;
    FCAsyncSerialQueue *_trendingSerialQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_observers;
    NSMutableArray *_observationBlocks;
    NSString *_configurationResourceID;
    NSString *_trendingSearchesResourceID;
    FCKeyValueStore *_resourceCache;
    FCAppConfigurationResource *_configurationResource;
    FCAppConfigurationResource *_trendingSearchesResource;
    NSSet *_preferredLanguages;
    id <FCNewsAppConfiguration> _appConfiguration;
    NSArray *_trendingTopics;
    NSNumber *_currentModdedBucketID;
}

+ (id)overrideWidgetSectionConfigID;
+ (id)overrideForYouConfigID;
+ (id)overrideAppConfigID;
+ (void)initialize;
@property(copy, nonatomic) NSNumber *currentModdedBucketID; // @synthesize currentModdedBucketID=_currentModdedBucketID;
@property(copy, nonatomic) NSArray *trendingTopics; // @synthesize trendingTopics=_trendingTopics;
@property(copy, nonatomic) id <FCNewsAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(retain, nonatomic) NSSet *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(retain, nonatomic) FCAppConfigurationResource *trendingSearchesResource; // @synthesize trendingSearchesResource=_trendingSearchesResource;
@property(retain, nonatomic) FCAppConfigurationResource *configurationResource; // @synthesize configurationResource=_configurationResource;
@property(retain, nonatomic) FCKeyValueStore *resourceCache; // @synthesize resourceCache=_resourceCache;
@property(retain, nonatomic) NSString *trendingSearchesResourceID; // @synthesize trendingSearchesResourceID=_trendingSearchesResourceID;
@property(retain, nonatomic) NSString *configurationResourceID; // @synthesize configurationResourceID=_configurationResourceID;
@property(retain, nonatomic) NSMutableArray *observationBlocks; // @synthesize observationBlocks=_observationBlocks;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) FCAsyncSerialQueue *trendingSerialQueue; // @synthesize trendingSerialQueue=_trendingSerialQueue;
@property(retain, nonatomic) FCAsyncSerialQueue *configRefreshSerialQueue; // @synthesize configRefreshSerialQueue=_configRefreshSerialQueue;
@property(retain, nonatomic) FCAsyncSerialQueue *configRequestSerialQueue; // @synthesize configRequestSerialQueue=_configRequestSerialQueue;
@property(copy, nonatomic) NSNumber *currentTreatmentOverride; // @synthesize currentTreatmentOverride=_currentTreatmentOverride;
@property(copy, nonatomic) NSNumber *currentUserBucket; // @synthesize currentUserBucket=_currentUserBucket;
@property(nonatomic) _Bool attemptedAppConfigFetch; // @synthesize attemptedAppConfigFetch=_attemptedAppConfigFetch;
@property(retain, nonatomic) FCCKContentDatabase *contentDatabase; // @synthesize contentDatabase=_contentDatabase;
@property(copy, nonatomic) NSURL *contentDirectoryFileURL; // @synthesize contentDirectoryFileURL=_contentDirectoryFileURL;
- (void).cxx_destruct;
- (id)jsonEncodableObject;
- (void)_didChangeTrendingTopics;
- (void)_extractTrendingTopicsFromLanguageConfiguration:(id)arg1;
- (id)_languageConfigurationsInProtobufTrendingConfiguration:(id)arg1;
- (_Bool)_processTrendingSearchesData:(id)arg1;
- (id)_adoptTrendingSearchesResource:(id)arg1;
- (id)_loadTrendingSearchesResourceFromCache;
- (void)fetchTrendingSearchesIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)_resolvedWidgetSectionConfigRecordIDForLanguageConfiguration:(id)arg1;
- (id)_resolvedForYouRecordConfigIDForLanguageConfiguration:(id)arg1;
- (id)_resolvedBriefingsTagIDForLanguageConfiguration:(id)arg1;
- (id)_resolvedTopLevelCategoryFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractFeedIDsFromLanguageConfigurations:(id)arg1 hiddenFeedIDs:(id *)arg2 presubscribedFeedIDs:(id *)arg3 onboardingFeedIDs:(id *)arg4;
- (id)_languageConfigurationsFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractTopStoriesIntervals:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (id)_extractWidgetConfigFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractVideoGroupsConfigFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (void)_extractPrefetchConfigFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (void)_extractPersonalizationValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (void)_extractiAdValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (void)_extractEndpointConfigValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (void)_extractCommonValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (void)_didChange;
- (_Bool)_processTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (_Bool)_selectConfigurationForTreatment:(id)arg1 configurationData:(id)arg2;
- (_Bool)_selectConfigurationForBucket:(id)arg1 configurationData:(id)arg2;
- (id)_treatmentOverride;
- (id)_userBucket;
- (id)_adoptConfigurationResource:(id)arg1 force:(_Bool)arg2;
- (id)_adoptConfigurationResource:(id)arg1;
- (id)_loadConfigurationResourceFromCache;
- (id)_loadResourceCache;
- (void)_fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 force:(_Bool)arg2 refreshCompletion:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshAppConfigIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAppConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchCoreConfigurationIfNeededWithCompletionQueue:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCoreConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCoreConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)overrideConfigWithTreatment:(id)arg1;
@property(readonly, nonatomic) NSArray *availableExperiments;
- (void)addChangeObservationBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *remoteURL;
@property(readonly, nonatomic) id <FCNewsAppConfiguration> unsafeFetchedAppConfig;
@property(readonly, nonatomic) id <FCNewsAppConfiguration> fetchedAppConfig;
@property(readonly, nonatomic) id <FCNewsAppConfiguration> possiblyUnfetchedAppConfig;
- (id)initWithContentDatabase:(id)arg1 contentDirectoryFileURL:(id)arg2;
- (id)initWithContentHostDirectoryFileURL:(id)arg1 networkBehaviorMonitor:(id)arg2;
- (id)init;

@end

