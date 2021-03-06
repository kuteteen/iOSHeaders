//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSArray, NSNumber, NSString;

@interface CEMManagementConnectionCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
}

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)allowedPayloadKeys;
+ (id)registeredType;
+ (id)registeredClass;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (_Bool)validStatusDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (int)executionLevel;
- (_Bool)mustBeSupervised;
@property(readonly, nonatomic) NSArray *payloadCertificates;
@property(readonly, nonatomic) NSNumber *payloadPinningRevocationCheckRequired;
@property(readonly, nonatomic) NSArray *payloadCheckInURLPinningCertificateUUIDs;
@property(readonly, nonatomic) NSArray *payloadStatusURLPinningCertificateUUIDs;
@property(readonly, nonatomic) NSArray *payloadControlURLPinningCertificateUUIDs;
@property(readonly, nonatomic) NSNumber *payloadSignMessage;
@property(readonly, nonatomic) NSString *payloadCheckInURL;
@property(readonly, nonatomic) NSString *payloadStatusURL;
@property(readonly, nonatomic) NSString *payloadControlURL;
@property(readonly, nonatomic) NSString *payloadTopic;
@property(readonly, nonatomic) NSString *payloadIdentityCertificateUUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

