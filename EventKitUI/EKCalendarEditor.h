//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKCalendarEditItemDelegate-Protocol.h>

@class EKCalendar, EKCalendarShareesEditItem, EKEventStore, EKSource, NSArray, NSString, UITableView;
@protocol EKCalendarEditorDelegate, EKStyleProvider;

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate>
{
    UITableView *_tableView;
    NSArray *_editItems;
    EKCalendarShareesEditItem *_shareesEditItem;
    EKSource *_source;
    unsigned long long _entityType;
    _Bool _isNewCalendar;
    EKEventStore *_eventStore;
    EKCalendar *_calendar;
    id <EKCalendarEditorDelegate> _delegate;
    id <EKStyleProvider> _styleProvider;
}

@property(nonatomic) __weak id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) _Bool isNewCalendar; // @synthesize isNewCalendar=_isNewCalendar;
@property(nonatomic) __weak id <EKCalendarEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView;
- (id)owningNavigationController;
- (int)sectionForCalendarEditItem:(id)arg1;
- (void)calendarItemStartedEditing:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)_deleteCalendar;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_presentValidationAlert:(id)arg1;
- (id)_editItems;
- (void)setupForCalendar;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)_shouldShowDeleteButton;
- (void)_eventStoreChanged:(id)arg1;
- (void)_localeChanged;
- (void)dealloc;
- (id)initWithSource:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

