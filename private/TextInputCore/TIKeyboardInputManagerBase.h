//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TIInputMode, TIKeyboardSecureCandidateRenderer;

@interface TIKeyboardInputManagerBase : NSObject
{
    _Bool _hasHandledInput;
    TIInputMode *_inputMode;
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
}

@property(retain, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer; // @synthesize secureCandidateRenderer=_secureCandidateRenderer;
@property(readonly, nonatomic) _Bool hasHandledInput; // @synthesize hasHandledInput=_hasHandledInput;
@property(readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
- (long long)deletionCountForString:(id)arg1;
- (void)lastAcceptedCandidateCorrected;
- (void)candidateRejected:(id)arg1;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(_Bool)arg2;
- (void)setOriginalInput:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (id)generateRefinementsForCandidate:(id)arg1;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)generateAutocorrectionsWithKeyboardState:(id)arg1;
- (id)handleKeyboardInput:(id)arg1;
- (id)keyboardConfiguration;
- (void)syncToKeyboardState:(id)arg1;
- (void)resume;
- (void)suspend;
@property(readonly, nonatomic) NSString *currentInputModeIdentifier;
- (id)initWithInputMode:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)configurationPropertyList;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)clearHumanReadableTrace;
- (id)humanReadableTrace;
- (void)addSynthesizedTouchToInput:(id)arg1;
- (_Bool)isHardwareKeyboardAutocorrectionEnabled;
- (id)resourceInputModes;

@end

