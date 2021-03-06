//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSApplicationStateMonitor, NSArray, NSMutableArray, NSObject<NanoAppUsageMonitoring>, NanoAppDataProvider;

@interface NanoAppUsageMonitor : NSObject
{
    NSMutableArray *_recentlyUsedApps;
    BKSApplicationStateMonitor *_appStateMonitor;
    NanoAppDataProvider *_appDataProvider;
    NSObject<NanoAppUsageMonitoring> *_delegate;
}

@property(nonatomic) __weak NSObject<NanoAppUsageMonitoring> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NanoAppDataProvider *appDataProvider; // @synthesize appDataProvider=_appDataProvider;
- (void).cxx_destruct;
- (void)_logUsage;
- (void)_addUsage:(id)arg1;
- (void)_companionAppUsage:(id)arg1 date:(id)arg2;
@property(readonly, nonatomic) NSArray *recentlyUsedApps;
- (void)start:(CDUnknownBlockType)arg1;
- (id)init;

@end

