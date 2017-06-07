//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSXPCListenerDelegate-Protocol.h>
#import <Foundation/_NSExtensionContextVending-Protocol.h>

@class NSMutableDictionary, NSString;

@interface _NSExtensionContextVendor : NSObject <NSXPCListenerDelegate, _NSExtensionContextVending>
{
    NSMutableDictionary *__extensionServiceConnections;
    NSMutableDictionary *__extensionContexts;
    NSMutableDictionary *__extensionPrincipalObjects;
}

+ (id)_expirationConcurrentQueue;
+ (id)_completionConcurrentQueue;
+ (Class)_extensionContextClass;
+ (id)_extensionMainStoryboard;
+ (Class)_extensionPrincipalClass;
+ (id)_extensionDictionary;
+ (void)_startListening;
+ (void)_startListening:(_Bool)arg1;
+ (id)_sharedExtensionContextVendor;
@property(retain, nonatomic, setter=_setExtensionPrincipalObjects:) NSMutableDictionary *_extensionPrincipalObjects; // @synthesize _extensionPrincipalObjects=__extensionPrincipalObjects;
@property(retain, nonatomic, setter=_setExtensionContexts:) NSMutableDictionary *_extensionContexts; // @synthesize _extensionContexts=__extensionContexts;
@property(retain, nonatomic, setter=_setExtensionServiceConnections:) NSMutableDictionary *_extensionServiceConnections; // @synthesize _extensionServiceConnections=__extensionServiceConnections;
- (void)_setPrincipalObject:(id)arg1 forUUID:(id)arg2;
- (id)_extensionContextForUUID:(id)arg1;
- (void)_tearDownContextWithUUID:(id)arg1;
- (void)_hostDidBecomeActiveForContextUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hostWillResignActiveForContextUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hostWillEnterForegroundForContextUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hostDidEnterBackgroundForContextUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_beginRequestWithExtensionItems:(id)arg1 listenerEndpoint:(id)arg2 withContextUUID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_shouldCreatePrincipalObject;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

