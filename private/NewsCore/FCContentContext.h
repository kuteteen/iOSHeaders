//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCAppConfigurationObserving.h"
#import "FCContentContext.h"
#import "FCNetworkReachabilityRequirementObserving.h"

@class FCAppConfigurationManager, FCArticleController, FCAssetManager, FCContentContextInternal, FCFlintResourceManager, FCNetworkBehaviorMonitor, FCTagController, NSString, NSURL;

@interface FCContentContext : NSObject <FCNetworkReachabilityRequirementObserving, FCAppConfigurationObserving, FCContentContext>
{
    FCAppConfigurationManager *_appConfigurationManager;
    FCArticleController *_articleController;
    FCAssetManager *_assetManager;
    FCFlintResourceManager *_flintResourceManager;
    FCTagController *_tagController;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id <FCPPTContext> _pptContext;
    id <FCBackgroundTaskable> _backgroundTaskable;
    NSString *_contentDirectory;
    NSURL *_assetCacheDirectoryURL;
    NSURL *_webArchiveCacheDirectoryURL;
    FCContentContextInternal *_internalContentContext;
    id <FCNetworkReachabilityRequirement> _supportedCountryNetworkReachabilityRequirement;
}

+ (void)initialize;
@property(retain, nonatomic) id <FCNetworkReachabilityRequirement> supportedCountryNetworkReachabilityRequirement; // @synthesize supportedCountryNetworkReachabilityRequirement=_supportedCountryNetworkReachabilityRequirement;
@property(retain, nonatomic) FCContentContextInternal *internalContentContext; // @synthesize internalContentContext=_internalContentContext;
@property(retain, nonatomic) NSURL *webArchiveCacheDirectoryURL; // @synthesize webArchiveCacheDirectoryURL=_webArchiveCacheDirectoryURL;
@property(retain, nonatomic) NSURL *assetCacheDirectoryURL; // @synthesize assetCacheDirectoryURL=_assetCacheDirectoryURL;
@property(copy, nonatomic) NSString *contentDirectory; // @synthesize contentDirectory=_contentDirectory;
@property(readonly, nonatomic) __weak id <FCBackgroundTaskable> backgroundTaskable; // @synthesize backgroundTaskable=_backgroundTaskable;
@property(readonly, nonatomic) id <FCPPTContext> pptContext; // @synthesize pptContext=_pptContext;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
- (void).cxx_destruct;
- (void)appConfigurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *contentEnvironmentToken;
@property(readonly, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property(readonly, nonatomic) FCTagController *tagController; // @synthesize tagController=_tagController;
@property(readonly, nonatomic) FCArticleController *articleController; // @synthesize articleController=_articleController;
@property(readonly, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(readonly, nonatomic) FCAppConfigurationManager *appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, copy, nonatomic) NSString *contentStoreFrontID;
- (void)_updateReachabilityGivenRequirements;
- (void)networkReachabilityRequirementDidBecomeDirty:(id)arg1;
- (void)dealloc;
- (id)initWithContentDatabase:(id)arg1 contentHostDirectory:(id)arg2 networkBehaviorMonitor:(id)arg3 setupExcerptURLProtocol:(_Bool)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 backgroundTaskable:(id)arg7 pptContext:(id)arg8;
- (id)initWithAppConfigurationManager:(id)arg1 contentHostDirectory:(id)arg2 networkBehaviorMonitor:(id)arg3 setupExcerptURLProtocol:(_Bool)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 backgroundTaskable:(id)arg7 pptContext:(id)arg8;
- (id)initWithAppConfigurationManager:(id)arg1 contentHostDirectory:(id)arg2 desiredHeadlineFieldOptions:(unsigned long long)arg3 feedUsage:(long long)arg4 backgroundTaskable:(id)arg5 pptContext:(id)arg6;
- (id)initWithContentHostDirectory:(id)arg1 networkBehaviorMonitor:(id)arg2 desiredHeadlineFieldOptions:(unsigned long long)arg3 feedUsage:(long long)arg4 backgroundTaskable:(id)arg5 pptContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

