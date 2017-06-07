//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEProfilePayloadHandlerDelegate-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEAOVPN, NEContentFilter, NEPathController, NEProfileIngestionPayloadInfo, NEVPN, NEVPNApp, NSString, NSUUID;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying>
{
    long long _grade;
    NSUUID *_identifier;
    NSString *_application;
    NSString *_name;
    NSString *_applicationName;
    NSString *_applicationIdentifier;
    NSString *_externalIdentifier;
    NEVPN *_VPN;
    NEAOVPN *_alwaysOnVPN;
    NEVPNApp *_appVPN;
    NEContentFilter *_contentFilter;
    NEProfileIngestionPayloadInfo *_payloadInfo;
    NEPathController *_pathController;
}

+ (id)configurationWithProfilePayload:(id)arg1;
+ (id)configurationWithProfilePayload:(id)arg1 grade:(long long)arg2;
+ (void)addError:(id)arg1 toList:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (struct __CFDictionary *)copyConfigurationForProtocol:(struct __CFString *)arg1 inService:(struct __SCNetworkService *)arg2;
+ (_Bool)setConfiguration:(struct __CFDictionary *)arg1 forProtocol:(struct __CFString *)arg2 inService:(struct __SCNetworkService *)arg3;
+ (_Bool)removeSCServiceWithIdentifier:(id)arg1 fromPreferences:(struct __SCPreferences *)arg2;
+ (_Bool)SCServiceWithIdentifier:(id)arg1 existsInPreferences:(struct __SCPreferences *)arg2;
@property(copy) NEPathController *pathController; // @synthesize pathController=_pathController;
@property(copy) NEProfileIngestionPayloadInfo *payloadInfo; // @synthesize payloadInfo=_payloadInfo;
@property(copy) NEContentFilter *contentFilter; // @synthesize contentFilter=_contentFilter;
@property(copy) NEVPNApp *appVPN; // @synthesize appVPN=_appVPN;
@property(copy) NEAOVPN *alwaysOnVPN; // @synthesize alwaysOnVPN=_alwaysOnVPN;
@property(copy) NEVPN *VPN; // @synthesize VPN=_VPN;
@property(copy) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(copy) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(copy) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *application; // @synthesize application=_application;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) long long grade; // @synthesize grade=_grade;
- (void).cxx_destruct;
- (void)copyPasswordsFromSystemKeychain;
@property(readonly) NSString *pluginType;
- (id)copyProfileDictionary;
- (void)clearUserKeychain;
- (void)clearSystemKeychain;
- (void)clearKeychainInDomain:(long long)arg1;
- (_Bool)needToUpdateKeychain;
- (void)syncWithUserKeychain;
- (void)syncWithSystemKeychain;
- (void)syncWithKeychainInDomain:(long long)arg1;
- (id)descriptionWithOptions:(unsigned long long)arg1;
- (id)description;
- (id)generateSignature;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithName:(id)arg1 grade:(long long)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPathControllerPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (_Bool)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;
- (_Bool)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
- (_Bool)setProfileInfo:(id)arg1;
- (_Bool)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
- (_Bool)setPayloadInfoIdentity:(id)arg1;
- (_Bool)setPayloadInfoIdentityPIN:(id)arg1;
- (_Bool)setPayloadInfoIdentityIPSecSharedSecret:(id)arg1;
- (_Bool)setPayloadInfoIdentityProxy:(id)arg1;
- (_Bool)setPayloadInfoIdentityUserNameAndPassword:(id)arg1;
- (_Bool)setConfigurationSharedSecret:(id)arg1;
- (_Bool)setConfigurationVPNPassword:(id)arg1;
- (id)getConfigurationIdentifier;
- (id)getPendingCertificateUUIDsInternal:(id)arg1;
- (id)getPendingCertificateInfo:(id)arg1;
- (id)getPendingCertificateUUIDs:(id)arg1;
- (id)getPendingCertificateUUIDsContentFilter:(id)arg1;
- (id)getPendingCertificateUUIDsAOVpn:(id)arg1;
- (id)getPendingCertificateUUIDsAppVPN:(id)arg1;
- (id)getPendingCertificateUUIDsVPN:(id)arg1;
- (id)getCertificates;
- (_Bool)setCertificates:(id)arg1;
- (_Bool)setCertificateContentFilter:(id)arg1;
- (_Bool)setCertificatesVPN:(id)arg1;
- (_Bool)setCertificatesAppVPN:(id)arg1;
- (_Bool)setCertificatesAOVpn:(id)arg1;
- (id)initWithContentFilterPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)initWithAlwaysOnVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)configureAOVPNTunnelFromTunnelDict:(id)arg1 tunnelDict:(id)arg2 payloadBase:(id)arg3 interfaceType:(id)arg4;
- (id)initWithAppLayerVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)initWithVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (_Bool)ingestIPSecDict:(id)arg1 vpnType:(id)arg2 vpn:(id)arg3;
- (_Bool)ingestPPPData:(id)arg1 vnpType:(id)arg2;
- (_Bool)configureVpnOnDemand:(id)arg1 vpnType:(id)arg2;
- (_Bool)configureVpnOnDemandRules:(id)arg1;
- (_Bool)configureIKE:(id)arg1 vpnType:(id)arg2 payloadBase:(id)arg3 vpn:(id)arg4;
- (_Bool)ingestProxyOptions:(id)arg1;
- (_Bool)configurePPPWithVPNOptions:(id)arg1 payloadBase:(id)arg2;
- (_Bool)configureL2TPWithPPPOptions:(id)arg1;
- (_Bool)configurePPPCommon:(id)arg1;
- (_Bool)ingestPPPDict:(id)arg1;
- (_Bool)ingestDNSOptions:(id)arg1;
- (_Bool)ingestDisconnectOptions:(id)arg1;
- (_Bool)configurePluginWithPayload:(id)arg1 pluginType:(id)arg2 payloadType:(id)arg3;
- (id)getConfigurationProtocol;
- (_Bool)updateFromSCService:(struct __SCNetworkService *)arg1;
- (id)initFromSCService:(struct __SCNetworkService *)arg1;
- (_Bool)applyChangesToSCServiceInPreferences:(struct __SCPreferences *)arg1;
- (_Bool)isSupportedBySC;

@end

