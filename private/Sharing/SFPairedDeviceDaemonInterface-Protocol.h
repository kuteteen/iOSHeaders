//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDXPCDaemonProtocol.h"

@class NSDate;

@protocol SFPairedDeviceDaemonInterface <SDXPCDaemonProtocol>
- (void)sendUICoordinationDate:(NSDate *)arg1;
- (void)sendUISyncDate:(NSDate *)arg1;
- (void)requestToShowChargingUIWithHandler:(void (^)(NSDate *, NSError *))arg1;
@end

