//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDictationView.h>

@class NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface UIDictationLayoutView : UIDictationView
{
    _Bool _hideSwitcher;
    UIButton *_startButton;
    UIButton *_stopButton;
    UIButton *_globeButton;
    UIButton *_keyboardButton;
    UILabel *_languageLabel;
    NSString *_currentDictationLanguage;
    _Bool _selectionGestureDetected;
}

- (_Bool)isShowing;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)layoutSubviews;
- (void)didEndIndirectSelectionGesture;
- (void)willBeginIndirectSelectionGesture;
- (void)setState:(int)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2;
- (void)updateLanguageLabel;
- (void)keyboardButtonPressed;
- (void)startStopButtonPressed;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

