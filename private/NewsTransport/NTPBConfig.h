//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, NTPBBinningConfig, NTPBIAdConfig, NTPBPaidSubscriptionConfig, NTPBPersonalizationConfig, NTPBPersonalizationTreatment, NTPBPrefetchConfig, NTPBVideoGroupsConfig, NTPBWidgetConfig;

@interface NTPBConfig : PBCodable <NSCopying>
{
    CDStruct_5df41632 _topStoriesPublishTimeIntervals;
    long long _analyticsEndpointMaxPayloadSize;
    long long _appConfigRefreshRate;
    double _articleDiversitySimilarityExpectationEnd;
    double _articleDiversitySimilarityExpectationStart;
    long long _articleRapidUpdatesTimeout;
    long long _autoRefreshMinimumInterval;
    long long _autoScrollToTopFeedTimeout;
    double _batchedFeedTimeout;
    long long _corryBarMaxArticleCountForArticleList;
    long long _corryBarMaxArticleCountForSingleArticle;
    long long _endOfArticleMaxInaccessiblePaidArticles;
    double _endOfArticleMinPaidHeadlineRatio;
    long long _expirePinnedArticlesAfter;
    long long _expiredPaidSubscriptionGroupCutoffTime;
    long long _initialArticlesFromNewFavorite;
    double _interstitialAdLoadDelay;
    long long _longReminderTime;
    long long _maxExpiredPaidSubscriptionGroupCount;
    long long _maxPaidSubscriptionGroupSizeIPad;
    long long _maxPaidSubscriptionGroupSizeIPhone;
    long long _maxTimesHeadlineInPaidSubscriptionGroup;
    double _maximumRatioOfArticlesInForYouGroup;
    long long _minimumArticleUpdateInterval;
    long long _minimumDistanceBetweenImageOnTopTiles;
    long long _minimumDurationBetweenForYouGroupsWeekday;
    long long _minimumDurationBetweenForYouGroupsWeekend;
    long long _minimumDurationBetweenTrendingGroupsWeekday;
    long long _minimumDurationBetweenTrendingGroupsWeekend;
    long long _minimumFollowCountToRemovePersonalizePlacardInFollowing;
    double _minimumTrendingUnseenRatio;
    long long _newFavoriteNotificationAlertsFrequency;
    long long _notificationArticleCacheTimeout;
    long long _notificationArticleWithRapidUpdatesCacheTimeout;
    long long _notificationEnabledChannelsRefreshFrequency;
    long long _numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
    long long _optionalTopStoriesRefreshRate;
    double _prerollLoadingTimeout;
    double _publisherDiversitySlope;
    double _publisherDiversityYIntercept;
    long long _savedArticlesCutoffTime;
    long long _savedArticlesMaximumCountCellular;
    long long _savedArticlesMaximumCountWifi;
    long long _savedArticlesOpenedCutoffTime;
    long long _shortReminderTime;
    long long _stateRestorationAllowedTimeWindow;
    long long _subscriptionsGlobalMeteredCount;
    long long _subscriptionsGracePeriodForTokenVerificationSeconds;
    long long _subscriptionsPlacardGlobalMaxPerDay;
    long long _subscriptionsPlacardPublisherFrequencyDays;
    long long _subscriptionsPlacardPublisherFrequencySeconds;
    double _tileProminenceScoreBalanceValue;
    long long _timeBetweenSameWidgetReinsertion;
    long long _timeBetweenWidgetInsertions;
    long long _treatmentId;
    long long _trendingTopicsRefreshRate;
    long long _userSegmentationApiModMax;
    long long _userSegmentationApiModThreshold;
    NTPBWidgetConfig *_alternativeButlerWidgetConfig;
    NSString *_anfEmbedConfigurationAsset;
    NSString *_articleRecirculationConfig;
    NTPBBinningConfig *_binningConfig;
    NTPBWidgetConfig *_butlerWidgetConfig;
    unsigned int _enabledPrivateDataEncryptionLevel;
    NSMutableArray *_endpointConfigs;
    NSString *_experimentalizableFieldPostfix;
    NSMutableArray *_externalAnalyticsConfigs;
    NSString *_fallbackLanguageTag;
    NSString *_forYouNonPersonalizedGroupsOrder;
    NTPBVideoGroupsConfig *_forYouVideoGroupsConfig;
    NTPBIAdConfig *_iadConfig;
    NSMutableArray *_languageConfigs;
    unsigned int _orderFeedEnabledLevel;
    int _orderFeedEnabledLevelDeprecated;
    NTPBPaidSubscriptionConfig *_paidSubscriptionConfig;
    NSString *_personalizationBundleIdMappingResourceId;
    NTPBPersonalizationConfig *_personalizationConfig;
    NSString *_personalizationPortraitConfigResourceId;
    NSString *_personalizationPublisherFavorabilityScoresResourceId;
    NTPBPersonalizationTreatment *_personalizationTreatment;
    NSString *_personalizationUrlMappingResourceId;
    NSString *_personalizationWhitelistResourceId;
    NSString *_personalizationWidgetSectionMappingResourceId;
    NTPBPrefetchConfig *_prefetchConfig;
    int _trendingStyle;
    NTPBWidgetConfig *_widgetConfig;
    NTPBWidgetConfig *_widgetConfig2;
    _Bool _alternativeButlerWidgetConfigEnabled;
    _Bool _articleSearchEnabled;
    _Bool _corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
    _Bool _diversifyOptionalTopStories;
    _Bool _newsletterSubscriptionChecked;
    _Bool _orderFeedEndpointEnabled;
    _Bool _terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
    _Bool _universalLinksEnabled;
    _Bool _usUkUseAuWhatsNewFeatures;
    _Bool _useSecureConnectionForAssets;
    struct {
        unsigned int analyticsEndpointMaxPayloadSize:1;
        unsigned int appConfigRefreshRate:1;
        unsigned int articleDiversitySimilarityExpectationEnd:1;
        unsigned int articleDiversitySimilarityExpectationStart:1;
        unsigned int articleRapidUpdatesTimeout:1;
        unsigned int autoRefreshMinimumInterval:1;
        unsigned int autoScrollToTopFeedTimeout:1;
        unsigned int batchedFeedTimeout:1;
        unsigned int corryBarMaxArticleCountForArticleList:1;
        unsigned int corryBarMaxArticleCountForSingleArticle:1;
        unsigned int endOfArticleMaxInaccessiblePaidArticles:1;
        unsigned int endOfArticleMinPaidHeadlineRatio:1;
        unsigned int expirePinnedArticlesAfter:1;
        unsigned int expiredPaidSubscriptionGroupCutoffTime:1;
        unsigned int initialArticlesFromNewFavorite:1;
        unsigned int interstitialAdLoadDelay:1;
        unsigned int longReminderTime:1;
        unsigned int maxExpiredPaidSubscriptionGroupCount:1;
        unsigned int maxPaidSubscriptionGroupSizeIPad:1;
        unsigned int maxPaidSubscriptionGroupSizeIPhone:1;
        unsigned int maxTimesHeadlineInPaidSubscriptionGroup:1;
        unsigned int maximumRatioOfArticlesInForYouGroup:1;
        unsigned int minimumArticleUpdateInterval:1;
        unsigned int minimumDistanceBetweenImageOnTopTiles:1;
        unsigned int minimumDurationBetweenForYouGroupsWeekday:1;
        unsigned int minimumDurationBetweenForYouGroupsWeekend:1;
        unsigned int minimumDurationBetweenTrendingGroupsWeekday:1;
        unsigned int minimumDurationBetweenTrendingGroupsWeekend:1;
        unsigned int minimumFollowCountToRemovePersonalizePlacardInFollowing:1;
        unsigned int minimumTrendingUnseenRatio:1;
        unsigned int newFavoriteNotificationAlertsFrequency:1;
        unsigned int notificationArticleCacheTimeout:1;
        unsigned int notificationArticleWithRapidUpdatesCacheTimeout:1;
        unsigned int notificationEnabledChannelsRefreshFrequency:1;
        unsigned int numberOfScreenfulsScrolledToBypassWidgetTimeLimit:1;
        unsigned int optionalTopStoriesRefreshRate:1;
        unsigned int prerollLoadingTimeout:1;
        unsigned int publisherDiversitySlope:1;
        unsigned int publisherDiversityYIntercept:1;
        unsigned int savedArticlesCutoffTime:1;
        unsigned int savedArticlesMaximumCountCellular:1;
        unsigned int savedArticlesMaximumCountWifi:1;
        unsigned int savedArticlesOpenedCutoffTime:1;
        unsigned int shortReminderTime:1;
        unsigned int stateRestorationAllowedTimeWindow:1;
        unsigned int subscriptionsGlobalMeteredCount:1;
        unsigned int subscriptionsGracePeriodForTokenVerificationSeconds:1;
        unsigned int subscriptionsPlacardGlobalMaxPerDay:1;
        unsigned int subscriptionsPlacardPublisherFrequencyDays:1;
        unsigned int subscriptionsPlacardPublisherFrequencySeconds:1;
        unsigned int tileProminenceScoreBalanceValue:1;
        unsigned int timeBetweenSameWidgetReinsertion:1;
        unsigned int timeBetweenWidgetInsertions:1;
        unsigned int treatmentId:1;
        unsigned int trendingTopicsRefreshRate:1;
        unsigned int userSegmentationApiModMax:1;
        unsigned int userSegmentationApiModThreshold:1;
        unsigned int enabledPrivateDataEncryptionLevel:1;
        unsigned int orderFeedEnabledLevel:1;
        unsigned int orderFeedEnabledLevelDeprecated:1;
        unsigned int trendingStyle:1;
        unsigned int alternativeButlerWidgetConfigEnabled:1;
        unsigned int articleSearchEnabled:1;
        unsigned int corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers:1;
        unsigned int diversifyOptionalTopStories:1;
        unsigned int newsletterSubscriptionChecked:1;
        unsigned int orderFeedEndpointEnabled:1;
        unsigned int terminateAppOnBackgroundAfterJoiningOrLeavingExperiment:1;
        unsigned int universalLinksEnabled:1;
        unsigned int usUkUseAuWhatsNewFeatures:1;
        unsigned int useSecureConnectionForAssets:1;
    } _has;
}

+ (Class)externalAnalyticsConfigType;
+ (Class)endpointConfigsType;
+ (Class)languageConfigsType;
@property(nonatomic) long long userSegmentationApiModMax; // @synthesize userSegmentationApiModMax=_userSegmentationApiModMax;
@property(nonatomic) long long userSegmentationApiModThreshold; // @synthesize userSegmentationApiModThreshold=_userSegmentationApiModThreshold;
@property(nonatomic) long long optionalTopStoriesRefreshRate; // @synthesize optionalTopStoriesRefreshRate=_optionalTopStoriesRefreshRate;
@property(retain, nonatomic) NSString *articleRecirculationConfig; // @synthesize articleRecirculationConfig=_articleRecirculationConfig;
@property(retain, nonatomic) NTPBVideoGroupsConfig *forYouVideoGroupsConfig; // @synthesize forYouVideoGroupsConfig=_forYouVideoGroupsConfig;
@property(nonatomic) long long minimumDurationBetweenTrendingGroupsWeekend; // @synthesize minimumDurationBetweenTrendingGroupsWeekend=_minimumDurationBetweenTrendingGroupsWeekend;
@property(nonatomic) long long minimumDurationBetweenTrendingGroupsWeekday; // @synthesize minimumDurationBetweenTrendingGroupsWeekday=_minimumDurationBetweenTrendingGroupsWeekday;
@property(nonatomic) long long minimumDurationBetweenForYouGroupsWeekend; // @synthesize minimumDurationBetweenForYouGroupsWeekend=_minimumDurationBetweenForYouGroupsWeekend;
@property(nonatomic) long long minimumDurationBetweenForYouGroupsWeekday; // @synthesize minimumDurationBetweenForYouGroupsWeekday=_minimumDurationBetweenForYouGroupsWeekday;
@property(nonatomic) double minimumTrendingUnseenRatio; // @synthesize minimumTrendingUnseenRatio=_minimumTrendingUnseenRatio;
@property(nonatomic) double maximumRatioOfArticlesInForYouGroup; // @synthesize maximumRatioOfArticlesInForYouGroup=_maximumRatioOfArticlesInForYouGroup;
@property(nonatomic) long long autoRefreshMinimumInterval; // @synthesize autoRefreshMinimumInterval=_autoRefreshMinimumInterval;
@property(nonatomic) long long stateRestorationAllowedTimeWindow; // @synthesize stateRestorationAllowedTimeWindow=_stateRestorationAllowedTimeWindow;
@property(nonatomic) unsigned int orderFeedEnabledLevel; // @synthesize orderFeedEnabledLevel=_orderFeedEnabledLevel;
@property(nonatomic) _Bool usUkUseAuWhatsNewFeatures; // @synthesize usUkUseAuWhatsNewFeatures=_usUkUseAuWhatsNewFeatures;
@property(nonatomic) _Bool useSecureConnectionForAssets; // @synthesize useSecureConnectionForAssets=_useSecureConnectionForAssets;
@property(nonatomic) long long minimumFollowCountToRemovePersonalizePlacardInFollowing; // @synthesize minimumFollowCountToRemovePersonalizePlacardInFollowing=_minimumFollowCountToRemovePersonalizePlacardInFollowing;
@property(retain, nonatomic) NSString *experimentalizableFieldPostfix; // @synthesize experimentalizableFieldPostfix=_experimentalizableFieldPostfix;
@property(retain, nonatomic) NSString *personalizationPortraitConfigResourceId; // @synthesize personalizationPortraitConfigResourceId=_personalizationPortraitConfigResourceId;
@property(retain, nonatomic) NSMutableArray *externalAnalyticsConfigs; // @synthesize externalAnalyticsConfigs=_externalAnalyticsConfigs;
@property(nonatomic) _Bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers; // @synthesize corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers=_corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(nonatomic) long long corryBarMaxArticleCountForSingleArticle; // @synthesize corryBarMaxArticleCountForSingleArticle=_corryBarMaxArticleCountForSingleArticle;
@property(nonatomic) long long corryBarMaxArticleCountForArticleList; // @synthesize corryBarMaxArticleCountForArticleList=_corryBarMaxArticleCountForArticleList;
@property(retain, nonatomic) NSString *personalizationWidgetSectionMappingResourceId; // @synthesize personalizationWidgetSectionMappingResourceId=_personalizationWidgetSectionMappingResourceId;
@property(retain, nonatomic) NSString *personalizationPublisherFavorabilityScoresResourceId; // @synthesize personalizationPublisherFavorabilityScoresResourceId=_personalizationPublisherFavorabilityScoresResourceId;
@property(nonatomic) unsigned int enabledPrivateDataEncryptionLevel; // @synthesize enabledPrivateDataEncryptionLevel=_enabledPrivateDataEncryptionLevel;
@property(retain, nonatomic) NSString *personalizationWhitelistResourceId; // @synthesize personalizationWhitelistResourceId=_personalizationWhitelistResourceId;
@property(retain, nonatomic) NSString *personalizationUrlMappingResourceId; // @synthesize personalizationUrlMappingResourceId=_personalizationUrlMappingResourceId;
@property(retain, nonatomic) NSString *personalizationBundleIdMappingResourceId; // @synthesize personalizationBundleIdMappingResourceId=_personalizationBundleIdMappingResourceId;
@property(retain, nonatomic) NTPBPersonalizationTreatment *personalizationTreatment; // @synthesize personalizationTreatment=_personalizationTreatment;
@property(retain, nonatomic) NTPBBinningConfig *binningConfig; // @synthesize binningConfig=_binningConfig;
@property(nonatomic) long long treatmentId; // @synthesize treatmentId=_treatmentId;
@property(nonatomic) long long subscriptionsPlacardPublisherFrequencySeconds; // @synthesize subscriptionsPlacardPublisherFrequencySeconds=_subscriptionsPlacardPublisherFrequencySeconds;
@property(retain, nonatomic) NTPBWidgetConfig *widgetConfig2; // @synthesize widgetConfig2=_widgetConfig2;
@property(retain, nonatomic) NTPBPaidSubscriptionConfig *paidSubscriptionConfig; // @synthesize paidSubscriptionConfig=_paidSubscriptionConfig;
@property(retain, nonatomic) NTPBWidgetConfig *butlerWidgetConfig; // @synthesize butlerWidgetConfig=_butlerWidgetConfig;
@property(nonatomic) _Bool alternativeButlerWidgetConfigEnabled; // @synthesize alternativeButlerWidgetConfigEnabled=_alternativeButlerWidgetConfigEnabled;
@property(retain, nonatomic) NTPBWidgetConfig *alternativeButlerWidgetConfig; // @synthesize alternativeButlerWidgetConfig=_alternativeButlerWidgetConfig;
@property(retain, nonatomic) NSString *forYouNonPersonalizedGroupsOrder; // @synthesize forYouNonPersonalizedGroupsOrder=_forYouNonPersonalizedGroupsOrder;
@property(nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout; // @synthesize notificationArticleWithRapidUpdatesCacheTimeout=_notificationArticleWithRapidUpdatesCacheTimeout;
@property(nonatomic) long long notificationArticleCacheTimeout; // @synthesize notificationArticleCacheTimeout=_notificationArticleCacheTimeout;
@property(nonatomic) _Bool universalLinksEnabled; // @synthesize universalLinksEnabled=_universalLinksEnabled;
@property(retain, nonatomic) NTPBWidgetConfig *widgetConfig; // @synthesize widgetConfig=_widgetConfig;
@property(nonatomic) long long endOfArticleMaxInaccessiblePaidArticles; // @synthesize endOfArticleMaxInaccessiblePaidArticles=_endOfArticleMaxInaccessiblePaidArticles;
@property(nonatomic) double endOfArticleMinPaidHeadlineRatio; // @synthesize endOfArticleMinPaidHeadlineRatio=_endOfArticleMinPaidHeadlineRatio;
@property(nonatomic) long long newFavoriteNotificationAlertsFrequency; // @synthesize newFavoriteNotificationAlertsFrequency=_newFavoriteNotificationAlertsFrequency;
@property(nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds; // @synthesize subscriptionsGracePeriodForTokenVerificationSeconds=_subscriptionsGracePeriodForTokenVerificationSeconds;
@property(nonatomic) long long subscriptionsPlacardGlobalMaxPerDay; // @synthesize subscriptionsPlacardGlobalMaxPerDay=_subscriptionsPlacardGlobalMaxPerDay;
@property(nonatomic) long long subscriptionsPlacardPublisherFrequencyDays; // @synthesize subscriptionsPlacardPublisherFrequencyDays=_subscriptionsPlacardPublisherFrequencyDays;
@property(retain, nonatomic) NSString *anfEmbedConfigurationAsset; // @synthesize anfEmbedConfigurationAsset=_anfEmbedConfigurationAsset;
@property(nonatomic) long long subscriptionsGlobalMeteredCount; // @synthesize subscriptionsGlobalMeteredCount=_subscriptionsGlobalMeteredCount;
@property(nonatomic) long long articleRapidUpdatesTimeout; // @synthesize articleRapidUpdatesTimeout=_articleRapidUpdatesTimeout;
@property(nonatomic) long long numberOfScreenfulsScrolledToBypassWidgetTimeLimit; // @synthesize numberOfScreenfulsScrolledToBypassWidgetTimeLimit=_numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
@property(nonatomic) long long timeBetweenSameWidgetReinsertion; // @synthesize timeBetweenSameWidgetReinsertion=_timeBetweenSameWidgetReinsertion;
@property(nonatomic) long long timeBetweenWidgetInsertions; // @synthesize timeBetweenWidgetInsertions=_timeBetweenWidgetInsertions;
@property(nonatomic) long long minimumDistanceBetweenImageOnTopTiles; // @synthesize minimumDistanceBetweenImageOnTopTiles=_minimumDistanceBetweenImageOnTopTiles;
@property(nonatomic) long long appConfigRefreshRate; // @synthesize appConfigRefreshRate=_appConfigRefreshRate;
@property(nonatomic) long long trendingTopicsRefreshRate; // @synthesize trendingTopicsRefreshRate=_trendingTopicsRefreshRate;
@property(nonatomic) long long autoScrollToTopFeedTimeout; // @synthesize autoScrollToTopFeedTimeout=_autoScrollToTopFeedTimeout;
@property(nonatomic) long long initialArticlesFromNewFavorite; // @synthesize initialArticlesFromNewFavorite=_initialArticlesFromNewFavorite;
@property(nonatomic) long long minimumArticleUpdateInterval; // @synthesize minimumArticleUpdateInterval=_minimumArticleUpdateInterval;
@property(nonatomic) double tileProminenceScoreBalanceValue; // @synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue;
@property(retain, nonatomic) NTPBPrefetchConfig *prefetchConfig; // @synthesize prefetchConfig=_prefetchConfig;
@property(retain, nonatomic) NTPBIAdConfig *iadConfig; // @synthesize iadConfig=_iadConfig;
@property(retain, nonatomic) NTPBPersonalizationConfig *personalizationConfig; // @synthesize personalizationConfig=_personalizationConfig;
@property(retain, nonatomic) NSMutableArray *endpointConfigs; // @synthesize endpointConfigs=_endpointConfigs;
@property(nonatomic) double prerollLoadingTimeout; // @synthesize prerollLoadingTimeout=_prerollLoadingTimeout;
@property(nonatomic) double interstitialAdLoadDelay; // @synthesize interstitialAdLoadDelay=_interstitialAdLoadDelay;
@property(nonatomic) double batchedFeedTimeout; // @synthesize batchedFeedTimeout=_batchedFeedTimeout;
@property(nonatomic) _Bool newsletterSubscriptionChecked; // @synthesize newsletterSubscriptionChecked=_newsletterSubscriptionChecked;
@property(nonatomic) long long longReminderTime; // @synthesize longReminderTime=_longReminderTime;
@property(nonatomic) long long shortReminderTime; // @synthesize shortReminderTime=_shortReminderTime;
@property(retain, nonatomic) NSMutableArray *languageConfigs; // @synthesize languageConfigs=_languageConfigs;
@property(retain, nonatomic) NSString *fallbackLanguageTag; // @synthesize fallbackLanguageTag=_fallbackLanguageTag;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUserSegmentationApiModMax;
@property(nonatomic) _Bool hasUserSegmentationApiModThreshold;
@property(nonatomic) _Bool hasExpirePinnedArticlesAfter;
@property(nonatomic) long long expirePinnedArticlesAfter; // @synthesize expirePinnedArticlesAfter=_expirePinnedArticlesAfter;
@property(nonatomic) _Bool hasOptionalTopStoriesRefreshRate;
@property(readonly, nonatomic) _Bool hasArticleRecirculationConfig;
@property(readonly, nonatomic) _Bool hasForYouVideoGroupsConfig;
@property(nonatomic) _Bool hasDiversifyOptionalTopStories;
@property(nonatomic) _Bool diversifyOptionalTopStories; // @synthesize diversifyOptionalTopStories=_diversifyOptionalTopStories;
@property(nonatomic) _Bool hasMinimumDurationBetweenTrendingGroupsWeekend;
@property(nonatomic) _Bool hasMinimumDurationBetweenTrendingGroupsWeekday;
@property(nonatomic) _Bool hasMinimumDurationBetweenForYouGroupsWeekend;
@property(nonatomic) _Bool hasMinimumDurationBetweenForYouGroupsWeekday;
@property(nonatomic) _Bool hasTrendingStyle;
@property(nonatomic) int trendingStyle; // @synthesize trendingStyle=_trendingStyle;
@property(nonatomic) _Bool hasMinimumTrendingUnseenRatio;
@property(nonatomic) _Bool hasMaximumRatioOfArticlesInForYouGroup;
@property(nonatomic) _Bool hasArticleSearchEnabled;
@property(nonatomic) _Bool articleSearchEnabled; // @synthesize articleSearchEnabled=_articleSearchEnabled;
- (void)setTopStoriesPublishTimeIntervals:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)topStoriesPublishTimeIntervalsAtIndex:(unsigned long long)arg1;
- (void)addTopStoriesPublishTimeIntervals:(long long)arg1;
- (void)clearTopStoriesPublishTimeIntervals;
@property(readonly, nonatomic) long long *topStoriesPublishTimeIntervals;
@property(readonly, nonatomic) unsigned long long topStoriesPublishTimeIntervalsCount;
@property(nonatomic) _Bool hasTerminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(nonatomic) _Bool terminateAppOnBackgroundAfterJoiningOrLeavingExperiment; // @synthesize terminateAppOnBackgroundAfterJoiningOrLeavingExperiment=_terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(nonatomic) _Bool hasAutoRefreshMinimumInterval;
@property(nonatomic) _Bool hasStateRestorationAllowedTimeWindow;
@property(nonatomic) _Bool hasOrderFeedEnabledLevel;
@property(nonatomic) _Bool hasUsUkUseAuWhatsNewFeatures;
@property(nonatomic) _Bool hasUseSecureConnectionForAssets;
@property(nonatomic) _Bool hasMinimumFollowCountToRemovePersonalizePlacardInFollowing;
@property(readonly, nonatomic) _Bool hasExperimentalizableFieldPostfix;
@property(nonatomic) _Bool hasOrderFeedEnabledLevelDeprecated;
@property(nonatomic) int orderFeedEnabledLevelDeprecated; // @synthesize orderFeedEnabledLevelDeprecated=_orderFeedEnabledLevelDeprecated;
@property(readonly, nonatomic) _Bool hasPersonalizationPortraitConfigResourceId;
- (id)externalAnalyticsConfigAtIndex:(unsigned long long)arg1;
- (unsigned long long)externalAnalyticsConfigsCount;
- (void)addExternalAnalyticsConfig:(id)arg1;
- (void)clearExternalAnalyticsConfigs;
@property(nonatomic) _Bool hasCorryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(nonatomic) _Bool hasCorryBarMaxArticleCountForSingleArticle;
@property(nonatomic) _Bool hasCorryBarMaxArticleCountForArticleList;
@property(readonly, nonatomic) _Bool hasPersonalizationWidgetSectionMappingResourceId;
@property(readonly, nonatomic) _Bool hasPersonalizationPublisherFavorabilityScoresResourceId;
@property(nonatomic) _Bool hasEnabledPrivateDataEncryptionLevel;
@property(readonly, nonatomic) _Bool hasPersonalizationWhitelistResourceId;
@property(readonly, nonatomic) _Bool hasPersonalizationUrlMappingResourceId;
@property(readonly, nonatomic) _Bool hasPersonalizationBundleIdMappingResourceId;
@property(nonatomic) _Bool hasOrderFeedEndpointEnabled;
@property(nonatomic) _Bool orderFeedEndpointEnabled; // @synthesize orderFeedEndpointEnabled=_orderFeedEndpointEnabled;
@property(nonatomic) _Bool hasAnalyticsEndpointMaxPayloadSize;
@property(nonatomic) long long analyticsEndpointMaxPayloadSize; // @synthesize analyticsEndpointMaxPayloadSize=_analyticsEndpointMaxPayloadSize;
@property(readonly, nonatomic) _Bool hasPersonalizationTreatment;
@property(readonly, nonatomic) _Bool hasBinningConfig;
@property(nonatomic) _Bool hasTreatmentId;
@property(nonatomic) _Bool hasSubscriptionsPlacardPublisherFrequencySeconds;
@property(readonly, nonatomic) _Bool hasWidgetConfig2;
@property(nonatomic) _Bool hasMaxExpiredPaidSubscriptionGroupCount;
@property(nonatomic) long long maxExpiredPaidSubscriptionGroupCount; // @synthesize maxExpiredPaidSubscriptionGroupCount=_maxExpiredPaidSubscriptionGroupCount;
@property(nonatomic) _Bool hasExpiredPaidSubscriptionGroupCutoffTime;
@property(nonatomic) long long expiredPaidSubscriptionGroupCutoffTime; // @synthesize expiredPaidSubscriptionGroupCutoffTime=_expiredPaidSubscriptionGroupCutoffTime;
@property(nonatomic) _Bool hasPublisherDiversityYIntercept;
@property(nonatomic) double publisherDiversityYIntercept; // @synthesize publisherDiversityYIntercept=_publisherDiversityYIntercept;
@property(nonatomic) _Bool hasPublisherDiversitySlope;
@property(nonatomic) double publisherDiversitySlope; // @synthesize publisherDiversitySlope=_publisherDiversitySlope;
@property(nonatomic) _Bool hasMaxTimesHeadlineInPaidSubscriptionGroup;
@property(nonatomic) long long maxTimesHeadlineInPaidSubscriptionGroup; // @synthesize maxTimesHeadlineInPaidSubscriptionGroup=_maxTimesHeadlineInPaidSubscriptionGroup;
@property(nonatomic) _Bool hasMaxPaidSubscriptionGroupSizeIPhone;
@property(nonatomic) long long maxPaidSubscriptionGroupSizeIPhone; // @synthesize maxPaidSubscriptionGroupSizeIPhone=_maxPaidSubscriptionGroupSizeIPhone;
@property(nonatomic) _Bool hasMaxPaidSubscriptionGroupSizeIPad;
@property(nonatomic) long long maxPaidSubscriptionGroupSizeIPad; // @synthesize maxPaidSubscriptionGroupSizeIPad=_maxPaidSubscriptionGroupSizeIPad;
@property(nonatomic) _Bool hasArticleDiversitySimilarityExpectationEnd;
@property(nonatomic) double articleDiversitySimilarityExpectationEnd; // @synthesize articleDiversitySimilarityExpectationEnd=_articleDiversitySimilarityExpectationEnd;
@property(nonatomic) _Bool hasArticleDiversitySimilarityExpectationStart;
@property(nonatomic) double articleDiversitySimilarityExpectationStart; // @synthesize articleDiversitySimilarityExpectationStart=_articleDiversitySimilarityExpectationStart;
@property(readonly, nonatomic) _Bool hasPaidSubscriptionConfig;
@property(readonly, nonatomic) _Bool hasButlerWidgetConfig;
@property(nonatomic) _Bool hasAlternativeButlerWidgetConfigEnabled;
@property(readonly, nonatomic) _Bool hasAlternativeButlerWidgetConfig;
@property(nonatomic) _Bool hasSavedArticlesOpenedCutoffTime;
@property(nonatomic) long long savedArticlesOpenedCutoffTime; // @synthesize savedArticlesOpenedCutoffTime=_savedArticlesOpenedCutoffTime;
@property(nonatomic) _Bool hasSavedArticlesCutoffTime;
@property(nonatomic) long long savedArticlesCutoffTime; // @synthesize savedArticlesCutoffTime=_savedArticlesCutoffTime;
@property(nonatomic) _Bool hasSavedArticlesMaximumCountCellular;
@property(nonatomic) long long savedArticlesMaximumCountCellular; // @synthesize savedArticlesMaximumCountCellular=_savedArticlesMaximumCountCellular;
@property(nonatomic) _Bool hasSavedArticlesMaximumCountWifi;
@property(nonatomic) long long savedArticlesMaximumCountWifi; // @synthesize savedArticlesMaximumCountWifi=_savedArticlesMaximumCountWifi;
@property(nonatomic) _Bool hasNotificationEnabledChannelsRefreshFrequency;
@property(nonatomic) long long notificationEnabledChannelsRefreshFrequency; // @synthesize notificationEnabledChannelsRefreshFrequency=_notificationEnabledChannelsRefreshFrequency;
@property(readonly, nonatomic) _Bool hasForYouNonPersonalizedGroupsOrder;
@property(nonatomic) _Bool hasNotificationArticleWithRapidUpdatesCacheTimeout;
@property(nonatomic) _Bool hasNotificationArticleCacheTimeout;
@property(nonatomic) _Bool hasUniversalLinksEnabled;
@property(readonly, nonatomic) _Bool hasWidgetConfig;
@property(nonatomic) _Bool hasEndOfArticleMaxInaccessiblePaidArticles;
@property(nonatomic) _Bool hasEndOfArticleMinPaidHeadlineRatio;
@property(nonatomic) _Bool hasNewFavoriteNotificationAlertsFrequency;
@property(nonatomic) _Bool hasSubscriptionsGracePeriodForTokenVerificationSeconds;
@property(nonatomic) _Bool hasSubscriptionsPlacardGlobalMaxPerDay;
@property(nonatomic) _Bool hasSubscriptionsPlacardPublisherFrequencyDays;
@property(readonly, nonatomic) _Bool hasAnfEmbedConfigurationAsset;
@property(nonatomic) _Bool hasSubscriptionsGlobalMeteredCount;
@property(nonatomic) _Bool hasArticleRapidUpdatesTimeout;
@property(nonatomic) _Bool hasNumberOfScreenfulsScrolledToBypassWidgetTimeLimit;
@property(nonatomic) _Bool hasTimeBetweenSameWidgetReinsertion;
@property(nonatomic) _Bool hasTimeBetweenWidgetInsertions;
@property(nonatomic) _Bool hasMinimumDistanceBetweenImageOnTopTiles;
@property(nonatomic) _Bool hasAppConfigRefreshRate;
@property(nonatomic) _Bool hasTrendingTopicsRefreshRate;
@property(nonatomic) _Bool hasAutoScrollToTopFeedTimeout;
@property(nonatomic) _Bool hasInitialArticlesFromNewFavorite;
@property(nonatomic) _Bool hasMinimumArticleUpdateInterval;
@property(nonatomic) _Bool hasTileProminenceScoreBalanceValue;
@property(readonly, nonatomic) _Bool hasPrefetchConfig;
@property(readonly, nonatomic) _Bool hasIadConfig;
@property(readonly, nonatomic) _Bool hasPersonalizationConfig;
- (id)endpointConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)endpointConfigsCount;
- (void)addEndpointConfigs:(id)arg1;
- (void)clearEndpointConfigs;
@property(nonatomic) _Bool hasPrerollLoadingTimeout;
@property(nonatomic) _Bool hasInterstitialAdLoadDelay;
@property(nonatomic) _Bool hasBatchedFeedTimeout;
@property(nonatomic) _Bool hasNewsletterSubscriptionChecked;
@property(nonatomic) _Bool hasLongReminderTime;
@property(nonatomic) _Bool hasShortReminderTime;
- (id)languageConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageConfigsCount;
- (void)addLanguageConfigs:(id)arg1;
- (void)clearLanguageConfigs;
@property(readonly, nonatomic) _Bool hasFallbackLanguageTag;
- (void)dealloc;

@end

