//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDCloudStoreManagerDelegate.h"
#import "PDPushNotificationConsumer.h"
#import "PDScheduledActivityClient.h"

@class CKServerChangeToken, NSHashTable, NSObject<OS_dispatch_queue>, NSSet, NSString, PDCloudStoreManager, PDPushNotificationManager, PKPaymentTransactionProcessor;

@interface PDCloudStoreNotificationCoordinator : NSObject <PDPushNotificationConsumer, PDCloudStoreManagerDelegate, PDScheduledActivityClient>
{
    NSHashTable *_observers;
    PDPushNotificationManager *_pushNotificationManager;
    id <PDCloudStoreDataSource> _cloudStoreDataSource;
    PKPaymentTransactionProcessor *_transactionProcessor;
    PDCloudStoreManager *_cloudStoreManager;
    CKServerChangeToken *_currentServerChangeToken;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_proactiveFetchQueue;
    NSSet *_pushTopics;
}

+ (_Bool)canInitalizeCloudStoreWithWebService:(id)arg1;
- (void).cxx_destruct;
- (void)_unregisterForPushNotifications;
- (void)_registerForPushNotifications;
- (void)applyPushNotificationToken:(id)arg1;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (id)pushNotificationTopics;
- (void)_unscheduleBackgroundContainerSetupActivities;
- (_Bool)_shouldScheduleInitalCloudStoreContainerSetupBackgroundActivity;
- (void)_scheduleFirstCloudStoreContainerSetupBackgroundActivityIfNeccessary;
- (void)_recordAggdCloudStoreBackgroundContainerSetupResult:(_Bool)arg1 forCurrentBackgroundInterval:(unsigned long long)arg2;
- (id)_backgroundActivityNameForBackgroundInterval:(unsigned long long)arg1;
- (double)_nextTimeIntervalForBackgroundInterval:(unsigned long long)arg1;
- (void)_scheduleCloudStoreContainerSetupBackgroundActivityWithNextInterval:(unsigned long long)arg1;
- (void)_performCloudStoreContainerInitalizationBackgroundActivityWithCurrentInterval:(unsigned long long)arg1 nextBackgroundInterval:(unsigned long long)arg2;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2 activityContext:(id)arg3;
- (_Bool)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1;
- (_Bool)canSyncTransactionToCloudKitWithBackingData:(_Bool)arg1 passUniqueIdentifier:(id)arg2 serviceIdentifier:(id)arg3;
- (void)simulateCloudStorePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithHandler:(CDUnknownBlockType)arg1;
- (void)allItemsOfClassType:(Class)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateCloudStore;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)requestUpdatesForPassUniqueIdenitifer:(id)arg1;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAndStoreChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)cloudStoreManagerShouldUnscheduleAllBackgroundActivities:(id)arg1;
- (void)cloudStoreManager:(id)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreManager:(id)arg1 createdZoneWithName:(id)arg2;
- (void)_cloudStoreInitializationAndShouldTryToScheudleBackgroundActivities:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cloudStoreInitializationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2 transactionProcessor:(id)arg3 initalizeCloudStoreManager:(_Bool)arg4;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2 transactionProcessor:(id)arg3;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

