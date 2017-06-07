//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLQueueNode;

__attribute__((visibility("hidden")))
@interface NSURLQueue : NSObject
{
    unsigned long long count;
    NSURLQueueNode *head;
    NSURLQueueNode *tail;
    id monitor;
    _Bool waitOnTake;
    _Bool _pad1;
    _Bool _pad2;
    _Bool _pad3;
}

+ (id)newNode;
- (void)setWaitOnTake:(_Bool)arg1;
- (_Bool)waitOnTake;
- (unsigned long long)count;
- (_Bool)isEmpty;
- (long long)indexOf:(id)arg1;
- (void)clear;
- (_Bool)remove:(id)arg1;
- (id)peekAt:(unsigned long long)arg1;
- (id)peek;
- (id)take;
- (void)put:(id)arg1;
- (void)dealloc;
- (id)init;

@end

