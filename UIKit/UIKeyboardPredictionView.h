//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDate, NSMutableArray, NSString, NSTimer, TIKeyboardCandidate, UIKBBackgroundView, UIKBKeyView, UIKeyboardPredictionBarGrabber, UIKeyboardPredictionCell, UILabel, UITextSuggestion, UITouch;

__attribute__((visibility("hidden")))
@interface UIKeyboardPredictionView : UIView
{
    UIKBBackgroundView *m_backgroundView;
    UIKeyboardPredictionBarGrabber *m_grabber;
    NSArray *m_predictionCells;
    NSMutableArray *m_threeTextCells;
    NSMutableArray *m_twoTextCells;
    NSMutableArray *m_oneTextCells;
    NSMutableArray *m_emojiCells;
    NSMutableArray *m_textAndEmojiCells;
    UIKeyboardPredictionCell *m_lastCell;
    unsigned long long m_activeIndex;
    double m_width;
    _Bool m_lightKeyboard;
    NSString *m_openQuote;
    NSString *m_closeQuote;
    UIView *m_message;
    UILabel *m_messageLabel;
    UIKBKeyView *m_messageKeyView;
    double m_messageShownTime;
    struct CGPoint m_initLocation;
    _Bool m_dragging;
    _Bool m_hasLongCandidates;
    _Bool m_currentInputModeEnablePrediction;
    unsigned long long m_autocorrectionCell;
    _Bool m_delayActive;
    _Bool m_isMinimized;
    UIKBKeyView *m_collapsedView;
    int _notifyBatterySaverToken;
    unsigned long long m_numberOfVisibleCells;
    int _state;
    UITouch *_activeTouch;
    UITextSuggestion *_currentFirstTextSuggestion;
    NSTimer *_updateTimer;
    NSArray *_scheduledPredictions;
    TIKeyboardCandidate *_scheduledAutocorrection;
    NSArray *_scheduledEmojiList;
    NSDate *_lastUpdateDate;
    NSDate *_lastTextSuggestionUpdateDate;
    long long _lastTextSuggestionUpdateOrientation;
}

+ (id)resultCountToSingleCellWidth;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (double)overlapHeight;
+ (double)predictionViewWidthForOrientation:(long long)arg1;
+ (double)predictionViewHeightPaddingForOrientation:(long long)arg1;
+ (double)predictionViewHeightForState:(int)arg1 orientation:(long long)arg2;
+ (unsigned long long)numberOfCandidates;
@property(nonatomic) long long lastTextSuggestionUpdateOrientation; // @synthesize lastTextSuggestionUpdateOrientation=_lastTextSuggestionUpdateOrientation;
@property(retain, nonatomic) NSDate *lastTextSuggestionUpdateDate; // @synthesize lastTextSuggestionUpdateDate=_lastTextSuggestionUpdateDate;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(retain, nonatomic) NSArray *scheduledEmojiList; // @synthesize scheduledEmojiList=_scheduledEmojiList;
@property(retain, nonatomic) TIKeyboardCandidate *scheduledAutocorrection; // @synthesize scheduledAutocorrection=_scheduledAutocorrection;
@property(retain, nonatomic) NSArray *scheduledPredictions; // @synthesize scheduledPredictions=_scheduledPredictions;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) UITextSuggestion *currentFirstTextSuggestion; // @synthesize currentFirstTextSuggestion=_currentFirstTextSuggestion;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
- (id)description;
- (_Bool)hasPredictions;
- (_Bool)isTextSuggestion;
- (double)heightBeforeStateChangeForInterfaceOrientation:(long long)arg1;
- (double)heightForInterfaceOrientation:(long long)arg1;
- (void)setPredictionViewState:(int)arg1 animate:(_Bool)arg2 notify:(_Bool)arg3;
- (void)setPredictionViewState:(int)arg1 animate:(_Bool)arg2;
- (void)suppressLayoutSubviewsForCellLabels:(_Bool)arg1;
@property(nonatomic) _Bool show;
- (void)showMessageWithSize:(struct CGSize)arg1;
- (void)setPredictions:(id)arg1 autocorrection:(id)arg2 emojiList:(id)arg3;
- (void)touchUpdateTimer;
- (void)updateTimerFired:(id)arg1;
- (void)_setPredictions:(id)arg1 autocorrection:(id)arg2 emojiList:(id)arg3;
- (id)labelTextForPrediction:(id)arg1 typedString:(id)arg2;
- (void)removeMessage;
- (void)deactivateCandidate;
- (void)activateCandidateAtPoint:(struct CGPoint)arg1;
- (void)acceptCandidate;
- (void)acceptCandidateAtCell:(id)arg1;
- (unsigned long long)predictionCount;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)delayActivateCellForPrediction:(id)arg1;
- (void)commitPrediction:(id)arg1;
- (void)acceptPredictiveInput:(id)arg1;
- (id)autocorrection;
- (unsigned long long)indexForPoint:(struct CGPoint)arg1;
- (void)setActiveCellWithIndex:(unsigned long long)arg1;
- (void)setTouchedCellState:(int)arg1;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameForCells:(id)arg1 start:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)dealloc;
- (void)releaseMessage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initCells;
- (id)createCells:(unsigned long long)arg1;
- (void)suspend;
- (int)messageCount;
- (int)maxMessageCount;
- (void)inputModeDidChange;
- (void)dimKeys:(id)arg1;
- (int)stateForCurrentPreferences;
- (_Bool)enabled;

@end

