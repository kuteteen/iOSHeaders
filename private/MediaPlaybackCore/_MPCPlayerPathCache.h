//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface _MPCPlayerPathCache : NSObject
{
    NSMutableDictionary *_playerPathResolutions;
    NSMutableDictionary *_observers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

+ (id)sharedCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSMutableDictionary *playerPathResolutions; // @synthesize playerPathResolutions=_playerPathResolutions;
- (void).cxx_destruct;
- (void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)arg1 invalidationPlayerPath:(void *)arg2;
- (id)resolvedPlayerPathForPlayerPath:(id)arg1;
- (void)dealloc;
- (id)_init;

@end

