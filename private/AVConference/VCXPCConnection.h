//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface VCXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    int _pid;
    id context;
    NSData *tokenData;
    NSObject<OS_os_transaction> *_transaction;
    _Bool _isPersistent;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_queue> *_timeoutTimerQueue;
    _Bool _timeoutTimerStarted;
}

+ (void)selfTerminateDueToTimeout:(int)arg1;
@property(retain, nonatomic) NSData *tokenData; // @synthesize tokenData;
@property(retain, nonatomic) id context; // @synthesize context;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property(getter=isPersistent) _Bool persistent;
- (id)description;
@property int pid;
- (void)destroyTimeoutTimer;
- (void)createTimeoutTimer;
- (void)stopTimeoutTimer;
- (void)startTimeoutTimer;
- (void)dealloc;
- (id)init;

@end

