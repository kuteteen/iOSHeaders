//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumberFormatter;

@interface EKUIEventDescriptionGenerator : NSObject
{
    struct __CFDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
}

- (void).cxx_destruct;
- (_Bool)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2;
- (id)_adjustedMinutesTillEventStarts:(id)arg1;
- (id)timeStringForEvent:(id)arg1 forBeginningOfSentence:(_Bool)arg2 useExplicitTimes:(_Bool)arg3 followingComma:(_Bool)arg4;
- (id)_attendeesForEvent:(id)arg1 sorted:(_Bool)arg2 limitedTo:(long long)arg3;
- (id)naturalLanguageDescriptionForAttendees:(id)arg1;
- (void)dealloc;
- (id)_sharedNumberFormatter;
- (struct __CFDateFormatter *)_sharedDateFormatter;

@end

