//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class _UIKBRTRecognizer;

@protocol _UIKBRTRecognizerDelegate <NSObject>
- (void)recognizer:(_UIKBRTRecognizer *)arg1 cancelTouchOnLayoutWithId:(id)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 whenReady:(void (^)(id))arg5;
- (void)recognizer:(_UIKBRTRecognizer *)arg1 releaseTouchToLayoutWithId:(id)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 whenReady:(void (^)(id))arg5;
- (void)recognizer:(_UIKBRTRecognizer *)arg1 continueTrackingIgnoredTouchWithId:(id)arg2 currentPoint:(struct CGPoint)arg3 whenReady:(void (^)(id))arg4;
- (void)recognizer:(_UIKBRTRecognizer *)arg1 willIgnoreTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(struct CGPoint)arg4 currentPoint:(struct CGPoint)arg5 whenReady:(void (^)(id))arg6;
- (void)recognizer:(_UIKBRTRecognizer *)arg1 shouldContinueTrackingTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(struct CGPoint)arg4 currentPoint:(struct CGPoint)arg5 forContinueState:(unsigned long long)arg6 whenStateReady:(void (^)(id, _Bool))arg7;
- (void)recognizer:(_UIKBRTRecognizer *)arg1 restartTouchDownForTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(struct CGPoint)arg4 currentPoint:(struct CGPoint)arg5 whenStateReady:(void (^)(id, _Bool))arg6;
- (void)recognizer:(_UIKBRTRecognizer *)arg1 beginTouchDownForTouchWithId:(id)arg2 atPoint:(struct CGPoint)arg3 forBeginState:(unsigned long long)arg4 whenStateReady:(void (^)(id, _Bool))arg5;
@end

