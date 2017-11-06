//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMFSessionDelegate.h"

@class FMFSession, NAFuture, NSString;

@interface HULocationDeviceManager : NSObject <FMFSessionDelegate>
{
    FMFSession *_fmfSession;
    NAFuture *_activeFMFDeviceFuture;
    NAFuture *_availableFMFDevicesFuture;
}

@property(retain, nonatomic) NAFuture *availableFMFDevicesFuture; // @synthesize availableFMFDevicesFuture=_availableFMFDevicesFuture;
@property(retain, nonatomic) NAFuture *activeFMFDeviceFuture; // @synthesize activeFMFDeviceFuture=_activeFMFDeviceFuture;
@property(readonly, nonatomic) FMFSession *fmfSession; // @synthesize fmfSession=_fmfSession;
- (void).cxx_destruct;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (id)updateActiveLocationDevice:(id)arg1;
@property(readonly, nonatomic) NAFuture *availableLocationDevicesFuture;
@property(readonly, nonatomic) NAFuture *activeLocationDeviceFuture;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
