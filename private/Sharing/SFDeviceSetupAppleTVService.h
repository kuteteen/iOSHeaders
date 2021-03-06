//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDeviceSetupOperationHandler, NSObject<OS_dispatch_queue>, SFClient, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession;

@interface SFDeviceSetupAppleTVService : NSObject
{
    _Bool _activateCalled;
    _Bool _advertiseFast;
    _Bool _invalidateCalled;
    SFClient *_preventExitForLocaleClient;
    SFService *_sfService;
    SFSession *_sfSession;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleBasicConfigRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

