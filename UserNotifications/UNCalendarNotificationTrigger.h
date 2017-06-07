//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotifications/UNNotificationTrigger.h>

@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger
{
    NSDateComponents *_dateComponents;
}

+ (_Bool)supportsSecureCoding;
+ (id)triggerWithDateMatchingComponents:(id)arg1 repeats:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)nextTriggerDate;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithDateComponents:(id)arg1 repeats:(_Bool)arg2;

@end

