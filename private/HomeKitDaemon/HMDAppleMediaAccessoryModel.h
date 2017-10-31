//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDMediaAccessoryModel.h>

@class HMDDevice, HMFPairingIdentity, HMFSoftwareVersion, NSData, NSString;

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel
{
}

+ (id)properties;

// Remaining properties
@property(retain, nonatomic) HMDDevice *device; // @dynamic device;
@property(retain, nonatomic) NSString *deviceUUID; // @dynamic deviceUUID;
@property(retain, nonatomic) NSData *loggedInAccount; // @dynamic loggedInAccount;
@property(retain, nonatomic) HMFPairingIdentity *pairingIdentity; // @dynamic pairingIdentity;
@property(retain, nonatomic) HMFSoftwareVersion *softwareVersion; // @dynamic softwareVersion;
@property(retain, nonatomic) NSData *symptoms; // @dynamic symptoms;

@end

