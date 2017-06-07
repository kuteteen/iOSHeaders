//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEProfileIngestionDelegate-Protocol.h>

@class NEConfiguration, NEConfigurationManager, NSMutableArray, NSString;

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate>
{
    NSString *_clientName;
    NSString *_payloadType;
    NEConfigurationManager *_manager;
    NSMutableArray *_currentConfigurations;
    NEConfiguration *_ingestedConfiguration;
}

+ (void)profileMigrationComplete;
+ (id)getServiceIDForPayload:(id)arg1;
@property(retain) NEConfiguration *ingestedConfiguration; // @synthesize ingestedConfiguration=_ingestedConfiguration;
@property(retain) NSMutableArray *currentConfigurations; // @synthesize currentConfigurations=_currentConfigurations;
@property(readonly) NEConfigurationManager *manager; // @synthesize manager=_manager;
@property(readonly) NSString *payloadType; // @synthesize payloadType=_payloadType;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
- (void).cxx_destruct;
- (_Bool)updateManagedAppRules:(id)arg1;
- (id)findMostSpecificAppRuleForBundleID:(id)arg1 config:(id)arg2;
- (_Bool)updateAppLayerVPNMappingRules:(id)arg1;
- (void)enableDefaultService;
- (void)unlockConfigurations;
- (_Bool)lockConfigurations;
- (_Bool)enableAlwaysOnVpn;
- (id)copyManagedConfigurationIDs;
- (_Bool)updateDefaultAfterDeletingConfiguration;
- (_Bool)updateDefaultAfterAddingConfiguration;
- (_Bool)removeIngestedConfiguration;
- (id)getCertificatesForConfigurationWithIdentifier:(id)arg1;
- (_Bool)removeConfigurationWithIdentifier:(id)arg1;
- (_Bool)removeConfiguration:(id)arg1;
- (_Bool)enableAlwaysOnVpnInternal:(_Bool)arg1;
- (_Bool)saveIngestedConfiguration;
- (_Bool)saveConfiguration:(id)arg1;
- (_Bool)createConfigurationFromPayload:(id)arg1 payloadType:(id)arg2;
- (_Bool)isInstalled:(id)arg1;
- (id)findConfigurationByConfigurationID:(id)arg1;
- (id)findConfigurationByPayloadUUID:(id)arg1;
- (id)setAsideConfigurationName:(id)arg1 unsetAside:(_Bool)arg2;
- (id)resolveConfigurationNameConflict:(id)arg1;
- (id)findConfigurationByName:(id)arg1;
- (_Bool)loadConfigurationsForceReloadFromDisk;
- (_Bool)loadConfigurationsWithRefreshOption:(_Bool)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithNameAndType:(id)arg1 payloadType:(id)arg2;

@end

