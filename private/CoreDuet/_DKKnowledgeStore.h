//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKKnowledgeDeleting.h"
#import "_DKKnowledgeEventStreamDeleting.h"
#import "_DKKnowledgeQuerying.h"
#import "_DKKnowledgeSaving.h"
#import "_DKKnowledgeSynchronizing.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection, _DKPrivacyPolicyEnforcer, _DKRateLimitPolicyEnforcer;

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_defaultQueue;
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;
}

+ (id)knowledgeStoreWithDirectReadOnlyAccessWithStore:(id)arg1 storeDirectory:(id)arg2;
+ (id)knowledgeStoreWithDirectReadOnlyAccessWithConnection:(id)arg1 storeDirectory:(id)arg2;
+ (id)userKnowledgeStoreWithDirectReadOnlyAccess;
+ (id)knowledgeStoreWithDirectReadOnlyAccess;
+ (id)userKnowledgeStore;
+ (id)knowledgeStore;
@property(readonly) _DKPrivacyPolicyEnforcer *privacyEnforcer; // @synthesize privacyEnforcer=_privacyEnforcer;
@property(readonly) _DKRateLimitPolicyEnforcer *rateLimitEnforcer; // @synthesize rateLimitEnforcer=_rateLimitEnforcer;
@property(retain) NSObject<OS_dispatch_queue> *defaultQueue; // @synthesize defaultQueue=_defaultQueue;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (_Bool)deleteRemoteState:(id *)arg1;
- (_Bool)synchronizeWithError:(id *)arg1;
- (_Bool)confirmConnectionWithError:(id *)arg1;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (_Bool)deleteObjects:(id)arg1 error:(id *)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)saveObjects:(id)arg1 error:(id *)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)init;

@end

