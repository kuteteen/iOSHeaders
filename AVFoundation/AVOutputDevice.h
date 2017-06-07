//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVFigEndpointOutputDeviceImpl, AVOutputDeviceInternal, NSString;

@interface AVOutputDevice : NSObject
{
    AVOutputDeviceInternal *_outputDevice;
}

+ (id)sharedLocalDevice;
+ (void)initialize;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (double)frecencyScore;
- (void)updateFrecencyScore;
- (void)setAdministrativeConfiguration:(id)arg1 administrationPassword:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)groupContainsGroupLeader;
- (_Bool)isGroupLeader;
- (_Bool)canBeGroupLeader;
- (id)groupID;
- (_Bool)canBeGrouped;
- (void)setSecondDisplayEnabled:(_Bool)arg1;
- (_Bool)canAccessRemoteAssets;
- (_Bool)requiresAuthorization;
- (unsigned long long)deviceFeatures;
- (id)connectedPairedDevices;
- (_Bool)isInUseByPairedDevice;
- (id)modelSpecificInformation;
- (float)batteryLevel;
- (_Bool)hasBatteryLevel;
@property(readonly, nonatomic) NSString *modelID;
@property(readonly, nonatomic) long long deviceSubType;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, nonatomic) NSString *ID;
@property(readonly, nonatomic) NSString *name;
- (id)impl;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithOutputDeviceImpl:(id)arg1;
- (id)init;
@property(readonly) AVFigEndpointOutputDeviceImpl *figEndpointOutputImpl;

@end

