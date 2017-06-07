//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SKCloudServiceController : NSObject
{
    _Bool _hasValidCloudServiceCapability;
    unsigned long long _cloudServiceCapability;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (void)requestAuthorization:(CDUnknownBlockType)arg1;
+ (long long)authorizationStatus;
- (void)_updateCapabilitiesWithResponse:(id)arg1 postNotification:(_Bool)arg2;
- (void)_handleInvalidation;
- (void)_playbackCapabilitiesDidChangeNotification;
- (void)_storefrontDidChangeNotification;
- (void)_accountStoreDidChangeNotification;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestPersonalizationTokenForClientToken:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestUserTokenForDeveloperToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestCapabilitiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestStorefrontIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

