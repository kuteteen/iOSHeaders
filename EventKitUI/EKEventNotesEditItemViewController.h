//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class CalendarNotesCell, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface EKEventNotesEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_table;
    CalendarNotesCell *_cell;
    NSString *_text;
}

- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)validateAllowingAlert:(_Bool)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
@property(copy, nonatomic) NSString *noteText;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

