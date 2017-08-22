//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBCandidateCollectionView.h>

@class NSArray, UIKeyboardCandidateGridCollectionViewController, UITableViewIndex;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridCollectionView : UIKBCandidateCollectionView
{
    double _indexMaximumHeight;
    UITableViewIndex *_index;
    UIKeyboardCandidateGridCollectionViewController *_parentViewController;
    double _previousGroupBarStartingY;
}

@property(nonatomic) double previousGroupBarStartingY; // @synthesize previousGroupBarStartingY=_previousGroupBarStartingY;
@property(nonatomic) __weak UIKeyboardCandidateGridCollectionViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) UITableViewIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *indexTitles;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)setContentOffset:(struct CGPoint)arg1;
- (_Bool)shouldShowIndex;
- (void)showIndex:(_Bool)arg1;
- (void)delayUpdateIndex;
- (void)updateIndex;
- (void)updateIndex:(_Bool)arg1;
- (double)groupBarStartingY;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_canDrawContent;
- (_Bool)shouldDrawGroupBackground;
- (_Bool)isCellVisible:(id)arg1;
- (void)scrollToBottomWithAnimation:(_Bool)arg1;
- (void)scrollToOffsetFromTop:(double)arg1 withAnimation:(_Bool)arg2;
- (void)scrollToTopWithAnimation:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

