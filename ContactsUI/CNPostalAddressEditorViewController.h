//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ContactsUI/CNPresenterDelegate-Protocol.h>
#import <ContactsUI/CNPropertyCellDelegate-Protocol.h>

@class CNCardPropertyGroup, CNMutableContact, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPostalAddressEditorViewController : UITableViewController <CNPresenterDelegate, CNPropertyCellDelegate>
{
    NSMutableArray *_propertyItems;
    NSString *_propertyKey;
    CNMutableContact *_contact;
    CNCardPropertyGroup *_propertyGroup;
    _Bool _editNames;
    _Bool _editingExistingContact;
}

+ (id)cellIdentifierForClass:(Class)arg1;
+ (id)cellIdentifierForEditingProperty:(id)arg1;
- (void).cxx_destruct;
- (id)displayAccountForContact:(id)arg1;
- (id)defaultValueForPropertyCell:(id)arg1;
- (id)storeForPropertyCell:(id)arg1;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
@property(readonly) _Bool isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)registerContactCellClass:(Class)arg1;
- (void)_startEditingFirstCell;
- (void)validateContents;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_rebuildPropertyGroupItems:(_Bool)arg1;
- (double)tableViewSpacingForExtraSeparators:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

