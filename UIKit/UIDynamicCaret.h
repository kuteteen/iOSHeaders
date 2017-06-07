//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <UIKit/UIKeyboardCandidateList-Protocol.h>
#import <UIKit/_UIDynamicCaretDocumentContentDelegate-Protocol.h>

@class NSString, TIKeyboardCandidateResultSet, _UIDynamicCaretAlternatives, _UIDynamicCaretHelpLabel, _UIDynamicCaretInput, _UIDynamicCaretNoContentView;
@protocol UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate>
{
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    long long _selectedIndex;
    _Bool _justDeleted;
    _UIDynamicCaretInput *_inputView;
    _UIDynamicCaretAlternatives *_alternativesView;
    _UIDynamicCaretNoContentView *_noContentView;
    _UIDynamicCaretHelpLabel *_helpLabel;
    TIKeyboardCandidateResultSet *_candidateSet;
}

@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
@property(retain, nonatomic) _UIDynamicCaretHelpLabel *helpLabel; // @synthesize helpLabel=_helpLabel;
@property(retain, nonatomic) _UIDynamicCaretNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) _UIDynamicCaretAlternatives *alternativesView; // @synthesize alternativesView=_alternativesView;
@property(retain, nonatomic) _UIDynamicCaretInput *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;
- (unsigned long long)selectedSortIndex;
- (id)statisticsIdentifier;
- (id)keyboardBehaviors;
- (unsigned long long)currentIndex;
- (id)currentCandidate;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (_Bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (_Bool)isExtendedList;
- (_Bool)hasCandidates;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (_Bool)isDeleteCandidate:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)alternativeTappedAtIndex:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setDocumentHasContent:(_Bool)arg1;
@property(nonatomic) _Bool isActive;
- (void)didMoveToSuperview;
- (id)backgroundImage;
- (void)displayAlternatives:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

