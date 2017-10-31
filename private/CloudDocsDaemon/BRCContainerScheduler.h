//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"
#import "BRCAppLibraryDelegate.h"
#import "BRCClientZoneDelegate.h"

@class APSConnection, BRCAccountSession, BRCContainerMetadataSyncPersistedState, BRCDeadlineScheduler, BRCDeadlineSource, BRCFairSource, BRCMigrateZonePCSOperation, BRCSyncBudgetThrottle, BRCZoneHealthSyncPersistedState, NSData, NSDate, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCClientZoneDelegate, BRCAppLibraryDelegate>
{
    BRCAccountSession *_session;
    BRCDeadlineSource *_containerMetadataSyncSource;
    BRCDeadlineSource *_sharedDatabaseSyncSource;
    BRCDeadlineSource *_zoneHealthSyncSource;
    BRCFairSource *_pushSource;
    NSString *_environmentName;
    NSData *_pushToken;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushQueue;
    BRCContainerMetadataSyncPersistedState *_containerMetadataPersistedState;
    unsigned int _containerMetadataSyncState;
    struct _BRCOperation *_containerMetadataSyncOperation;
    unsigned int _sharedDBSyncState;
    struct _BRCOperation *_sharedDatabaseSyncOperation;
    BRCZoneHealthSyncPersistedState *_zoneHealthPersistedState;
    unsigned int _zoneHealthSyncState;
    struct _BRCOperation *_zoneHealthSyncOperation;
    struct _BRCOperation *_periodicSyncOperation;
    NSDate *_lastPeriodicSyncDate;
    BRCMigrateZonePCSOperation *_migrateZonePCSOperation;
    BRCDeadlineSource *_migrateZonePCSSource;
    NSMutableArray *_nextZoneHealthSyncDownBarriers;
    NSObject<OS_dispatch_group> *_initialSyncDownGroup;
    NSObject<OS_dispatch_group> *_syncGroup;
    BRCSyncBudgetThrottle *_syncUpBudget;
    BRCDeadlineScheduler *_syncScheduler;
}

@property(readonly, nonatomic) BRCZoneHealthSyncPersistedState *zoneHealthSyncPersistedState; // @synthesize zoneHealthSyncPersistedState=_zoneHealthPersistedState;
@property(readonly, nonatomic) BRCDeadlineScheduler *syncScheduler; // @synthesize syncScheduler=_syncScheduler;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) BRCSyncBudgetThrottle *syncUpBudget; // @synthesize syncUpBudget=_syncUpBudget;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *syncGroup; // @synthesize syncGroup=_syncGroup;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *initialSyncDownGroup; // @synthesize initialSyncDownGroup=_initialSyncDownGroup;
- (void).cxx_destruct;
- (void)notifyAfterNextZoneHealthSyncDown:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)_updatePushTopicsRegistration;
- (void)refreshPushRegistrationAfterAppsListChanged;
- (void)_scheduleUpdatePushTopicsRegistration;
- (void)syncContextDidBecomeBackground:(id)arg1;
- (void)syncContextDidBecomeForeground:(id)arg1;
- (void)_scheduleCrossZoneMovePCSPrep;
- (void)finishedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2;
- (void)receivedUpdatedZoneHealthServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (void)dumpToContext:(id)arg1 includeAllItems:(_Bool)arg2 db:(id)arg3;
- (void)_syncScheduleForZoneHealth;
- (void)_syncScheduleForSharedDatabase;
- (void)_syncScheduleForContainersMetadata;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1;
- (void)didChangeSyncStatusForZoneHealthForContainer:(id)arg1;
- (void)redoZonePCSPreperation;
- (void)scheduleSyncDownForZoneHealthWithGroup:(id)arg1;
- (void)scheduleSyncDownForSharedDatabaseImmediately:(_Bool)arg1;
- (void)scheduleSyncDownForContainerMetadataWithGroup:(id)arg1;
- (void)didInitialSyncDownForClientZone:(id)arg1;
- (void)willInitialSyncDownForClientZone:(id)arg1;
- (void)resume;
- (void)schedulePeriodicSyncIfNecessaryInGroup:(id)arg1;
- (void)setup;
- (void)close;
- (void)closeContainers;
- (void)_unscheduleClientZone:(id)arg1;
- (id)_newSyncDeadlineSourceWithName:(id)arg1;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

