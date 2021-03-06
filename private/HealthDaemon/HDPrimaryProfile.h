//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDProfile.h>

@class HDAWDSubmissionManager, HDAppSubscriptionManager, HDCloudSyncManager, HDCurrentActivitySummaryHelper, HDDataCollectionManager, HDFitnessMachineManager, HDHealthServiceManager, HDNanoSyncManager, HDNotificationManager, HDServiceConnectionManager, HDWorkoutManager;

@interface HDPrimaryProfile : HDProfile
{
    HDAppSubscriptionManager *_appSubscriptionManager;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDCloudSyncManager *_cloudSyncManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    HDDataCollectionManager *_dataCollectionManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDNotificationManager *_notificationManager;
    HDHealthServiceManager *_serviceManager;
    HDServiceConnectionManager *_serviceConnectionManager;
    HDWorkoutManager *_workoutManager;
}

- (void).cxx_destruct;
- (void)_applyPPTUpdates;
- (id)_newWorkoutManager;
- (id)_newNotificationManager;
- (id)_newNanoSyncManager;
- (id)_newCloudSyncManager;
- (id)_newAWDSubmissionManager;
- (id)_newAppSubscriptionManager;
- (id)serviceManager;
- (id)serviceConnectionManager;
- (id)notificationManager;
- (id)nanoSyncManager;
- (id)fitnessMachineManager;
- (id)workoutManager;
- (id)dataCollectionManager;
- (id)currentActivitySummaryHelper;
- (id)cloudSyncManager;
- (id)awdSubmissionManager;
- (id)appSubscriptionManager;
- (void)terminationCleanup;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3;

@end

