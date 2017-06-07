//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AddressBookUI/UITableViewDataSource-Protocol.h>
#import <AddressBookUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString;
@protocol ABMembersDataSourceDelegate, ABStyleProvider;

@interface ABMembersFilteredDataSource : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    NSMapTable *_records;
    NSMapTable *_sectionTitles;
    void *_addressBook;
    id <ABMembersDataSourceDelegate> _delegate;
    id <ABStyleProvider> _styleProvider;
    _Bool _isInPopover;
}

@property(nonatomic) _Bool isInPopover; // @synthesize isInPopover=_isInPopover;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(nonatomic) id <ABMembersDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)removeAllRecords;
- (void)addRecords:(id)arg1 toSection:(long long)arg2;
- (id)titleForSection:(long long)arg1;
- (void)setTitle:(id)arg1 forSection:(long long)arg2;
- (id)sectionArrayAtIndex:(long long)arg1;
- (unsigned long long)count;
@property(readonly, nonatomic) NSArray *records;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

