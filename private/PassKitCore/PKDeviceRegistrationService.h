//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKXPCService;

@interface PKDeviceRegistrationService : NSObject
{
    PKXPCService *_remoteService;
    _Bool _isRegistering;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)performDeviceRegistrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

