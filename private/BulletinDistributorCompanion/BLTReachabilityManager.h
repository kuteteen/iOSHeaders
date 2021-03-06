//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PCInterfaceMonitorDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface BLTReachabilityManager : NSObject <PCInterfaceMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_updateQueue;
    _Bool _internetReachable;
}

+ (id)sharedInstance;
@property(getter=isInternetReachable) _Bool internetReachable; // @synthesize internetReachable=_internetReachable;
- (void).cxx_destruct;
- (void)interfaceRadioHotnessChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

