//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMapTable, UITableView, UITableViewCell;
@protocol _UITableViewSubviewManagerDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewSubviewManager : NSObject
{
    UITableViewCell *_reorderingCell;
    UITableView<_UITableViewSubviewManagerDelegate> *_tableView;
    NSCountedSet *_reusePreventedCells;
    NSMapTable *_cellsReadyForReuse;
    NSCountedSet *_dropAnimationCells;
}

@property(retain, nonatomic) NSCountedSet *dropAnimationCells; // @synthesize dropAnimationCells=_dropAnimationCells;
@property(retain, nonatomic) NSMapTable *cellsReadyForReuse; // @synthesize cellsReadyForReuse=_cellsReadyForReuse;
@property(retain, nonatomic) NSCountedSet *reusePreventedCells; // @synthesize reusePreventedCells=_reusePreventedCells;
@property(nonatomic) __weak UITableView<_UITableViewSubviewManagerDelegate> *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UITableViewCell *reorderingCell; // @synthesize reorderingCell=_reorderingCell;
- (void).cxx_destruct;
- (void)endDropAnimationForCell:(id)arg1;
- (void)beginDropAnimationForCell:(id)arg1;
- (_Bool)cellShouldRemainHiddenForDropAnimation:(id)arg1;
- (void)resumeReuseOfCell:(id)arg1;
- (void)preventReuseOfCell:(id)arg1;
- (void)cellReadyForReuse:(id)arg1 withIndexPath:(id)arg2 didEndDisplaying:(_Bool)arg3;
- (_Bool)shouldDeferReuseOfCell:(id)arg1;
- (id)initWithTableView:(id)arg1;

@end

