//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface TTYTextView : UITextView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    long long _leftIndex;
    struct CGPoint _panContentOffset;
    double _currentKeyboardWidth;
    UICollectionViewFlowLayout *_flowLayout;
    UIView *_leftBackgroundColorEdge;
    UIView *_rightBackgroundColorEdge;
    UIView *_middleBackgroundColorEdge;
    UIView *_inputAccessoryPlaceholderView;
    _Bool _showTTYPredictions;
    _Bool _isHandlingKeyboardFrameChanged;
    UICollectionView *_predictionsCollectionView;
    NSArray *_ttyAbbreviations;
}

@property(nonatomic) _Bool isHandlingKeyboardFrameChanged; // @synthesize isHandlingKeyboardFrameChanged=_isHandlingKeyboardFrameChanged;
@property(retain, nonatomic) NSArray *ttyAbbreviations; // @synthesize ttyAbbreviations=_ttyAbbreviations;
@property(retain, nonatomic) UICollectionView *predictionsCollectionView; // @synthesize predictionsCollectionView=_predictionsCollectionView;
@property(nonatomic) _Bool showTTYPredictions; // @synthesize showTTYPredictions=_showTTYPredictions;
- (void).cxx_destruct;
- (_Bool)_accessibilityIsRealtimeElement;
- (id)accessibilityIdentifier;
- (int)_predictionsPerPage;
- (float)_predictionsCellHeight;
- (void)_loadTTYAbbreviations;
- (void)_insertWhitespaceIfNeeded;
- (void)_tapTTYBarCell:(id)arg1;
- (void)_updateTTYBarPosition;
- (void)_resetTTYBarPosition;
- (void)updateTTYBar;
- (void)_updateBlackBarPositioning;
- (_Bool)_isKeyboardPredictionsEnabled;
- (void)overrideTTYPredictionsHidden:(_Bool)arg1;
- (_Bool)disableInputBars;
- (id)inputAccessoryView;
- (long long)keyboardAppearance;
- (id)keyCommands;
- (void)_keyboardDidHide:(id)arg1;
- (void)_kbFrameChanged:(id)arg1;
- (void)_didSwipeLeft:(id)arg1;
- (void)_didPanPredictions:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (double)ttyBarHeight;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

