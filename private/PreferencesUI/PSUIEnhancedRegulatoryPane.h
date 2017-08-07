//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSEditingPane.h>

#import <PreferencesUI/UITableViewDataSource-Protocol.h>
#import <PreferencesUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UIImageView, UILabel, UIScrollView, UIStackView, UITableView;

@interface PSUIEnhancedRegulatoryPane : PSEditingPane <UITableViewDataSource, UITableViewDelegate>
{
    UIScrollView *_scrollView;
    UIImageView *_primaryImageView;
    UIStackView *_stackView;
    UITableView *_internalBuildTableView;
    UILabel *_yoMLabel;
    UIImageView *_EPUPImageView;
    NSArray *_platformInfoArray;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)platformInfoArray;
- (void)layoutSubviews;
- (void)viewDidBecomeVisible;
- (_Bool)shouldInsetContent;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

