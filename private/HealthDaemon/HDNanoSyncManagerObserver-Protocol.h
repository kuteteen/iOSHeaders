//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDNanoSyncManager, HKNanoSyncPairedDevicesSnapshot;

@protocol HDNanoSyncManagerObserver <NSObject>
- (void)nanoSyncManager:(HDNanoSyncManager *)arg1 pairedDevicesChanged:(HKNanoSyncPairedDevicesSnapshot *)arg2;
@end

