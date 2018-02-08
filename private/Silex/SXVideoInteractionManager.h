//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoTransitionObserver.h"

@class NSMapTable, NSMutableSet, NSString;

@interface SXVideoInteractionManager : NSObject <SXVideoTransitionObserver>
{
    NSMutableSet *_controls;
    NSMapTable *_registeredHandlers;
    NSMapTable *_interactionHandlers;
    NSMapTable *_interactionHandlerFactories;
    NSMapTable *_interactionObservers;
    NSMapTable *_interactionObserverFactories;
}

@property(readonly, nonatomic) NSMapTable *interactionObserverFactories; // @synthesize interactionObserverFactories=_interactionObserverFactories;
@property(readonly, nonatomic) NSMapTable *interactionObservers; // @synthesize interactionObservers=_interactionObservers;
@property(readonly, nonatomic) NSMapTable *interactionHandlerFactories; // @synthesize interactionHandlerFactories=_interactionHandlerFactories;
@property(readonly, nonatomic) NSMapTable *interactionHandlers; // @synthesize interactionHandlers=_interactionHandlers;
@property(readonly, nonatomic) NSMapTable *registeredHandlers; // @synthesize registeredHandlers=_registeredHandlers;
@property(readonly, nonatomic) NSMutableSet *controls; // @synthesize controls=_controls;
- (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)registerControl:(id)arg1 withInteractionObserverFactory:(id)arg2;
- (void)registerControl:(id)arg1 withInteractionHandlerFactory:(id)arg2;
- (void)registerControl:(id)arg1 withInteractionHandler:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

