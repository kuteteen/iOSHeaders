//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UITableView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UITableViewIndexOverlayIndicatorView : UIView
{
    UILabel *_label;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITableView *_table;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentText;
- (void)layoutSubviews;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)_invalidateTable;
- (void)_tapGestureChanged:(id)arg1;
- (id)initWithTable:(id)arg1;

@end

