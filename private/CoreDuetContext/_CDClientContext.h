//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CDUserContext.h"
#import "_CDUserContextServerMonitoring.h"

@class NSCountedSet, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface _CDClientContext : NSObject <_CDUserContext, _CDUserContextServerMonitoring>
{
    _Bool _interrupted;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSXPCConnection *_xpcConnection;
    NSXPCListenerEndpoint *_endpoint;
    NSMutableDictionary *_keyPathToValues;
    NSMutableDictionary *_registrations;
    NSCountedSet *_keyPathsWithRegistrationsForAnyChange;
    NSObject<OS_dispatch_queue> *_registrationCallbackQueue;
    NSMutableDictionary *_openRegistrationTokens;
    NSObject<OS_os_log> *_log;
}

+ (id)userContext;
+ (id)clientInterface;
+ (id)serverInterface;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSMutableDictionary *openRegistrationTokens; // @synthesize openRegistrationTokens=_openRegistrationTokens;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue; // @synthesize registrationCallbackQueue=_registrationCallbackQueue;
@property(retain, nonatomic) NSCountedSet *keyPathsWithRegistrationsForAnyChange; // @synthesize keyPathsWithRegistrationsForAnyChange=_keyPathsWithRegistrationsForAnyChange;
@property(retain, nonatomic) NSMutableDictionary *registrations; // @synthesize registrations=_registrations;
@property(retain, nonatomic) NSMutableDictionary *keyPathToValues; // @synthesize keyPathToValues=_keyPathToValues;
@property(nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2;
- (id)localContext;
- (_Bool)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (_Bool)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (void)handleRegistrationCompleted:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)handleContextualChange:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)evaluatePredicate:(id)arg1;
- (void)deregisterCallback:(id)arg1;
- (void)cleanupInternalReferencesToRegistration:(id)arg1;
- (void)registerCallback:(id)arg1;
- (void)retryTimes:(int)arg1 block:(CDUnknownBlockType)arg2;
- (void)clearCacheForKeyPathsWithFireOnChangeRegistrations:(id)arg1;
- (void)removeKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1;
- (void)addKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1;
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForContextualKeyPath:(id)arg1;
- (_Bool)hasKnowledgeOfContextualKeyPath:(id)arg1;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (void)setUpXPCConnectionWithEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

