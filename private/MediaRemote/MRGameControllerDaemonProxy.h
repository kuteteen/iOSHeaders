//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GameControllerDaemonListener.h"

@class MRGameControllerDelayedEvents, NSString, NSXPCConnection;

@interface MRGameControllerDaemonProxy : NSObject <GameControllerDaemonListener>
{
    NSXPCConnection *_connection;
    id <GameControllerDaemon> _remote;
    MRGameControllerDelayedEvents *_delayedEvents;
}

+ (id)defaultGameControllerDaemonProxy;
- (void).cxx_destruct;
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2;
- (void)removeController:(id)arg1;
- (void)addController:(id)arg1;
- (void)replyConnectedHosts:(id)arg1;
- (_Bool)_delayEvent:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4;
- (void)controllerID:(unsigned long long)arg1 setArrayValueX:(float)arg2 y:(float)arg3 z:(float)arg4 w:(float)arg5 forElement:(int)arg6;
- (void)controllerID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;
- (void)controllerID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4;
- (void)removeEmulatedController:(id)arg1;
- (id)addEmulatedControllerWithProperties:(id)arg1;
- (void)_openConnection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

