//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUIKeyboardableTableViewController.h>

#import "SearchUIFeedbackDelegateInternal.h"

@class NSString, SearchUIPeekDelegate, SearchUITableModel, SearchUITableView;

@interface SearchUITableViewController : SearchUIKeyboardableTableViewController <SearchUIFeedbackDelegateInternal>
{
    _Bool _shouldUseInsetRoundedSections;
    id <SFFeedbackListener> _feedbackListener;
    id <SearchUIResultViewDelegate> _resultViewDelegate;
    SearchUITableModel *_tableModel;
    SearchUIPeekDelegate *_peekDelegate;
    id <UIViewControllerPreviewing> _previewingContext;
    long long _preferredPunchoutIndex;
}

+ (void)applySeparatorStyleToCell:(id)arg1 forCurrentRowModel:(id)arg2 nextRowModel:(id)arg3;
+ (double)layoutMarginWidthForOrientation:(long long)arg1;
@property long long preferredPunchoutIndex; // @synthesize preferredPunchoutIndex=_preferredPunchoutIndex;
@property(retain) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(retain) SearchUIPeekDelegate *peekDelegate; // @synthesize peekDelegate=_peekDelegate;
@property(retain) SearchUITableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(nonatomic) _Bool shouldUseInsetRoundedSections; // @synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections;
@property __weak id <SearchUIResultViewDelegate> resultViewDelegate; // @synthesize resultViewDelegate=_resultViewDelegate;
@property(nonatomic) __weak id <SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)forwardFeedbackForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)updateContentScrolledOffScreenStatus;
- (double)offScreenContentScrollDistance;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (struct _NSRange)enumerateSelectableCellsForIndexPath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)deselectRowsForIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)updateViewControllerTitle:(id)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(_Bool)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateTableForNewCellHeightAnimated:(_Bool)arg1;
- (id)punchoutPickerDismissText:(id)arg1;
- (id)punchoutPickerTitleForIndexPath:(id)arg1;
- (id)punchoutsForIndexPath:(id)arg1;
- (id)nextCardForIndexPath:(id)arg1;
- (void)resignTextField;
- (id)preferredViewControllerForIndexPath:(id)arg1 isPreview:(_Bool)arg2;
- (void)roundNecessaryCornersForTableCellSelectedBackground:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)showViewController:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)requestAuthIfNecessaryAndPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long)handleSelectionAtIndexPath:(id)arg1 wasPop:(_Bool)arg2;
- (id)cardSectionForIndexPath:(id)arg1;
- (id)resultForIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)fallbackPeekViewControllerForIndexPath:(id)arg1;
- (id)viewControllerForIndexPath:(id)arg1 isPeek:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithTableModel:(id)arg1;
@property(nonatomic) unsigned long long style;
- (void)updateLayoutMarginsForOrientation:(long long)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) SearchUITableView *tableView; // @dynamic tableView;

@end

