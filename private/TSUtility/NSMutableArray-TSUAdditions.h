//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TSUAdditions)
- (void)trimObjectsFromIndex:(unsigned long long)arg1;
- (void)removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)removeObjectsIdenticalToObjectsInSet:(id)arg1;
- (void)addObjectsFromNonNilArray:(id)arg1;
- (void)addNonNilObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (id)pop_tsu;
- (void)push_tsu:(id)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 withObject:(id)arg2 onObjectsFromArray:(id)arg3;
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 onObjectsFromArray:(id)arg2;
@end
