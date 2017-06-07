//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>

@class CNContactFormatter, CNContactStore, NSArray, NSMutableSet, NSString;
@protocol CNMultipleUnknownContactsViewControllerDelegate;

@interface CNMultipleUnknownContactsViewController : UITableViewController <CNContactViewControllerDelegate>
{
    CNContactStore *_contactStore;
    id <CNMultipleUnknownContactsViewControllerDelegate> _delegate;
    NSArray *_contacts;
    NSMutableSet *_createdContactIdentifiers;
    CNContactFormatter *_formatter;
}

+ (id)descriptorForRequiredKeys;
+ (id)contactFormatter;
@property(retain, nonatomic) CNContactFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSMutableSet *createdContactIdentifiers; // @synthesize createdContactIdentifiers=_createdContactIdentifiers;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) __weak id <CNMultipleUnknownContactsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_updatedContact:(id)arg1 withPropertiesFromContact:(id)arg2;
- (id)_existingMatchForUnknownContact:(id)arg1;
- (void)_presentUnknownContact:(id)arg1;
- (void)_addToExistingContacts:(id)arg1;
- (void)_createNewContacts:(id)arg1;
- (void)_didComplete;
- (void)_save:(id)arg1;
- (void)_showAddAllToContactsConfirmation;
- (void)viewDidLoad;
- (id)initWithContacts:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

