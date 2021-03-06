//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCCoreConfiguration.h"
#import "NFCopying.h"

@class FCCoverArticlesConfiguration, FCIAdConfiguration, FCPrefetchConfiguration, NSArray, NSString, NTPBDiscoverMoreVideosInfo;

@protocol FCNewsAppConfiguration <FCCoreConfiguration, NFCopying>
@property(readonly, nonatomic) NTPBDiscoverMoreVideosInfo *shareDiscoverMoreVideosInfo;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property(readonly, nonatomic) unsigned long long trendingStyle;
@property(readonly, copy, nonatomic) NSArray *topStoriesPublishDates;
@property(readonly, nonatomic) _Bool terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(readonly, nonatomic) long long autoRefreshMinimumInterval;
@property(readonly, nonatomic) long long stateRestorationAllowedTimeWindow;
@property(readonly, nonatomic) _Bool usAndUKUseAUWhatsNewFeatures;
@property(readonly, nonatomic) NSArray *mediaSharingBlacklistedChannelIDs;
@property(readonly, nonatomic) NSArray *externalAnalyticsConfigurations;
@property(readonly, nonatomic) NSString *exploreArticleID;
@property(readonly, nonatomic) _Bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForSingleArticle;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForArticleList;
@property(readonly, nonatomic) NSString *personalizationFavorabilityResourceId;
@property(readonly, nonatomic) NSString *personalizationWhitelistResourceId;
@property(readonly, nonatomic) NSString *personalizationUrlMappingResourceId;
@property(readonly, nonatomic) NSString *personalizationBundleIdMappingResourceId;
@property(readonly, nonatomic) long long analyticsEndpointMaxPayloadSize;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationStart;
@property(readonly, nonatomic) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;
@property(readonly, nonatomic) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property(readonly, nonatomic) NSString *widgetConfigID;
@property(readonly, nonatomic) double parsecPopulationCeiling;
@property(readonly, nonatomic) double parsecPopulationFloor;
@property(readonly, nonatomic) _Bool universalLinksEnabled;
@property(readonly, nonatomic) NSString *embedConfigurationAssetID;
@property(readonly, nonatomic) FCCoverArticlesConfiguration *coverArticlesConfig;
@property(readonly, nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property(readonly, nonatomic) long long notificationArticleCacheTimeout;
@property(readonly, nonatomic) long long newFavoriteNotificationAlertsFrequency;
@property(readonly, nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds;
@property(readonly, nonatomic) long long subscriptionsPlacardGlobalMaximumPerDay;
@property(readonly, nonatomic) long long subscriptionsPlacardPublisherFrequencyInSeconds;
@property(readonly, nonatomic) NSArray *topLevelRecommendedChannelTagIDs;
@property(readonly, nonatomic) NSArray *topLevelRecommendedTopicTagIDs;
@property(readonly, nonatomic) NSArray *topLevelCuratedTagIDs;
@property(readonly, nonatomic) FCPrefetchConfiguration *prefetchConfig;
@property(readonly, nonatomic) FCIAdConfiguration *iAdConfig;
@property(readonly, nonatomic) double tileProminenceScoreBalanceValue;
@property(readonly, nonatomic) double prerollLoadingTimeout;
@property(readonly, nonatomic) double interstitialAdLoadDelay;
@property(readonly, nonatomic) long long autoScrollToTopFeedTimeout;
@property(readonly, nonatomic) NSArray *recommendedCategories;
@property(readonly, nonatomic) NSArray *onboardingFeedIDs;
@property(readonly, nonatomic) long long minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou;
@end

