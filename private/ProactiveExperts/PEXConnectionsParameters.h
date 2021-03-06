//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface PEXConnectionsParameters : NSObject
{
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_assets_sem;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)donationBlacklistApps;
- (id)donationWhitelistApps;
- (id)donationBlacklistWebsites;
- (id)donationWhitelistWebsites;
- (id)locationPredictionBlacklistApps;
- (_Bool)shouldUseWhitelistApps;
- (_Bool)shouldUseWhitelistWebsite;
- (double)locationAppLastUseTimeoutSeconds;
- (double)pasteboardItemExpirySeconds;
- (double)linguisticTriggerExpirySeconds;
- (long long)locationAppPredictionOverallLaunchFactor;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (long long)locationAppPredictionInstallMaxScore;
- (long long)locationAppPredictionInstallHalflife;
- (long long)appSwitcherPredictionExpiry;
- (double)userActivityCandidateScore;
- (unsigned long long)userActivityBatchSize;
- (unsigned long long)quickTypePredictionLimit;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (double)userActivityExpirySeconds;
- (long long)expirySeconds;
- (_Bool)boolValueForKey:(id)arg1 default:(_Bool)arg2;
- (double)doubleValueForKey:(id)arg1 default:(long long)arg2;
- (long long)integerValueForKey:(id)arg1 default:(long long)arg2;
- (long long)unsignedIntegerValueForKey:(id)arg1 default:(long long)arg2;
- (id)assetValueForKey:(id)arg1;
- (id)init;

@end

