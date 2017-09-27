//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSLock, NSNumber, NSObject<OS_dispatch_queue>;

@interface ISBiometricStore : NSObject
{
    NSCache *_contextCache;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSLock *_lock;
    _Bool _shouldUseTouchID2;
}

+ (id)keychainLabelForAccountID:(id)arg1;
+ (_Bool)shouldUseTouchID2;
+ (id)diskBasedPaymentSheet;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateUserDefaultsKey:(struct __CFString *)arg1 withBooleanValue:(_Bool)arg2;
- (void)_updateTouchIDVersionWithBagKey:(id)arg1;
- (id)signData:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)publicKeyDataForAccountIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id *)arg2;
- (id)createAttestationDataForAccountIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)shouldUseTouchID2;
@property long long biometricState;
- (void)saveIdentityMapForAccountIdentifier:(id)arg1;
- (void)registerAccountIdentifier:(id)arg1;
@property(readonly) NSNumber *lastRegisteredAccountIdentifier;
- (_Bool)isIdentityMapValidForAccountIdentifier:(id)arg1;
@property(readonly, getter=isBiometricStateEnabled) _Bool biometricStateEnabled;
- (unsigned long long)identityMapCount;
- (id)fetchContextFromCacheWithToken:(id)arg1 evict:(_Bool)arg2;
- (void)clearLastRegisteredAccountIdentifier;
- (_Bool)canPerformExtendedTouchIDActionsForAccountIdentifier:(id)arg1;
- (_Bool)canPerformBiometricOptIn;
- (long long)biometricAvailabilityForAccountIdentifier:(id)arg1;
- (void)addContextToCache:(id)arg1 withToken:(id)arg2;
- (id)initWithBagListener;

@end

