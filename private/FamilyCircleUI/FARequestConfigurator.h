//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AAGrandSlamSigner, ACAccount, ACAccountStore, AIDAServiceOwnersManager;

@interface FARequestConfigurator : NSObject
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    ACAccount *_grandSlamAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
    AIDAServiceOwnersManager *_serviceOwnersManager;
}

+ (unsigned char)_isUsingV2Flows;
- (void).cxx_destruct;
- (id)_serviceOwnersManager;
- (id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2;
- (void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3;
- (id)_fresnoPayloadWithAdditionalHeaders:(id)arg1;
- (id)_familyGrandSlamSigner;
- (id)_grandSlamSigner;
- (id)_grandSlamAccount;
- (id)_accountStore;
- (id)_account;
- (void)renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_urlForEventType:(id)arg1;
- (id)requestForEventType:(id)arg1;
- (void)addPayload:(id)arg1 toRequest:(id)arg2;
- (void)addFresnoPayloadToRequest:(id)arg1 additionalHeaders:(id)arg2;
- (void)addFresnoHeadersToRequest:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end
