//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIKeyboardInputManagerStub.h"

@class TIKeyboardInputManagerBase;

@interface TIKeyboardInputManagerWrapper : TIKeyboardInputManagerStub
{
    TIKeyboardInputManagerBase *_inputManager;
    id <TIKeyboardInputManagerLogging> _logger;
}

@property(retain, nonatomic) id <TIKeyboardInputManagerLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) TIKeyboardInputManagerBase *inputManager; // @synthesize inputManager=_inputManager;
- (void)writeTypologyLogWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)lastAcceptedCandidateCorrected;
- (void)candidateRejected:(id)arg1;
- (void)textAccepted:(id)arg1;
- (void)setOriginalInput:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)handleAcceptedCandidate:(id)arg1 acceptedSecureCandidate:(id)arg2 keyboardState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleKeyboardInput:(id)arg1 acceptedSecureCandidate:(id)arg2 keyboardState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateKeyboardOutput:(id)arg1 withSecureCandidatePayload:(id)arg2;
- (void)updateAnalyticsForRejectedSuggestion:(id)arg1 keyboardState:(id)arg2;
- (void)acceptSecureCandidate:(id)arg1 keyboardState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleKeyboardState:(id)arg1;
- (id)init;
- (void)dealloc;

@end

