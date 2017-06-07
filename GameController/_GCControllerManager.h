//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/GameControllerClientProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSThread, NSTimer, NSXPCConnection;
@protocol GameControllerDaemon, OS_dispatch_queue;

@interface _GCControllerManager : NSObject <GameControllerClientProtocol>
{
    NSXPCConnection *_connection;
    id <GameControllerDaemon> _remote;
    struct __IOHIDManager *_hidManager;
    NSMutableDictionary *_controllersByUDID;
    NSMutableDictionary *_controllersByRegistryID;
    struct IONotificationPort *_usbNotify;
    unsigned int _usbAddedIterator;
    unsigned int _usbRemovedIterator;
    CDUnknownBlockType _logger;
    _Bool _idleTimerNeedsReset;
    NSTimer *_idleWatchTimer;
    _Bool _shouldKeepRunning;
    CDUnknownBlockType _requestConnectedHostsCallback;
    NSObject<OS_dispatch_queue> *_controllersQueue;
    long long _currentMediaRemoteInputMode;
    struct __IOHIDEventSystemClient *_hidSystemClient;
    NSObject<OS_dispatch_queue> *_hidSystemClientQueue;
    _Bool _isAppInBackground;
    NSThread *_hidInputThread;
    struct __CFRunLoop *_hidInputThreadRunLoop;
    struct __CFRunLoopSource *_hidThreadRunLoopSource;
    NSMutableArray *_hidThreadExecutionBlocks;
}

@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *controllersQueue; // @synthesize controllersQueue=_controllersQueue;
@property(readonly, nonatomic) NSMutableArray *hidThreadExecutionBlocks; // @synthesize hidThreadExecutionBlocks=_hidThreadExecutionBlocks;
@property(readonly, nonatomic) struct __CFRunLoopSource *hidThreadRunLoopSource; // @synthesize hidThreadRunLoopSource=_hidThreadRunLoopSource;
@property(readonly, nonatomic) struct __CFRunLoop *hidInputThreadRunLoop; // @synthesize hidInputThreadRunLoop=_hidInputThreadRunLoop;
@property(readonly, retain, nonatomic) NSThread *hidInputThread; // @synthesize hidInputThread=_hidInputThread;
@property(nonatomic) _Bool idleTimerNeedsReset; // @synthesize idleTimerNeedsReset=_idleTimerNeedsReset;
@property(retain, nonatomic) id <GameControllerDaemon> remote; // @synthesize remote=_remote;
@property(copy, nonatomic) CDUnknownBlockType logger; // @synthesize logger=_logger;
@property(nonatomic) struct __IOHIDManager *hidManager; // @synthesize hidManager=_hidManager;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) _Bool isAppInBackground; // @synthesize isAppInBackground=_isAppInBackground;
- (void).cxx_destruct;
- (void)open;
- (id)controllers;
- (void)removeController:(id)arg1;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue0:(float)arg2 setValue1:(float)arg3 setValue2:(float)arg4 setValue3:(float)arg5 forElement:(int)arg6;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (_Bool)isPhysicalB239:(id)arg1;
- (void)controller:(id)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2;
- (void)addController:(id)arg1;
- (_Bool)isExistingController:(id)arg1;
- (void)replyConnectedHosts:(id)arg1;
- (void)requestConnectedHostsWithHandler:(CDUnknownBlockType)arg1;
- (void)startIdleWatchTimer;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;
- (id)firstMicroGamepad;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (void)updateIdleTimer:(id)arg1;
- (void)async_HIDBlock:(CDUnknownBlockType)arg1;
- (void)launchHIDInputThread;
- (void)threadHIDInputOnMain:(id)arg1;
- (void)threadHIDInputOffMain:(id)arg1;
- (void)updateControllerWithEvent:(struct __IOHIDEvent *)arg1;
- (void)removeControllerWithServiceRef:(struct __IOHIDServiceClient *)arg1;
- (void)addControllerWithServiceRef:(struct __IOHIDServiceClient *)arg1;
- (void)stopHIDEventMonitor;
- (void)startHIDEventMonitor;
- (void)addConnectedDevices;
- (void)stopHIDDeviceMonitor;
- (void)startHIDDeviceMonitor;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

