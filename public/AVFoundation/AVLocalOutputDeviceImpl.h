//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVOutputDeviceImpl.h"

@class AVOutputDevice, NSArray, NSData, NSNumber, NSString;

@interface AVLocalOutputDeviceImpl : NSObject <AVOutputDeviceImpl>
{
    AVOutputDevice *_parentDevice;
}

@property __weak AVOutputDevice *parentOutputDevice; // @synthesize parentOutputDevice=_parentDevice;
- (void).cxx_destruct;
- (void)configureUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *logicalDeviceID;
@property(readonly, nonatomic) _Bool groupContainsGroupLeader;
@property(readonly, nonatomic) _Bool isGroupLeader;
@property(readonly, nonatomic) _Bool canBeGroupLeader;
@property(readonly, copy, nonatomic) NSString *groupID;
@property(readonly, nonatomic) _Bool canBeGrouped;
- (void)setVolume:(float)arg1;
@property(readonly) _Bool canSetVolume;
@property(readonly) float volume;
- (void)setSecondDisplayEnabled:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canAccessRemoteAssets;
@property(readonly, nonatomic) _Bool requiresAuthorization;
@property(readonly, nonatomic) unsigned long long deviceFeatures;
@property(readonly, copy, nonatomic) NSArray *connectedPairedDevices;
@property(readonly, nonatomic, getter=isInUseByPairedDevice) _Bool inUseByPairedDevice;
@property(readonly, nonatomic) NSNumber *rightBatteryLevel;
@property(readonly, nonatomic) NSNumber *leftBatteryLevel;
@property(readonly, nonatomic) NSNumber *caseBatteryLevel;
@property(readonly, nonatomic) NSNumber *batteryLevel;
@property(readonly, copy, nonatomic) NSData *identifyingMACAddress;
@property(readonly, nonatomic) NSString *firmwareVersion;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, copy, nonatomic) NSString *modelID;
@property(readonly, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) long long deviceSubType;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, copy, nonatomic) NSString *ID;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

