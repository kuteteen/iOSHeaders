//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "HMFTimerDelegate.h"

@class HMDHomeManager, HMDUnassociatedMediaAccessory, HMFMessageDispatcher, HMFTimer, NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate>
{
    NSMutableSet *_accessoryAdvertisements;
    _Bool _discoverUnassociatedAccessories;
    _Bool _discoverAssociatedAccessories;
    _Bool _updateAvailableEndpoints;
    id <HMDMediaBrowserDelegate> _delegate;
    HMDHomeManager *_homeManager;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    void *_discoverySession;
    void *_discoverySessionCallbackToken;
    HMFTimer *_discoveryPollTimer;
    NSMutableSet *_identifiersOfAssociatedMediaAccessories;
}

+ (id)logCategory;
+ (id)shortDescription;
@property(retain, nonatomic) NSMutableSet *identifiersOfAssociatedMediaAccessories; // @synthesize identifiersOfAssociatedMediaAccessories=_identifiersOfAssociatedMediaAccessories;
@property(nonatomic) _Bool updateAvailableEndpoints; // @synthesize updateAvailableEndpoints=_updateAvailableEndpoints;
@property(retain, nonatomic) HMFTimer *discoveryPollTimer; // @synthesize discoveryPollTimer=_discoveryPollTimer;
@property(nonatomic) void *discoverySessionCallbackToken; // @synthesize discoverySessionCallbackToken=_discoverySessionCallbackToken;
@property(readonly, nonatomic) void *discoverySession; // @synthesize discoverySession=_discoverySession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property __weak id <HMDMediaBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)deregisterAccessories:(id)arg1;
- (void)updateAccessories:(id)arg1;
- (id)unassociatedAccessoryFromAdvertisementData:(id)arg1;
- (void)_handleAvailableEndpoints:(struct __CFArray *)arg1;
- (void)checkForUpdatedAvailableEndpoints:(struct __CFArray *)arg1;
- (id)dumpDescription;
- (void)stopDiscoveringUnassociatedAccessories;
- (void)startDiscoveringUnassociatedAccessories;
- (void)stopDiscoveringAssociatedAccessories;
- (void)startDiscoveringAssociatedAccessories;
- (void)_stopDiscoveringAccessories;
- (void)_startDiscoveringAccessories;
- (void)_notifyDelegateOfUpdatedEndpoints:(id)arg1;
- (void)_notifyDelegateOfRemovedSessions:(id)arg1;
- (void)_removeSessions:(id)arg1;
- (void)_notifyDelegateOfRemovedAdvertisements:(id)arg1;
- (void)_removeAdvertisements:(id)arg1;
- (void)_notifyDelegateOfAddedAdvertisements:(id)arg1;
- (void)_addAdvertisements:(id)arg1;
@property(readonly, copy) NSArray *accessoryAdvertisements;
@property(readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property(readonly) HMFMessageDispatcher *messageDispatcher;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

