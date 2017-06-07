//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMDeviceSetupSessionDelegate-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/TROperationHandler-Protocol.h>

@class HMDeviceSetupSession, NSString;

@interface HMDeviceSetupOperationHandler : NSObject <HMDeviceSetupSessionDelegate, HMFLogging, TROperationHandler>
{
    HMDeviceSetupSession *_setupSession;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDeviceSetupSession *setupSession; // @synthesize setupSession=_setupSession;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupSession:(id)arg1 didCloseWithError:(id)arg2;
- (void)_handleReceivedRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

