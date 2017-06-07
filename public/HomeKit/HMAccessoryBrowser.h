//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMDelegateCaller, HMFMessageDispatcher, HMThreadSafeMutableArrayCollection, HMXpcClient, NSArray, NSString, NSUUID;
@protocol HMAccessoryBrowserDelegate, OS_dispatch_queue;

@interface HMAccessoryBrowser : NSObject <HMFMessageReceiver>
{
    _Bool _browsing;
    id <HMAccessoryBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
    NSUUID *_uuid;
    HMThreadSafeMutableArrayCollection *_accessories;
    HMXpcClient *_xpcClient;
    HMFMessageDispatcher *_msgDispatcher;
    unsigned long long _generationCounter;
}

@property(nonatomic, getter=isBrowsing) _Bool browsing; // @synthesize browsing=_browsing;
@property(nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMXpcClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(retain, nonatomic) HMThreadSafeMutableArrayCollection *accessories; // @synthesize accessories=_accessories;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleNewAccessoriesRemoved:(id)arg1;
- (void)_handleNewAccessoriesFound:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_updateNewAccessories:(id)arg1;
- (void)_fetchNewAccessories;
- (void)_fetchNewAccessoriesWithPrivacyCheck;
- (void)_start;
- (void)_stopSearchingForNewAccessories;
- (void)stopSearchingForNewAccessories;
- (void)handleStartWithError:(id)arg1 response:(id)arg2;
- (void)_startSearchingForNewAccessories;
- (void)startSearchingForNewAccessories;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)init;
@property(readonly, copy, nonatomic) NSArray *discoveredAccessories;
@property(nonatomic) __weak id <HMAccessoryBrowserDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
