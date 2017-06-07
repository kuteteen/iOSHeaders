//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate-Protocol.h>
#import <UIKit/UIKeyboardCandidateList-Protocol.h>
#import <UIKit/UIKeyboardCandidateListDelegate-Protocol.h>
#import <UIKit/UIKeyboardCandidateRowViewControllerDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, TIKeyboardCandidateResultSet, UIImageView, UIKBBackdropView, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateGridHeader, UIKeyboardCandidateRowViewController, UIKeyboardCandidateSortControl;
@protocol UICollectionViewDelegate, UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGrid : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate, UIKeyboardCandidateRowViewControllerDelegate>
{
    UIImageView *_backgroundView;
    UIView *_topBarShadow;
    UIView *_bottomBarShadow;
    _Bool _drawTopShadow;
    _Bool _drawBottomShadow;
    _Bool _secondaryCandidatesViewIsCurrent;
    int _candidatesVisualStyle;
    NSMutableDictionary *_collectionViewControllers;
    TIKeyboardCandidateResultSet *_candidateSet;
    NSArray *_sortedCandidates;
    NSString *_inlineText;
    UIKeyboardCandidateSortControl *_sortBar;
    UIKeyboardCandidateGridHeader *_gridHeader;
    id <UICollectionViewDelegate> _scrollViewDelegate;
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    UIKeyboardCandidateRowViewController *_secondaryCandidatesViewController;
    UIKBBackdropView *_backdropView;
}

@property(retain, nonatomic) UIKBBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(nonatomic) _Bool secondaryCandidatesViewIsCurrent; // @synthesize secondaryCandidatesViewIsCurrent=_secondaryCandidatesViewIsCurrent;
@property(retain, nonatomic) UIKeyboardCandidateRowViewController *secondaryCandidatesViewController; // @synthesize secondaryCandidatesViewController=_secondaryCandidatesViewController;
@property(retain, nonatomic) UIKeyboardCandidateGridCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(nonatomic) __weak id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property(nonatomic) __weak id <UICollectionViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak UIKeyboardCandidateGridHeader *gridHeader; // @synthesize gridHeader=_gridHeader;
@property(nonatomic) __weak UIKeyboardCandidateSortControl *sortBar; // @synthesize sortBar=_sortBar;
@property(nonatomic) int candidatesVisualStyle; // @synthesize candidatesVisualStyle=_candidatesVisualStyle;
@property(retain, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property(retain, nonatomic) NSArray *sortedCandidates; // @synthesize sortedCandidates=_sortedCandidates;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
@property(nonatomic) _Bool drawBottomShadow; // @synthesize drawBottomShadow=_drawBottomShadow;
@property(nonatomic) _Bool drawTopShadow; // @synthesize drawTopShadow=_drawTopShadow;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)padInlineFloatingViewIsExpanded:(id)arg1;
- (unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (void)sortSelectionBarAction:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *collectionViewControllers; // @synthesize collectionViewControllers=_collectionViewControllers;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (unsigned long long)rowForCandidateAtIndex:(unsigned long long)arg1;
- (void)revealHiddenCandidates;
- (_Bool)handleTabKeyWithShift:(_Bool)arg1;
- (_Bool)handleNumberKey:(unsigned long long)arg1;
- (unsigned long long)selectedSortIndex;
- (id)statisticsIdentifier;
- (id)keyboardBehaviors;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(_Bool)arg6;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (void)candidatesDidChange;
- (_Bool)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (id)currentCandidate;
- (_Bool)hasCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (void)showCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (_Bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (_Bool)isFloatingList;
- (_Bool)isExtendedList;
- (void)showArrowButton:(_Bool)arg1;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)candidateViewDidFinishExtending;
- (void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1;
- (void)layout;
- (void)layoutSubviews;
- (void)clearViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

