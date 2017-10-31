//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CUPowerSourceMonitor : NSObject
{
    _Bool _activateCalled;
    NSMutableDictionary *_powerSources;
    int _psNotifyTokenAccessoryAttach;
    int _psNotifyTokenAccessoryPowerSource;
    int _psNotifyTokenAccessoryTimeRemaining;
    int _psNotifyTokenAnyPowerSource;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _powerSourceFoundHandler;
    CDUnknownBlockType _powerSourceLostHandler;
    CDUnknownBlockType _powerSourceChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType powerSourceChangedHandler; // @synthesize powerSourceChangedHandler=_powerSourceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType powerSourceLostHandler; // @synthesize powerSourceLostHandler=_powerSourceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType powerSourceFoundHandler; // @synthesize powerSourceFoundHandler=_powerSourceFoundHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void).cxx_destruct;
- (void)_handlePowerSourceUpdate:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_handlePowerSourceLost:(id)arg1 sourceID:(id)arg2;
- (void)_handlePowerSourceFound:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_updatePowerSources;
- (void)_update;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

