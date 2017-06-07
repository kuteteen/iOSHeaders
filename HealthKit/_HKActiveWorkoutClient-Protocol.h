//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKLocationSeriesSample, NSArray, NSDate, NSDictionary, NSError, NSNumber, _HKWorkoutEvent;

@protocol _HKActiveWorkoutClient <NSObject>
- (void)clientRemote_receivedWorkoutEvent:(_HKWorkoutEvent *)arg1;
- (void)clientRemote_updateElevationChange:(NSNumber *)arg1;
- (void)clientRemote_serverFailedWithError:(NSError *)arg1;
- (void)clientRemote_serverStoppedWithDate:(NSDate *)arg1;
- (void)clientRemote_serverPausedWithDate:(NSDate *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)clientRemote_updateLocationSeriesSample:(HKLocationSeriesSample *)arg1;
- (void)clientRemote_updateTotalsWithQuantities:(NSDictionary *)arg1 resumeData:(NSDictionary *)arg2 UUIDs:(NSArray *)arg3;
@end

