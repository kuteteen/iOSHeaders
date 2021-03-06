//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_source>;

@interface SDFFreshObjectQueue : NSObject
{
    double _lifetime;
    unsigned long long _expired;
    NSMutableArray *_queue;
    NSObject<OS_dispatch_source> *_flusher;
}

- (void).cxx_destruct;
- (void)_renewFlusher;
- (void)_flushOldObjects;
- (void)flushOldObjects;
- (id)debugDescription;
- (id)description;
- (unsigned long long)expiredObjectsCount;
- (unsigned long long)count;
- (void)removeObject:(id)arg1;
- (void)removeLastObject;
- (_Bool)containsObject:(id)arg1;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1 metadata:(id *)arg2 date:(id *)arg3;
- (id)objectAtIndex:(unsigned long long)arg1 metadata:(id *)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)_objectAtIndex:(unsigned long long)arg1 metadata:(id *)arg2 date:(id *)arg3;
- (void)addObject:(id)arg1 andMetadata:(id)arg2;
- (void)addObject:(id)arg1;
- (void)_addEntry:(id)arg1;
- (id)initWithObjectLifetime:(double)arg1;

@end

