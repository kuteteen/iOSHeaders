//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "HMFMerging.h"
#import "HMFObject.h"
#import "NSSecureCoding.h"

@class HMDAccount, HMDDeviceCapabilities, HMDHomeKitVersion, HMFProductInfo, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDDevice : HMFObject <HMFObject, HMFLogging, HMFMerging, NSSecureCoding>
{
    NSString *_name;
    HMFProductInfo *_productInfo;
    HMDHomeKitVersion *_version;
    HMDDeviceCapabilities *_capabilities;
    NSUUID *_idsIdentifierHash;
    NSUUID *_idsIdentifier;
    NSString *_destination;
    NSUUID *_identifier;
    HMDAccount *_account;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)idsIdentifierHashFromDevice:(id)arg1 error:(id *)arg2;
+ (id)idsIdentifierHashFromDeviceUniqueIdentifier:(id)arg1 error:(id *)arg2;
+ (id)identifierFromDeviceDestination:(id)arg1 error:(id *)arg2;
+ (id)destinationForDevice:(id)arg1 service:(id)arg2;
+ (id)deviceDestinationForDevice:(id)arg1 service:(id)arg2;
+ (_Bool)isValidDestination:(id)arg1;
+ (id)identifierFromDevice:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (id)namespace;
+ (id)deviceWithDestination:(id)arg1;
+ (id)currentDeviceWithIDSService:(id)arg1;
+ (id)deviceDestinationForDestination:(id)arg1;
+ (void)initialize;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(nonatomic) __weak HMDAccount *account; // @synthesize account=_account;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)mergeObject:(id)arg1;
- (id)logIdentifier;
- (void)setDestination:(id)arg1;
@property(readonly, copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(copy, setter=setIDSIdentifier:) NSUUID *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(copy, setter=setIDSIdentifierHash:) NSUUID *idsIdentifierHash; // @synthesize idsIdentifierHash=_idsIdentifierHash;
@property(readonly, getter=isCurrentDevice) _Bool currentDevice;
@property(copy) HMDDeviceCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(copy, nonatomic) HMDHomeKitVersion *version; // @synthesize version=_version;
@property(copy) HMFProductInfo *productInfo; // @synthesize productInfo=_productInfo;
- (void)setName:(id)arg1;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (_Bool)bsoIsEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
- (id)shortDescription;
- (id)initWithIdentifier:(id)arg1 idsIdentifier:(id)arg2 idsIdentifierHash:(id)arg3 name:(id)arg4 productInfo:(id)arg5 destination:(id)arg6 version:(id)arg7 capabilities:(id)arg8;
- (id)initWithService:(id)arg1 device:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

