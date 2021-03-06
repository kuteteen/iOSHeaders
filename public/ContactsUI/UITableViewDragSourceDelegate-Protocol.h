//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, UITableView;

@protocol UITableViewDragSourceDelegate <NSObject>

@optional
- (long long)__tableView:(UITableView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)_tableView:(UITableView *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2;
- (void)_tableView:(UITableView *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (NSArray *)_tableView:(UITableView *)arg1 itemsForAddingToDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3 point:(struct CGPoint)arg4;
- (NSArray *)_tableView:(UITableView *)arg1 itemsForBeginningDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

