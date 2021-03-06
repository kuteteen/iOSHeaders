//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CDPDAccount : NSObject
{
}

+ (id)sharedInstance;
- (id)_primaryAppleAccount;
- (id)sharedAccountStore;
- (id)contextForPrimaryAccount;
- (id)iCloudEnv;
- (id)escrowURL;
- (id)authToken;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)primaryAccountAltDSID;
- (id)primaryAccountDSID;
- (id)primaryAccountUsername;
- (_Bool)isICDPEnabledForDSID:(id)arg1 checkWithServer:(_Bool)arg2;
- (_Bool)isICDPEnabledForDSID:(id)arg1;
@property(nonatomic) _Bool hasDisabledKeychainExplicitly;

@end

