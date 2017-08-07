//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, WRMClientDelegate;

__attribute__((visibility("hidden")))
@interface WRMClient : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    id _wrmClientDelegate;
}

- (void)processNotificationList:(id)arg1;
- (void)setConfiguration:(CDStruct_69d7cc99 *)arg1;
- (void)reportMetricsFaceTimeCalling:(const CDStruct_0db8e210 *)arg1;
- (void)reportMetricsWifiCalling:(const CDStruct_0db8e210 *)arg1;
- (void)sendReport:(id)arg1;
- (void)dumpReport:(id)arg1;
- (void)sendStatusUpdateFaceTimeCalling:(const CDStruct_8aeecdac *)arg1;
- (void)sendStatusUpdateInfoFaceTimeCalling:(id)arg1;
- (void)requestNotificationFaceTimeCalling;
- (void)sendUnsubscriptionInfoFaceTimeCalling;
- (void)sendSubscriptionInfoFaceTimeCalling;
- (void)sendProcessInfoWithProcessID:(unsigned long long)arg1;
- (void)stopWRMClient;
- (void)startWRMClientWithMode:(int)arg1;
- (void)releaseServiceConnection;
- (_Bool)setupServiceConnection;
@property id <WRMClientDelegate> delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

