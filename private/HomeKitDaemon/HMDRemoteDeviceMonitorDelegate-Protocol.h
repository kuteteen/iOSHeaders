//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDDevice, HMDRemoteDeviceMonitor;

@protocol HMDRemoteDeviceMonitorDelegate <NSObject>

@optional
- (void)remoteDeviceMonitor:(HMDRemoteDeviceMonitor *)arg1 deviceIsReachable:(HMDDevice *)arg2;
- (void)remoteDeviceMonitor:(HMDRemoteDeviceMonitor *)arg1 deviceIsUnreachable:(HMDDevice *)arg2;
@end

