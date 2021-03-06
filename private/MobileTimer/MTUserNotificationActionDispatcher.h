//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UNUserNotificationCenterDelegate.h"

@class MTAlarmManager, MTTimerManager, NSString, UNUserNotificationCenter;

@interface MTUserNotificationActionDispatcher : NSObject <UNUserNotificationCenterDelegate>
{
    MTAlarmManager *_alarmManager;
    MTTimerManager *_timerManager;
    UNUserNotificationCenter *_notificationCenter;
}

+ (unsigned long long)_timerNotificationActionForUserNotificationAction:(id)arg1;
+ (unsigned long long)_alarmNotificationActionForUserNotificationAction:(id)arg1;
+ (void)warmUp;
@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) __weak MTTimerManager *timerManager; // @synthesize timerManager=_timerManager;
@property(nonatomic) __weak MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
- (void).cxx_destruct;
- (void)_handleTimerNotificationResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handleAlarmNotificationResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithTimerManager:(id)arg1;
- (id)initWithAlarmManager:(id)arg1;
- (id)initWithAlarmManager:(id)arg1 timerManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

