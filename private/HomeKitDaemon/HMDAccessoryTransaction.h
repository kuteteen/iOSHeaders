//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSString;

@interface HMDAccessoryTransaction : HMDBackingStoreModelObject
{
}

+ (id)properties;
- (id)dependentUUIDs;

// Remaining properties
@property(retain, nonatomic) NSNumber *accessoryCategory; // @dynamic accessoryCategory;
@property(retain, nonatomic) NSNumber *blocked; // @dynamic blocked;
@property(retain, nonatomic) NSString *configurationAppIdentifier; // @dynamic configurationAppIdentifier;
@property(retain, nonatomic) NSString *configuredName; // @dynamic configuredName;
@property(retain, nonatomic) NSString *firmwareVersion; // @dynamic firmwareVersion;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(retain, nonatomic) NSString *model; // @dynamic model;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *providedName; // @dynamic providedName;
@property(retain, nonatomic) NSString *roomUUID; // @dynamic roomUUID;
@property(retain, nonatomic) NSString *serialNumber; // @dynamic serialNumber;

@end

