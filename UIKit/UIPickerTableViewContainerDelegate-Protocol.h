//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIPickerTableView, UITableView;

@protocol UIPickerTableViewContainerDelegate
- (void)setAllowsMultipleSelection:(_Bool)arg1;
- (_Bool)_usesCheckSelection;
- (_Bool)_soundsEnabled;
- (void)_sendCheckedRow:(long long)arg1 inTableView:(UITableView *)arg2 checked:(_Bool)arg3;

@optional
- (void)pickerTableView:(UIPickerTableView *)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;
- (void)_pickerTableViewDidChangeContentOffset:(UIPickerTableView *)arg1;
@end

