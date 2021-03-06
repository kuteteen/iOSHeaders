//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UNSNotificationSchedulerDelegate.h"

@class NSArray, NSHashTable, NSMutableArray, NSString, ObjectUpdates, UNSNotificationScheduler;

@interface ClockManager : NSObject <UNSNotificationSchedulerDelegate>
{
    _Bool _performingUpgrade;
    NSMutableArray *_scheduledLocalNotifications;
    ObjectUpdates *_localNotificationUpdates;
    _Bool runningInAssistantPlugin;
    _Bool ignoringNotificationPostRequests;
    UNSNotificationScheduler *_notificationScheduler;
    NSHashTable *_notificationObservers;
}

+ (id)sharedManager;
+ (int)sectionFromClockAppURL:(id)arg1;
+ (id)urlForClockAppSection:(int)arg1;
+ (void)saveAndNotifyForUserPreferences:(_Bool)arg1 localNotifications:(_Bool)arg2;
+ (void)loadUserPreferences;
@property(retain, nonatomic) NSHashTable *notificationObservers; // @synthesize notificationObservers=_notificationObservers;
@property(retain, nonatomic) UNSNotificationScheduler *notificationScheduler; // @synthesize notificationScheduler=_notificationScheduler;
@property(nonatomic, getter=isIgnoringNotificationPostRequests) _Bool ignoringNotificationPostRequests; // @synthesize ignoringNotificationPostRequests;
@property(nonatomic, getter=isRunningInAssistantPlugin) _Bool runningInAssistantPlugin; // @synthesize runningInAssistantPlugin;
- (void).cxx_destruct;
- (void)notificationScheduler:(id)arg1 didFireLocalNotifications:(id)arg2;
- (void)notificationScheduler:(id)arg1 didChangeScheduledLocalNotifications:(id)arg2;
@property(readonly, nonatomic) ObjectUpdates *updatesToLocalNotificationsCache;
@property(readonly, nonatomic) NSArray *scheduledLocalNotificationsCache;
- (void)resetUpdatesToLocalNotificationsCache;
- (void)_refreshScheduledLocalNotificationsCacheWithNotifications:(id)arg1;
- (void)refreshScheduledLocalNotificationsCache;
- (void)refreshScheduledLocalNotificationsCacheAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelAllNotifications;
- (void)cancelLocalNotifications:(id)arg1;
- (void)cancelLocalNotification:(id)arg1;
- (void)scheduleLocalNotifications:(id)arg1;
- (void)scheduleLocalNotification:(id)arg1;
- (_Bool)containsRemovedNotification:(id)arg1;
- (void)postUserPreferencesChangedNotification;
- (void)removeNotificationObserver:(id)arg1;
- (void)addNotificationObserver:(id)arg1;
- (_Bool)discardOldVersion;
- (_Bool)upgrade;
- (_Bool)upgradeIfNeverAttempted;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

