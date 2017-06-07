//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookUI/ABPickerViewController.h>

#import <AddressBookUI/ABSimpleTextInputViewControllerDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSString;

@interface ABServicePickerViewController : ABPickerViewController <ABSimpleTextInputViewControllerDelegate>
{
    NSString *_selectedService;
    NSString *_customService;
    NSArray *_defaultServices;
    NSIndexPath *_selectedIndexPath;
}

+ (id)defaultService;
+ (id)defaultServices;
@property(copy, nonatomic) NSString *selectedService; // @synthesize selectedService=_selectedService;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)addCustomServicePlaceholder;
- (id)addCustomServiceButtonLabel;
- (id)addCustomServiceTitle;
- (id)selectServiceTitle;
- (void)setStyleProvider:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

