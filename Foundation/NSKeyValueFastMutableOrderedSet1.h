//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSKeyValueFastMutableOrderedSet.h>

@class NSKeyValueNonmutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet1 : NSKeyValueFastMutableOrderedSet
{
    NSKeyValueNonmutatingOrderedSetMethodSet *_nonmutatingMethods;
}

+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)count;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end

