//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKCalendarItem.h>

@class NSDate, NSDateComponents;

@interface EKReminder : EKCalendarItem
{
    _Bool _hadRecurrences;
}

+ (void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2;
+ (id)reminderWithEventStore:(id)arg1;
- (id)startDateForRecurrence;
- (id)bestDisplayAlarm;
- (_Bool)commit:(id *)arg1;
- (_Bool)validate:(id *)arg1;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (void)clearParentID;
- (id)parentID;
@property(nonatomic, getter=isCompleted) _Bool completed;
- (id)description;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (unsigned long long)displayOrder;
- (void)setFirstAlertDate:(id)arg1;
- (id)firstAlertDate;
- (void)setHadRecurrences:(_Bool)arg1;
- (_Bool)hadRecurrences;
@property(copy, nonatomic) NSDate *completionDate;
- (void)setTimeZone:(id)arg1;
@property(copy, nonatomic) NSDateComponents *dueDateComponents;
- (void)setDueDate:(id)arg1;
- (id)dueDate;
@property(copy, nonatomic) NSDateComponents *startDateComponents;
- (id)externalURI;
- (id)reminderIdentifier;
- (void)_sendModifiedNote;
- (id)_persistentReminder;
- (id)initWithPersistentObject:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned long long priority; // @dynamic priority;

@end

