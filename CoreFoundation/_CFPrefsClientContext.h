//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPrefsClientContext : NSObject
{
    struct os_unfair_lock_s _lock;
    // Error parsing type: A@, name: _cfprefsd
    struct __CFDictionary *_readPermissionsCache;
    struct __CFDictionary *_writePermissionsCache;
    struct __CFDictionary *_suiteCache;
    struct __CFArray *_ownedSources;
    NSObject<OS_xpc_object> *_observationConnection;
    NSObject<OS_xpc_object> *_entitlements;
    struct __CFBoolean *_sandboxed;
}

@end

