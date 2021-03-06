//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import "HFAccessoryObserver.h"
#import "HFAccessorySettingMobileTimerAdapterObserver.h"
#import "HFMediaObjectObserver.h"
#import "HUAlarmEditViewControllerDelegate.h"
#import "HUHomePodAlarmItemModuleControllerDelegate.h"
#import "HUPresentationDelegateHost.h"

@class HUHomePodAlarmItemModuleController, MTAlarm, NSString, UIBarButtonItem, _UIContentUnavailableView;

@interface HUAlarmTableViewController : HUItemTableViewController <HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HFAccessoryObserver, HFMediaObjectObserver, HFAccessorySettingMobileTimerAdapterObserver, HUPresentationDelegateHost>
{
    _Bool _isAccessoryControllable;
    _Bool _isAlarmsSettingReady;
    id <HUPresentationDelegate> _presentationDelegate;
    UIBarButtonItem *_doneButtonItem;
    HUHomePodAlarmItemModuleController *_alarmModuleController;
    MTAlarm *_alarmToEdit;
    _UIContentUnavailableView *_noItemsView;
    UIBarButtonItem *_addButtonItem;
    UIBarButtonItem *_editDoneButtonItem;
    id <HFMediaProfileContainer> _mediaProfileContainer;
}

@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property(readonly, nonatomic) _Bool isAlarmsSettingReady; // @synthesize isAlarmsSettingReady=_isAlarmsSettingReady;
@property(readonly, nonatomic) _Bool isAccessoryControllable; // @synthesize isAccessoryControllable=_isAccessoryControllable;
@property(retain, nonatomic) UIBarButtonItem *editDoneButtonItem; // @synthesize editDoneButtonItem=_editDoneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *addButtonItem; // @synthesize addButtonItem=_addButtonItem;
@property(retain, nonatomic) _UIContentUnavailableView *noItemsView; // @synthesize noItemsView=_noItemsView;
@property(retain, nonatomic) MTAlarm *alarmToEdit; // @synthesize alarmToEdit=_alarmToEdit;
@property(retain, nonatomic) HUHomePodAlarmItemModuleController *alarmModuleController; // @synthesize alarmModuleController=_alarmModuleController;
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)mobileTimerAdapterDidUpdateReadiness:(id)arg1;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)_updateAccessoryControllable:(_Bool)arg1 alarmsSettingReady:(_Bool)arg2;
- (void)_discernReachabilityForAccessory:(id)arg1;
- (void)_updateNavigationItems:(_Bool)arg1;
- (void)_numberOfItemsDidChangeAnimated:(_Bool)arg1;
- (void)_layoutNoItemsLabel;
- (id)backgroundView;
- (void)_doneAction:(id)arg1;
- (void)_editDoneAction:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;
- (void)alarmEditControllerDidCancel:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)_tableView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)editViewControllerForAlarm:(id)arg1;
- (void)alarmItemModuleController:(id)arg1 didSelectAlarm:(id)arg2;
- (void)_showAddView:(id)arg1;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (id)alarmItemManager;
- (id)itemModuleControllers;
- (id)initWithMediaProfileContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

