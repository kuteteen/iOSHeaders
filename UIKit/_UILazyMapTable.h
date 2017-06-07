//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UILazyMapTable : NSObject
{
    CDUnknownBlockType _mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}

- (void).cxx_destruct;
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;
- (id)cachedObjectEnumerable;
- (id)keyEnumerable;
- (id)cachedObjects;
- (id)keys;
- (_Bool)hasCachedObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)initWithMappingBlock:(CDUnknownBlockType)arg1;

@end

