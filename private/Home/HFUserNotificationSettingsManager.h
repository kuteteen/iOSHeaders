//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NAFuture, NSHashTable, UNUserNotificationCenter;

@interface HFUserNotificationSettingsManager : NSObject
{
    UNUserNotificationCenter *_userNotificationCenter;
    NAFuture *_notificationSettingsFuture;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NAFuture *notificationSettingsFuture; // @synthesize notificationSettingsFuture=_notificationSettingsFuture;
@property(retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
- (void).cxx_destruct;
- (id)notificationSettings;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

