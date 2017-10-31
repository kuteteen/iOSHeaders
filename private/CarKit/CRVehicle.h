//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSSet, NSString, NSUUID;

@interface CRVehicle : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_vehicleName;
    NSSet *_accessoryProtocols;
    NSData *_certificateSerialNumber;
    unsigned long long _pairingStatus;
    NSString *_bluetoothAddress;
    NSString *_carplayWiFiUUID;
    NSString *_internalNotes;
}

+ (id)vehicleForVehicleAccessory:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *internalNotes; // @synthesize internalNotes=_internalNotes;
@property(retain, nonatomic) NSString *carplayWiFiUUID; // @synthesize carplayWiFiUUID=_carplayWiFiUUID;
@property(retain, nonatomic) NSString *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(nonatomic) unsigned long long pairingStatus; // @synthesize pairingStatus=_pairingStatus;
@property(retain, nonatomic) NSData *certificateSerialNumber; // @synthesize certificateSerialNumber=_certificateSerialNumber;
@property(retain, nonatomic) NSSet *accessoryProtocols; // @synthesize accessoryProtocols=_accessoryProtocols;
@property(retain, nonatomic) NSString *vehicleName; // @synthesize vehicleName=_vehicleName;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)displayName;
- (void)mergeAttributesFromVehicle:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_pairingDebugDescription;
@property(readonly, nonatomic) _Bool isPaired;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2;
- (id)init;

@end

