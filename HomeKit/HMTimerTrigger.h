//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMTrigger.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSCalendar, NSDate, NSDateComponents, NSString, NSTimeZone;

@interface HMTimerTrigger : HMTrigger <NSSecureCoding>
{
    NSArray *_recurrences;
    NSString *_significantEvent;
    NSDateComponents *_significantEventOffset;
    NSDate *_fireDate;
    NSTimeZone *_timeZone;
    NSDateComponents *_recurrence;
    NSCalendar *_recurrenceCalendar;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSCalendar *recurrenceCalendar; // @synthesize recurrenceCalendar=_recurrenceCalendar;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_handleTriggerFired:(id)arg1;
- (void)_handleScheduleChangedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateRecurrence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecurrence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateSignificantEventOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSignificantEventOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateTimeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateTimeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateFireDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateFireDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)setSignificantEventOffset:(id)arg1;
@property(readonly, copy, nonatomic) NSDateComponents *significantEventOffset; // @synthesize significantEventOffset=_significantEventOffset;
- (void)setSignificantEvent:(id)arg1;
@property(readonly, copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (void)setRecurrences:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(copy, nonatomic) NSDateComponents *recurrence; // @synthesize recurrence=_recurrence;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (id)initWithName:(id)arg1 significantEvent:(id)arg2 significantEventOffset:(id)arg3 recurrences:(id)arg4;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrences:(id)arg4;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 recurrenceCalendar:(id)arg5;
- (id)init;

@end

