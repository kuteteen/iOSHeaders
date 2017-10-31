//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import "HMDAWDLogEvent.h"
#import "HomeKitEventRemoteLoginMetricProtocol.h"

@class AWDHomeKitRemoteLogout, NSDate, NSString;

@interface HomeKitEventRemoteLogoutEvent : HMDLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol>
{
    AWDHomeKitRemoteLogout *_metric;
    NSDate *_startTime;
}

+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) AWDHomeKitRemoteLogout *metric; // @synthesize metric=_metric;
- (void).cxx_destruct;
- (void)setError:(id)arg1;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

