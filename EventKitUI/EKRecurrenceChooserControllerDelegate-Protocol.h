//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKRecurrenceChooserController;

@protocol EKRecurrenceChooserControllerDelegate <NSObject>
- (void)recurrenceChooser:(EKRecurrenceChooserController *)arg1 wantsRowReload:(long long)arg2;
- (void)recurrenceChooserUpdated:(EKRecurrenceChooserController *)arg1;
- (void)recurrenceChooserWantsReload:(EKRecurrenceChooserController *)arg1;
@end

