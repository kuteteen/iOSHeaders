//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface __NSCFDictionary : NSMutableDictionary
{
    unsigned char _cfinfo[4];
    unsigned int _rc;
    unsigned int _bits[4];
    void *_callbacks;
    id *_values;
    id *_keys;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (unsigned long long)retainCount;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (oneway void)release;
- (id)retain;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllObjects;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (Class)classForCoder;
- (void)setObservationInfo:(void *)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;

@end

