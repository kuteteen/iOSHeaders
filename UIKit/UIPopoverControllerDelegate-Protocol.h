//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIPopoverController;

@protocol UIPopoverControllerDelegate <NSObject>

@optional
- (void)popoverController:(UIPopoverController *)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg1;
- (_Bool)popoverControllerShouldDismissPopover:(UIPopoverController *)arg1;
@end

