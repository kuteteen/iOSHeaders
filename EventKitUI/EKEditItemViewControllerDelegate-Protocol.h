//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEditItemViewController;

@protocol EKEditItemViewControllerDelegate <NSObject>
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewController:(EKEditItemViewController *)arg1 didCompleteWithAction:(int)arg2;

@optional
- (_Bool)editItemIsExternallyOrganized;
- (void)editItemViewControllerWantsKeyboardPinned:(_Bool)arg1;
- (_Bool)editItemViewControllerSave:(EKEditItemViewController *)arg1;
@end

