//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSString, UIGestureRecognizer, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, _CNUINavigationListViewPermissiveGestureRecognizerDelegate;
@protocol CNUINavigationListViewDataSource, CNUINavigationListViewDelegate;

__attribute__((visibility("hidden")))
@interface CNUINavigationListView : UITableView <UIGestureRecognizerDelegate>
{
    id <CNUINavigationListViewDataSource> _navigationListViewDataSource;
    id <CNUINavigationListViewDelegate> _navigationListViewDelegate;
    UILongPressGestureRecognizer *_selectionGestureRecognizer;
    UIGestureRecognizer *_additionalSelectionGestureRecognizer;
    NSIndexPath *_trackedElementIndexPath;
    UISelectionFeedbackGenerator *_retargetBehavior;
    _CNUINavigationListViewPermissiveGestureRecognizerDelegate *_selectionGestureRecognizerDelegate;
}

+ (_Bool)disableHeaderAccessibilityElements;
@property(retain, nonatomic) _CNUINavigationListViewPermissiveGestureRecognizerDelegate *selectionGestureRecognizerDelegate; // @synthesize selectionGestureRecognizerDelegate=_selectionGestureRecognizerDelegate;
@property(retain, nonatomic) UISelectionFeedbackGenerator *retargetBehavior; // @synthesize retargetBehavior=_retargetBehavior;
@property(retain, nonatomic) NSIndexPath *trackedElementIndexPath; // @synthesize trackedElementIndexPath=_trackedElementIndexPath;
@property(retain, nonatomic) UIGestureRecognizer *additionalSelectionGestureRecognizer; // @synthesize additionalSelectionGestureRecognizer=_additionalSelectionGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(nonatomic) __weak id <CNUINavigationListViewDelegate> navigationListViewDelegate; // @synthesize navigationListViewDelegate=_navigationListViewDelegate;
@property(nonatomic) __weak id <CNUINavigationListViewDataSource> navigationListViewDataSource; // @synthesize navigationListViewDataSource=_navigationListViewDataSource;
- (void).cxx_destruct;
- (void)clearAdditionalSelectionGestureRecognizer;
- (void)startTrackingSelectionFromGestureRecognizer:(id)arg1;
- (void)notifyDelegateWithSelectionEventAtPoint:(struct CGPoint)arg1 trackedElementIndexPath:(id)arg2;
- (void)updateCellAccessoryControlState:(id)arg1 withTrackedLocation:(struct CGPoint)arg2;
- (_Bool)location:(struct CGPoint)arg1 isInAccessoryControlTouchArea:(id)arg2;
- (void)startTrackingElementAtIndexPath:(id)arg1;
- (void)stopTrackingElementAtIndexPath:(id)arg1;
- (void)handlePanGestureRecognizerUpdate:(id)arg1;
- (void)handleSelectionGestureRecognizerUpdate:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)elementAtLocation:(struct CGPoint)arg1;
- (id)disclosureNavigationListViewCellForRowAtIndexPath:(id)arg1;
- (id)dequeueDetailNavigationListViewCell;
- (id)dequeueNavigationListViewCell;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

