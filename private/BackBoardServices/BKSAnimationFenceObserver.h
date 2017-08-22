//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable;
@protocol OS_dispatch_queue;

@interface BKSAnimationFenceObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_handleNameToTraceMap;
    NSMapTable *_handleNameToFenceNameMap;
    NSMapTable *_fenceNameToHandleNamesMap;
    NSMapTable *_fenceNameToDeathSentinelMap;
    NSHashTable *_validDeathSentinelsTable;
    unsigned int _lastHandleName;
    unsigned int _encodeCount;
}

+ (unsigned int)countFromEncodeIdentifier:(unsigned long long)arg1;
+ (int)pidFromEncodeIdentifier:(unsigned long long)arg1;
+ (id)sharedInstance;
- (id)description;
- (unsigned long long)nextEncodeIdentifier;
- (void)removeHandleWithName:(unsigned long long)arg1;
- (unsigned long long)addHandle:(id)arg1;
- (void)dealloc;
- (id)init;

@end

