//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextInteractionAssistant.h>

#import <UIKit/UIResponderStandardEditActions-Protocol.h>

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UITextChecker, _UITextServiceSession;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant <UIResponderStandardEditActions>
{
    long long _selectionOperation;
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    UITextChecker *_textChecker;
    unsigned long long _options;
    struct CGRect _caretBeforeTap;
    NSString *_wordBeforeTap;
    UITapGestureRecognizer *_singleTapGesture;
    UILongPressGestureRecognizer *_loupeGesture;
}

@property(readonly, nonatomic) UILongPressGestureRecognizer *loupeGesture; // @synthesize loupeGesture=_loupeGesture;
@property(readonly, nonatomic) UITapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;
- (void)lookup:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)lookup:(id)arg1 withRange:(struct _NSRange)arg2 fromRect:(struct CGRect)arg3;
- (void)showShareSheetFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)hideTextStyleOptions;
- (void)showTextStyleOptions;
- (void)selectAll:(id)arg1;
- (void)selectWord;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)legacyTwoFingerSingleTap:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionMoved:(struct CGPoint)arg1 withTouchPoint:(struct CGPoint)arg2;
- (void)rangeSelectionEnded:(struct CGPoint)arg1;
- (void)rangeSelectionStarted:(struct CGPoint)arg1;
- (void)updateWithMagnifierTerminalPoint:(_Bool)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)selectWithTapGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)loupeGestureWithState:(long long)arg1 atGesturePoint:(CDUnknownBlockType)arg2 shouldCancel:(_Bool *)arg3;
- (void)oneFingerTap:(id)arg1;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4;
- (id)_asText;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)selectionChanged;
- (_Bool)requiresImmediateUpdate;
- (void)selectTextForReplacement:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)showReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (_Bool)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleReplacementsForText:(id)arg1;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)scheduleChineseTransliterationForText:(id)arg1;
- (void)scrollSelectionToVisible;
- (_Bool)containerIsBrowserView;
- (_Bool)containerAllowsSelectionTintOnly;
- (_Bool)containerAllowsSelection;
- (_Bool)containerIsPlainStyleAtom;
- (_Bool)containerIsAtom;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

