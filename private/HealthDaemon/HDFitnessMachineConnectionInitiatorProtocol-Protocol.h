//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

@protocol HDFitnessMachineConnectionInitiatorProtocol <NSObject>
- (void)simulateAccept;
- (void)simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)forbidConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)permitConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(NSUUID *)arg3;
- (void)registerConnectionInitiatorClient:(id <HKFitnessMachineConnectionInitiatorClientInterface>)arg1 withConnectionUUID:(NSUUID *)arg2;
@end

