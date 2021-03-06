//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSArray, NSDictionary, NSString;

@interface CEMNetworkCellularDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
}

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)restrictionPayloadKeys;
+ (id)APNsItem_allowedPayloadKeys;
+ (id)AttachAPN_allowedPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredType;
+ (id)registeredClass;
- (id)serializePayloadAPNsItem:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadAttachAPN:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (_Bool)validStatusDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)validPayloadAPNsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (_Bool)validPayloadAttachAPN_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (_Bool)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;
@property(readonly, nonatomic) NSArray *payloadAPNs;
@property(readonly, nonatomic) NSDictionary *payloadAttachAPN;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

