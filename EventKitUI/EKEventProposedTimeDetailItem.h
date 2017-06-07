//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EKEventProposedTimeDetailItem : EKEventDetailItem
{
    NSMutableDictionary *_cellForAttendee;
    NSArray *_attendeesWithProposedTimes;
}

- (void).cxx_destruct;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)attendeeForIndex:(unsigned long long)arg1;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (unsigned long long)numberOfSubitems;
- (void)_updateCellsIfNeededForWidth:(double)arg1;
- (void)setCellPosition:(int)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end

