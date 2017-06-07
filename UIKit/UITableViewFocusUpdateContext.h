//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFocusUpdateContext.h>

@class NSIndexPath, UITableView;

@interface UITableViewFocusUpdateContext : UIFocusUpdateContext
{
    _Bool _didSetPreviouslyFocusedIndexPath;
    _Bool _didSetNextFocusedIndexPath;
    NSIndexPath *_previouslyFocusedIndexPath;
    NSIndexPath *_nextFocusedIndexPath;
    UITableView *_tableView;
}

+ (id)_contextWithContext:(id)arg1 tableView:(id)arg2;
@property(readonly, nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *nextFocusedIndexPath; // @synthesize nextFocusedIndexPath=_nextFocusedIndexPath;
@property(readonly, nonatomic) NSIndexPath *previouslyFocusedIndexPath; // @synthesize previouslyFocusedIndexPath=_previouslyFocusedIndexPath;
- (void)_setSourceItemInfo:(id)arg1;
- (id)_initWithContext:(id)arg1 tableView:(id)arg2;

@end

