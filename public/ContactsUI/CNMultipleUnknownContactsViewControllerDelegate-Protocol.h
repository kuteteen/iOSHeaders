//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactProperty, CNMultipleUnknownContactsViewController;

@protocol CNMultipleUnknownContactsViewControllerDelegate <NSObject>
- (void)multipleUnknownContactsViewControllerDidComplete:(CNMultipleUnknownContactsViewController *)arg1;

@optional
- (_Bool)multipleUnknownContactsViewController:(CNMultipleUnknownContactsViewController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;
@end

