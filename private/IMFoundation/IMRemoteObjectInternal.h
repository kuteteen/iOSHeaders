//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRecursiveLock, NSString, Protocol;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface IMRemoteObjectInternal : NSObject
{
    NSRecursiveLock *_lock;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _deathPostPredicate;
    Protocol *_protocol;
    NSString *_portName;
    NSString *_processName;
    _Bool _forceSecureCoding;
    _Bool _willBeTerminated;
    int _pid;
}

@end
