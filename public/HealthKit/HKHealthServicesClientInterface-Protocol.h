//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKHealthService, NSArray, NSError, NSString;

@protocol HKHealthServicesClientInterface <NSObject>
- (void)clientRemote_deliverSessionCharacteristics:(NSArray *)arg1 forService:(NSString *)arg2 toClient:(unsigned long long)arg3 withError:(NSError *)arg4;
- (void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(NSError *)arg4;
- (void)clientRemote_deliverDiscoveryHealthService:(HKHealthService *)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(NSError *)arg4;
- (void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(NSError *)arg2;
@end

