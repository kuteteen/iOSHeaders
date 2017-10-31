//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface PKAuthenticator : NSObject
{
    unsigned long long _authenticationIdentifier;
    NSObject<OS_dispatch_queue> *_contextMutationQueue;
    _Bool _acquiringHintSupressionAssertion;
    id <BSInvalidatable> _hintSupressionAssertion;
    id <PKAuthenticatorDelegate> _delegate;
    double _fingerPresentTimeout;
}

+ (id)viewServiceBundleID;
+ (unsigned long long)cachedStateForPolicy:(long long)arg1;
+ (unsigned long long)_currentStateForMechanisms:(id)arg1;
+ (unsigned long long)currentStateForAccessControl:(struct __SecAccessControl *)arg1;
+ (unsigned long long)currentStateForPolicy:(long long)arg1;
+ (void)removeUserIntentAvailable;
+ (_Bool)isUserIntentAvailable;
+ (void)resetSharedRootContextWithCompletion:(CDUnknownBlockType)arg1;
+ (void)preheatAuthenticator;
@property(nonatomic) double fingerPresentTimeout; // @synthesize fingerPresentTimeout=_fingerPresentTimeout;
@property(nonatomic) __weak id <PKAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_delegateSupportsPassphrasePresentation;
- (_Bool)_delegateSupportsPasscodePresentation;
@property(readonly, nonatomic) _Bool fingerPresentTimeoutExpired;
@property(readonly, nonatomic) _Bool fingerPresentTimeoutRequired;
@property(readonly, nonatomic) _Bool passcodeWasPresented;
@property(readonly, nonatomic) _Bool passphraseActive;
@property(readonly, nonatomic) _Bool passcodeActive;
@property(readonly, nonatomic) _Bool fingerPresent;
@property(readonly, nonatomic) _Bool userIntentAvailable;
- (void)setFingerPresentTimeout:(double)arg1 preventRestart:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long authenticationIdentifier;
- (void)accessExternalizedContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)restartEvaluation;
- (void)cancelEvaluationWithOptions:(unsigned long long)arg1;
- (void)cancelEvaluation;
- (void)fallbackToSystemPasscodeUI;
- (void)evaluateRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)evaluatePolicy:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

