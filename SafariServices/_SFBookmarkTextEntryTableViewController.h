//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSString, _SFBookmarkTextEntryTableViewCell;
@protocol _SFBookmarkTextEntryTableViewControllerDelegate;

@interface _SFBookmarkTextEntryTableViewController : UITableViewController
{
    id <_SFBookmarkTextEntryTableViewControllerDelegate> _delegate;
    NSString *_initialText;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    _SFBookmarkTextEntryTableViewCell *_textEntryCell;
}

- (void).cxx_destruct;
- (void)_returnWasPressedInTextField:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadView;
- (id)initWithBookmarkInfoViewField:(unsigned long long)arg1 text:(id)arg2 autocapitalizationType:(long long)arg3 autocorrectionType:(long long)arg4 delegate:(id)arg5;

@end

