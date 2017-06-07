//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSCalendar, NSLocale, NSObject, NSString, NSTimeZone;
@protocol OS_dispatch_semaphore;

@interface NSDateIntervalFormatter : NSFormatter
{
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSTimeZone *_timeZone;
    NSString *_dateTemplate;
    NSString *_dateTemplateFromStyles;
    void *_formatter;
    unsigned long long _dateStyle;
    unsigned long long _timeStyle;
    _Bool _modified;
    _Bool _useTemplate;
    NSObject<OS_dispatch_semaphore> *_lock;
    void *_reserved[4];
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (_Bool)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)editingStringForObjectValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)_stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDateInterval:(id)arg1;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (void)setBoundaryStyle:(unsigned long long)arg1;
- (unsigned long long)boundaryStyle;
@property unsigned long long timeStyle;
@property unsigned long long dateStyle;
@property(copy) NSString *dateTemplate;
@property(copy) NSTimeZone *timeZone;
@property(copy) NSCalendar *calendar;
@property(copy) NSLocale *locale;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

