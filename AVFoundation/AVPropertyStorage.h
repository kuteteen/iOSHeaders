//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVPropertyStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_storageAccessWorkQueue;
    NSMutableDictionary *_propertyStorage;
    NSArray *_keysRequiringExplicitPerThreadSignal;
    long long _cachePolicy;
}

- (void)didAccessKVOForAllKeys;
- (void)willAccessKVOForAllKeys;
- (void)didAccessKVOForKey:(id)arg1;
- (void)willAccessKVOForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 defaultObjectBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldUsePropertyStorageCacheForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithCachePolicy:(long long)arg1 keysRequiringExplicitPerThreadSignal:(id)arg2;
- (id)init;

@end

