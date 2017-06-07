//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentCalendar, EKPersistentCalendarItem, NSDate, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EKPersistentResourceChange : EKPersistentObject
{
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
@property(readonly, nonatomic) unsigned int publicStatus;
@property(readonly, nonatomic) _Bool alerted;
@property(readonly, nonatomic) NSString *deletedTitle;
@property(readonly, nonatomic) unsigned int changedProperties;
@property(readonly, nonatomic) NSNumber *deleteCount;
@property(readonly, nonatomic) NSNumber *updateCount;
@property(readonly, nonatomic) NSNumber *createCount;
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) unsigned int changeType;
@property(readonly, copy, nonatomic) NSString *changedByLastName;
@property(readonly, copy, nonatomic) NSString *changedByFirstName;
@property(readonly, copy, nonatomic) NSURL *changedByAddress;
@property(readonly, copy, nonatomic) NSString *changedByDisplayName;
@property(readonly, retain, nonatomic) EKPersistentCalendarItem *calendarItem;
@property(readonly, retain, nonatomic) EKPersistentCalendar *calendar;

@end

