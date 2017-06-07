//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKDayViewContent, EKEvent, NSArray;

@protocol EKDayViewContentDelegate <NSObject>
- (void)dayViewContent:(EKDayViewContent *)arg1 didTapInEmptySpaceOnDay:(double)arg2;
- (void)dayViewContent:(EKDayViewContent *)arg1 didTapPinnedOccurrence:(EKEvent *)arg2;

@optional
- (void)dayViewContent:(EKDayViewContent *)arg1 didSelectEvent:(EKEvent *)arg2;
- (void)occurrencePressed:(EKEvent *)arg1 onDay:(double)arg2;
- (void)dayViewContent:(EKDayViewContent *)arg1 didCreateOccurrenceViews:(NSArray *)arg2;
@end

