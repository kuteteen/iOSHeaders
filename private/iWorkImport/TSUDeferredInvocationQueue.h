//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSUDeferredInvocationQueue : NSObject
{
    NSMutableArray *_invocations;
    id _target;
}

- (void)performInvocations;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)dealloc;

@end
