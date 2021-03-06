//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDApplicationMetadata : NSObject
{
    _Bool _isCKSystemService;
    _Bool _canMasquerade;
    _Bool _canSetEnvironment;
    _Bool _allowCustomAccounts;
    _Bool _canAccessProtectionData;
    _Bool _canAccessZoneProtectionData;
    _Bool _canSetDeviceIdentifier;
    _Bool _hasAccessDuringBuddy;
    _Bool _hasLightweightPCS;
    _Bool _hasTCCAuthorization;
    _Bool _allowsPowerNapScheduling;
    _Bool _isOOPUI;
    _Bool _allowsParticipantPII;
    _Bool _displaysSystemAcceptPrompt;
    NSString *_apsEnvironmentString;
    long long _isApplication;
    NSString *_entitlementSpecifiedPCSServiceName;
    NSString *_applicationIdentifier;
    NSString *_clientPrefix;
}

@property(retain, nonatomic) NSString *clientPrefix; // @synthesize clientPrefix=_clientPrefix;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) NSString *entitlementSpecifiedPCSServiceName; // @synthesize entitlementSpecifiedPCSServiceName=_entitlementSpecifiedPCSServiceName;
@property(nonatomic) _Bool displaysSystemAcceptPrompt; // @synthesize displaysSystemAcceptPrompt=_displaysSystemAcceptPrompt;
@property(nonatomic) _Bool allowsParticipantPII; // @synthesize allowsParticipantPII=_allowsParticipantPII;
@property(nonatomic) _Bool isOOPUI; // @synthesize isOOPUI=_isOOPUI;
@property(nonatomic) _Bool allowsPowerNapScheduling; // @synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling;
@property(nonatomic) _Bool hasTCCAuthorization; // @synthesize hasTCCAuthorization=_hasTCCAuthorization;
@property(nonatomic) _Bool hasLightweightPCS; // @synthesize hasLightweightPCS=_hasLightweightPCS;
@property(nonatomic) _Bool hasAccessDuringBuddy; // @synthesize hasAccessDuringBuddy=_hasAccessDuringBuddy;
@property(nonatomic) _Bool canSetDeviceIdentifier; // @synthesize canSetDeviceIdentifier=_canSetDeviceIdentifier;
@property(nonatomic) _Bool canAccessZoneProtectionData; // @synthesize canAccessZoneProtectionData=_canAccessZoneProtectionData;
@property(nonatomic) _Bool canAccessProtectionData; // @synthesize canAccessProtectionData=_canAccessProtectionData;
@property(nonatomic) _Bool allowCustomAccounts; // @synthesize allowCustomAccounts=_allowCustomAccounts;
@property(nonatomic) _Bool canSetEnvironment; // @synthesize canSetEnvironment=_canSetEnvironment;
@property(nonatomic) _Bool canMasquerade; // @synthesize canMasquerade=_canMasquerade;
@property(nonatomic) _Bool isCKSystemService; // @synthesize isCKSystemService=_isCKSystemService;
@property(nonatomic) long long isApplication; // @synthesize isApplication=_isApplication;
@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
- (void).cxx_destruct;
- (id)init;

@end

