//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface INCache : NSObject
{
    NSMutableDictionary *_cacheableObjectsForIdentifiers;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)removeAllCacheableObjects;
- (id)consumeCacheableObjectForIdentifier:(id)arg1;
- (id)cacheableObjectForIdentifier:(id)arg1;
- (void)removeCacheableObject:(id)arg1;
- (void)addCacheableObject:(id)arg1;
- (id)_init;
- (id)init;

@end

