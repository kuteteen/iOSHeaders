//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HomeUI/MPMediaPickerControllerDelegate-Protocol.h>

@class HUAlarmTonesManager, MPMediaPickerController, NSIndexPath, NSMutableArray, NSNumber, NSString;
@protocol HUAlarmTonePickerDelegate;

@interface HUAlarmTonePickerViewController : UITableViewController <MPMediaPickerControllerDelegate>
{
    NSString *_selectedToneIdentifier;
    NSNumber *_selectedMediaIdentifier;
    NSString *_loggedInAppleMusicAccountDSID;
    id <HUAlarmTonePickerDelegate> _delegate;
    NSMutableArray *_toneIdentifiers;
    NSMutableArray *_mediaItemIdentifiers;
    MPMediaPickerController *_mediaPickerController;
    NSIndexPath *_currentlySelectedIndexPath;
    HUAlarmTonesManager *_toneManager;
}

@property(readonly, nonatomic) HUAlarmTonesManager *toneManager; // @synthesize toneManager=_toneManager;
@property(copy, nonatomic) NSIndexPath *currentlySelectedIndexPath; // @synthesize currentlySelectedIndexPath=_currentlySelectedIndexPath;
@property(readonly, nonatomic) MPMediaPickerController *mediaPickerController; // @synthesize mediaPickerController=_mediaPickerController;
@property(readonly, nonatomic) NSMutableArray *mediaItemIdentifiers; // @synthesize mediaItemIdentifiers=_mediaItemIdentifiers;
@property(readonly, nonatomic) NSMutableArray *toneIdentifiers; // @synthesize toneIdentifiers=_toneIdentifiers;
@property(nonatomic) __weak id <HUAlarmTonePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *loggedInAppleMusicAccountDSID; // @synthesize loggedInAppleMusicAccountDSID=_loggedInAppleMusicAccountDSID;
@property(copy, nonatomic) NSNumber *selectedMediaIdentifier; // @synthesize selectedMediaIdentifier=_selectedMediaIdentifier;
@property(copy, nonatomic) NSString *selectedToneIdentifier; // @synthesize selectedToneIdentifier=_selectedToneIdentifier;
- (void).cxx_destruct;
- (void)_playToneWithIdentifier:(id)arg1;
- (void)_playMediaItemWithIdentifier:(id)arg1;
- (void)_playMediaAtIndexPath:(id)arg1;
- (id)_mediaItemForIndexPath:(id)arg1;
- (id)_toneIdentifierForIndexPath:(id)arg1;
- (id)_titleForItemAtIndexPath:(id)arg1;
- (_Bool)_isPickSongIndexPath:(id)arg1;
- (void)_updateWithToneIdentifier:(id)arg1 mediaIdentifier:(id)arg2 notifyDelegate:(_Bool)arg3;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addMediaItems:(id)arg1;
@property(readonly, nonatomic) NSString *defaultToneIdentifier;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithLoggedInAppleMusicAccountDSID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
