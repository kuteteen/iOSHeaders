//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/EKDaemonConnectionDelegate-Protocol.h>

@class CADDatabaseInitializationOptions, EKAlarm, EKCalendar, EKDaemonConnection, EKDataProtectionObserver, EKObjectID, NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimeZone;
@protocol OS_dispatch_queue;

@interface EKEventStore : NSObject <EKDaemonConnectionDelegate>
{
    CADDatabaseInitializationOptions *_initializationOptions;
    EKObjectID *_localSourceID;
    EKObjectID *_defaultCalendarForNewEventsID;
    EKObjectID *_defaultCalendarForNewRemindersID;
    EKObjectID *_suggestedEventCalendarID;
    EKObjectID *_naturalLanguageSuggestedEventCalendarID;
    NSMutableDictionary *_calendars;
    NSMutableDictionary *_sources;
    NSMutableDictionary *_cachedValidatedAddresses;
    NSNumber *_defaultTimedAlarmOffset;
    NSNumber *_defaultAllDayAlarmOffset;
    unsigned int _flags;
    NSTimeZone *_timeZone;
    NSArray *_delegateSources;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_deletedObjects;
    NSMutableSet *_updatedObjects;
    NSMutableSet *_objectsPendingCommit;
    EKDaemonConnection *_database;
    double _lastDatabaseNotificationTimestamp;
    NSObject<OS_dispatch_queue> *_calendarSourcesAndDefaultsQueue;
    NSObject<OS_dispatch_queue> *_registeredQueue;
    NSObject<OS_dispatch_queue> *_unsavedChangesQueue;
    NSObject<OS_dispatch_queue> *_dbChangedQueue;
    NSObject<OS_dispatch_queue> *_constraintsCacheQueue;
    EKDataProtectionObserver *_dataProtectionObserver;
    NSMutableDictionary *__cachedConstraints;
    NSMutableDictionary *_registeredObjects;
}

+ (long long)currentSplashScreenVersion;
+ (id)sharedPreferences;
+ (id)eventStoreChangedDistributedNotificationName;
+ (long long)authorizationStatusForEntityType:(unsigned long long)arg1;
+ (unsigned long long)ekEventStoreInitOptionsFromCalDatabaseInitOptions:(int)arg1;
+ (int)calDatabaseInitOptionsFromEKEventStoreInitOptions:(unsigned long long)arg1;
+ (Class)publicClassForEntityName:(id)arg1;
+ (Class)classForEntityName:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *registeredObjects; // @synthesize registeredObjects=_registeredObjects;
@property(retain, nonatomic) NSMutableDictionary *_cachedConstraints; // @synthesize _cachedConstraints=__cachedConstraints;
@property(retain, nonatomic) EKDataProtectionObserver *dataProtectionObserver; // @synthesize dataProtectionObserver=_dataProtectionObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *constraintsCacheQueue; // @synthesize constraintsCacheQueue=_constraintsCacheQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dbChangedQueue; // @synthesize dbChangedQueue=_dbChangedQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *unsavedChangesQueue; // @synthesize unsavedChangesQueue=_unsavedChangesQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *registeredQueue; // @synthesize registeredQueue=_registeredQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calendarSourcesAndDefaultsQueue; // @synthesize calendarSourcesAndDefaultsQueue=_calendarSourcesAndDefaultsQueue;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) double lastDatabaseNotificationTimestamp; // @synthesize lastDatabaseNotificationTimestamp=_lastDatabaseNotificationTimestamp;
@property(retain, nonatomic) EKDaemonConnection *database; // @synthesize database=_database;
@property(retain, nonatomic) NSMutableSet *objectsPendingCommit; // @synthesize objectsPendingCommit=_objectsPendingCommit;
@property(retain, nonatomic) NSMutableSet *updatedObjects; // @synthesize updatedObjects=_updatedObjects;
@property(retain, nonatomic) NSMutableSet *deletedObjects; // @synthesize deletedObjects=_deletedObjects;
@property(retain, nonatomic) NSMutableSet *insertedObjects; // @synthesize insertedObjects=_insertedObjects;
@property(readonly, nonatomic) NSArray *delegateSources; // @synthesize delegateSources=_delegateSources;
- (void).cxx_destruct;
- (_Bool)shouldWhitelistOrganizerPhoneNumberFromJunkChecks:(id)arg1;
- (_Bool)shouldWhitelistOrganizerEmailFromJunkChecks:(id)arg1;
- (id)_fetchConstraintsForSourceWithObjectID:(id)arg1;
- (void)_clearCachedConstraintsForSourceWithObjectID:(id)arg1;
- (id)cachedConstraintsForSourceWithObjectID:(id)arg1;
- (id)cachedConstraintsForSource:(id)arg1;
- (_Bool)occurrencesExistInRangeForEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(_Bool)arg4 timezone:(id)arg5;
- (void)pushSpotlightUpdatesForCalendarItemUUIDs:(id)arg1;
- (unsigned long long)addressValidationStatus:(id)arg1;
- (void)cacheValidationStatusForAddress:(id)arg1 status:(unsigned long long)arg2;
- (void)purgeChangelog;
@property(readonly, nonatomic) EKAlarm *defaultAllDayAlarm;
@property(readonly, nonatomic) EKAlarm *defaultTimedAlarm;
- (void)clearSuperfluousChanges;
- (void)markChangedObjectIDsConsumedUpToToken:(long long)arg1;
- (void)fetchChangedObjectIDsSinceToken:(long long)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (long long)registerForDetailedChangeTracking:(id *)arg1;
- (id)predicateForIncompleteRemindersAndRemindersCompletedAfter:(id)arg1 inCalendar:(id)arg2;
- (id)predicateForMasterEventsWithInvitationsAndOccurrencesAfter:(id)arg1 inCalendar:(id)arg2;
- (id)predicateForMasterEventsWithOccurrencesWithStartDate:(id)arg1 endDate:(id)arg2 inCalendar:(id)arg3;
- (id)predicateForMasterEventsWithStartDate:(id)arg1 title:(id)arg2 inCalendar:(id)arg3;
- (id)predicateForCalendarItemsOfType:(unsigned long long)arg1 withExternalID:(id)arg2 inSource:(id)arg3;
- (id)predicateForCalendarItemsOfType:(unsigned long long)arg1 withExternalID:(id)arg2 inCalendar:(id)arg3;
- (id)predicateForCalendarItemsOfType:(unsigned long long)arg1 withUniqueIdentifier:(id)arg2 inSource:(id)arg3;
- (id)predicateForCalendarItemsOfType:(unsigned long long)arg1 withUniqueIdentifier:(id)arg2 inCalendar:(id)arg3;
- (id)predicateForMasterEventsWithExternalTrackingStatusInCalendar:(id)arg1;
- (id)predicateForCalendarItemsOfType:(unsigned long long)arg1 inCalendar:(id)arg2;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 matchingContacts:(id)arg4;
- (id)predicateForEventCreatedFromSuggestionWithOpaqueKey:(id)arg1;
- (id)predicateForNaturalLanguageSuggestedEventsWithSearchString:(id)arg1;
- (id)predicateForEventsWithStartDate:(id)arg1 title:(id)arg2 source:(id)arg3;
- (id)predicateForUpNextEventsInCalendars:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startDateRestrictionThreshold:(double)arg4;
- (id)predicateForPotentialTravelEventsInCalendars:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)travelEligibleEventsInCalendars:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (_Bool)hasImmediatelyEligibleTravelEvents;
- (id)predicateForMasterEventsInCalendars:(id)arg1;
- (id)predicateForUpcomingEventsWithLimit:(int)arg1;
- (id)predicateForUnalertedEvents;
- (id)predicateForUnacknowledgedEvents;
- (id)predicateForNotificationCenterVisibleEvents;
- (id)predicateForNotifiableEvents;
- (id)predicateForAssistantEventSearchWithTimeZone:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 notes:(id)arg6 participants:(id)arg7 calendars:(id)arg8 limit:(long long)arg9;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 loadDefaultProperties:(_Bool)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (void)vehicleTriggerAlarmOccurrencesWithCompletion:(CDUnknownBlockType)arg1;
- (void)locationBasedAlarmOccurrencesWithCompletion:(CDUnknownBlockType)arg1;
- (void)alarmOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 inCalendars:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)alarmWithUUID:(id)arg1;
- (void)cancelFetchRequest:(id)arg1;
- (id)objectsMatchingPredicate:(id)arg1;
- (id)fetchObjectsMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchEventsMatchingPredicate:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)eventsMatchingPredicate:(id)arg1;
- (void)_validateEventPredicate:(id)arg1;
- (_Bool)commit:(id *)arg1;
- (void)reset;
- (void)rollback;
- (void)_deleteObject:(id)arg1;
- (void)_insertObject:(id)arg1;
- (void)_trackModifiedObject:(id)arg1;
- (id)publicObjectWithFetchedObjectID:(id)arg1;
- (id)publicObjectWithObjectID:(id)arg1;
- (id)publicObjectWithPersistentObject:(id)arg1;
- (id)objectWithObjectID:(id)arg1;
- (_Bool)objectWithIDExists:(id)arg1;
- (id)registerFetchedObjectWithID:(id)arg1 withDefaultLoadedProperties:(id)arg2 inSet:(id)arg3;
- (id)registerFetchedObjectWithID:(id)arg1;
- (id)_addFetchedObjectWithID:(id)arg1;
- (void)_forgetRegisteredObjects;
- (void)_reregisterObject:(id)arg1 oldID:(id)arg2;
- (void)_unregisterObject:(id)arg1;
- (void)_registerObject:(id)arg1;
- (void)_registerObjectImmediate:(id)arg1;
- (void)refreshSourcesIfNecessary;
- (id)refreshSourcesIfNecessary:(_Bool)arg1;
- (_Bool)_refreshDASource:(id)arg1 isUserRequested:(_Bool)arg2;
- (_Bool)removeInviteReplyNotifications:(id)arg1 error:(id *)arg2;
- (_Bool)removeInviteReplyNotification:(id)arg1 error:(id *)arg2;
- (_Bool)markInviteReplyNotificationAlerted:(id)arg1;
- (id)inviteReplyNotifications;
@property(readonly, nonatomic) NSArray *reminderNotifications;
@property(readonly, nonatomic) NSArray *inboxRepliedSectionItems;
@property(readonly, nonatomic) NSArray *eventNotifications;
- (_Bool)removeResourceChangesForCalendarItem:(id)arg1 error:(id *)arg2;
- (_Bool)removeResourceChanges:(id)arg1 error:(id *)arg2;
- (_Bool)removeResourceChange:(id)arg1 error:(id *)arg2;
- (_Bool)markResourceChangeAlerted:(id)arg1 error:(id *)arg2;
- (id)resourceChangesForEntityTypes:(unsigned long long)arg1;
- (id)sharedCalendarInvitationsForEntityTypes:(unsigned long long)arg1;
- (id)earliestExpiringNotifiableEventEndDateAfterDate:(id)arg1 timeZone:(id)arg2;
@property(readonly, nonatomic) int notifiableEventCount;
@property(readonly, nonatomic) int unacknowledgedEventCount;
- (id)markNotificationsAlertedAndSave:(id)arg1;
@property(readonly, nonatomic) EKCalendar *naturalLanguageSuggestedEventCalendar;
- (_Bool)canModifySuggestedEventCalendar;
- (Class)_SGSuggestionsServiceClass;
- (void)deleteSuggestedEvent:(id)arg1;
- (void)acceptSuggestedEvent:(id)arg1;
- (void)confirmSuggestedEvent:(id)arg1;
- (void)removeSuggestedEventCalendar;
- (void)insertSuggestedEventCalendar;
@property(readonly, nonatomic) EKCalendar *suggestedEventCalendar;
- (void)rebuildOccurrenceCache;
@property(nonatomic) _Bool showDeclinedEvents;
- (id)scheduledTaskCacheFetchTasksOnDay:(id)arg1;
- (id)scheduledTaskCacheFetchDaysAndTaskCounts;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1 onDay:(double)arg2;
- (_Bool)occurrenceCacheOccurrencesAreBeingGenerated;
- (id)remindersWithContactIdentifier:(id)arg1;
- (long long)countOfRemindersWithContactIdentifier:(id)arg1;
- (void)removeContactIdentifier:(id)arg1 forCalendarItem:(id)arg2;
- (void)addContactIdentifier:(id)arg1 forCalendarItem:(id)arg2;
- (id)contactIdentifierForCalendarItem:(id)arg1;
- (id)birthdayContactIdentifierForEvent:(id)arg1;
- (id)calendarWithExternalURI:(id)arg1;
- (id)calendarWithIdentifier:(id)arg1;
- (id)doEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2;
- (id)closestCachedOccurrenceToDate:(double)arg1 forEventUID:(int)arg2;
- (id)eventWithUUID:(id)arg1;
- (_Bool)fetchProperties:(id)arg1 forReminders:(id)arg2;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(_Bool)arg3 completed:(_Bool)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 maxResults:(unsigned long long)arg9;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(_Bool)arg3 completed:(_Bool)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8;
- (id)predicateForRemindersWithSearchTerm:(id)arg1;
- (id)predicateForCompletedRemindersWithCalendars:(id)arg1;
- (id)predicateForRemindersWithTitle:(id)arg1 calendars:(id)arg2;
- (id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForAllRemindersWithDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForPreloadedCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 preloadProperties:(id)arg4;
- (id)predicateForCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForPreloadedIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 preloadProperties:(id)arg4;
- (id)predicateForIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(_Bool)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(_Bool)arg4 completed:(_Bool)arg5 includeDatesBefore:(_Bool)arg6 sortOrder:(int)arg7 preloadProperties:(id)arg8;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForIncompleteRemindersDueBeforeOrOnExactDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForRemindersInCalendars:(id)arg1;
- (id)fetchRemindersMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)countOfRemindersMatchingPredicate:(id)arg1;
- (id)remindersMatchingPredicate:(id)arg1;
- (void)_validateReminderPredicate:(id)arg1;
- (id)_calendarItemsMatchingPredicate:(id)arg1;
- (id)remindersWithExternalIdentifier:(id)arg1 inCalendars:(id)arg2;
- (id)eventsWithExternalIdentifier:(id)arg1 inCalendars:(id)arg2;
- (id)calendarItemsWithExternalIdentifier:(id)arg1 inCalendars:(id)arg2;
- (id)calendarItemsWithExternalIdentifier:(id)arg1;
- (id)_calendarItemsWithExternalIdentifier:(id)arg1 inCalendars:(id)arg2 entityTypes:(unsigned long long)arg3;
- (id)calendarItemWithIdentifier:(id)arg1;
- (id)calendarItemsWithUniqueIdentifier:(id)arg1 inCalendar:(id)arg2;
- (id)reminderWithExternalURI:(id)arg1;
- (_Bool)removeReminder:(id)arg1 commit:(_Bool)arg2 error:(id *)arg3;
- (_Bool)removeReminder:(id)arg1 error:(id *)arg2;
- (_Bool)saveReminder:(id)arg1 commit:(_Bool)arg2 error:(id *)arg3;
- (_Bool)saveReminder:(id)arg1 error:(id *)arg2;
- (void)setDefaultCalendarForNewReminders:(id)arg1;
- (id)defaultCalendarForNewReminders;
- (id)acquireDefaultCalendarForNewReminders;
@property(retain, nonatomic) EKCalendar *defaultCalendarForNewEvents;
- (id)acquireDefaultCalendarForNewEvents;
- (id)defaultLocalCalendar;
- (struct CGColor *)copyCGColorForNewCalendar;
- (id)ICSDataForCalendarItems:(id)arg1 preventLineFolding:(_Bool)arg2;
- (id)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3;
- (void)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)importICS:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3;
- (_Bool)markEventAlerted:(id)arg1;
- (_Bool)setInvitationStatus:(unsigned long long)arg1 forEvents:(id)arg2 error:(id *)arg3;
- (_Bool)setInvitationStatus:(unsigned long long)arg1 forEvent:(id)arg2 error:(id *)arg3;
- (_Bool)removeEvent:(id)arg1 span:(long long)arg2 commit:(_Bool)arg3 error:(id *)arg4;
- (_Bool)saveEvent:(id)arg1 span:(long long)arg2 commit:(_Bool)arg3 error:(id *)arg4;
- (_Bool)removeEvent:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (_Bool)saveEvent:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (id)eventWithUniqueId:(id)arg1 occurrenceDate:(id)arg2;
- (id)eventWithUniqueId:(id)arg1;
- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2 checkValid:(_Bool)arg3;
- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2;
- (id)_eventOccurrenceWithURI:(id)arg1;
- (id)_eventWithURI:(id)arg1 checkValid:(_Bool)arg2;
- (_Bool)_parseURI:(id)arg1 expectedScheme:(id)arg2 identifier:(id *)arg3 options:(id *)arg4;
- (id)eventWithIdentifier:(id)arg1;
- (_Bool)deleteCalendar:(id)arg1 forEntityType:(int)arg2 error:(id *)arg3;
- (_Bool)removeCalendar:(id)arg1 commit:(_Bool)arg2 error:(id *)arg3;
- (_Bool)saveCalendar:(id)arg1 commit:(_Bool)arg2 error:(id *)arg3;
- (_Bool)removeCalendar:(id)arg1 error:(id *)arg2;
- (_Bool)saveCalendar:(id)arg1 error:(id *)arg2;
- (void)_addObjectToPendingCommits:(id)arg1;
- (id)calendarWithID:(id)arg1;
- (id)readWriteCalendarsForEntityType:(unsigned long long)arg1;
- (int)readWriteCalendarCountForEntityType:(unsigned long long)arg1;
- (_Bool)_calendar:(id)arg1 supportsEntityType:(unsigned long long)arg2;
- (id)_deletableCalendars;
- (id)_allCalendars;
- (void)_loadCalendarsIfNeeded;
- (void)_cacheCalendarWithObjectID:(id)arg1 withDefaultLoadedProperties:(id)arg2;
- (void)_logMainThreadFetchWarningIfNeeded;
- (id)calendarsForEntityType:(unsigned long long)arg1;
- (_Bool)markCalendarAlerted:(id)arg1;
- (_Bool)hideCalendarsFromNotificationCenter:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *calendars;
- (_Bool)removeSource:(id)arg1 commit:(_Bool)arg2 error:(id *)arg3;
- (_Bool)saveSource:(id)arg1 commit:(_Bool)arg2 error:(id *)arg3;
- (id)sourceWithExternalID:(id)arg1;
- (id)sourceWithIdentifier:(id)arg1;
- (id)ownedSources;
- (id)localSource;
- (id)_deletableSources;
@property(readonly, nonatomic) NSArray *sources;
- (void)_loadSourcesIfNeeded;
- (void)_cacheSourceWithObjectID:(id)arg1;
- (id)_sourceWithID:(id)arg1;
@property(readonly, nonatomic) _Bool automaticLocationGeocodingAllowed;
- (void)_saveWithoutNotify;
@property(readonly, nonatomic) NSString *eventStoreIdentifier;
- (void)daemonRestarted;
- (void)_defaultAlarmChangedExternally;
- (void)_defaultCalendarChangedExternally;
- (void)_databaseChangedExternally;
- (void)_validateObjectIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)changesSinceSequenceNumber:(int)arg1;
- (int)sequenceNumber;
- (void)_simulateDaemonCrashForUnitTests;
- (_Bool)_isUnitTesting;
- (void)_setIsUnitTesting:(_Bool)arg1;
- (void)setSourceAccountManagement:(int)arg1;
@property(readonly) EKDaemonConnection *connection;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSString *databasePath;
- (_Bool)canModifyCalendarDatabase;
- (void)_accessStatusChanged;
@property(readonly, nonatomic) _Bool isDataProtected;
- (void)requestAccessToEntityType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestAccessForEntityType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithOptions:(int)arg1 path:(id)arg2 clientIDSuffix:(id)arg3 enablePropertyModificationLogging:(_Bool)arg4;
- (id)initWithEKOptions:(unsigned long long)arg1 path:(id)arg2 clientIDSuffix:(id)arg3 enablePropertyModificationLogging:(_Bool)arg4;
- (id)initWithOptions:(int)arg1 path:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

