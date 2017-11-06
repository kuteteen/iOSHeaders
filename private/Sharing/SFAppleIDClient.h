//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface SFAppleIDClient : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)statusInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appleIDListWithCompletion:(CDUnknownBlockType)arg1;
- (void)addAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_myAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)myAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_copyIdentityForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)copyIdentityForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_copyCertificateForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)copyCertificateForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_invalidate;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

