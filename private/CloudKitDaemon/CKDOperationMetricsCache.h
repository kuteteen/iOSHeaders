//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKSQLite.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDOperationMetricsCache : CKSQLite
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

+ (id)dbFileName;
+ (id)sharedCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
- (void).cxx_destruct;
- (void)addOperationCombinedMetrics:(id)arg1 forOperationID:(id)arg2 operationType:(long long)arg3 appContainerTuple:(id)arg4;
- (void)flushMetricsToPowerLog;
- (id)init;

@end
