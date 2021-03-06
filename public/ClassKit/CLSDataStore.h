//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSFaultProcessorDelegate.h"

@class CLSActivity, CLSContext, CLSCurrentUser, CLSEndpointConnection, CLSGraph, NSMutableDictionary, NSMutableSet, NSString;

@interface CLSDataStore : NSObject <CLSFaultProcessorDelegate>
{
    NSMutableSet *_dataObservers;
    struct NSMutableDictionary *_deletedObjectsByID;
    NSMutableDictionary *_objectGenerationsByID;
    CLSCurrentUser *_cachedCurrentUser;
    int _accountChangeToken;
    id <CLSDataStoreDelegate> _delegate;
    CLSContext *_mainAppContext;
    CLSEndpointConnection *_endpointConnection;
    CLSGraph *_graph;
}

+ (_Bool)isDashboardApp;
+ (_Bool)isPDTool;
+ (id)newDatastore;
+ (_Bool)isAvailable;
+ (id)shared;
+ (Class)endpointClass;
@property(readonly, nonatomic) CLSGraph *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) CLSEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
@property(retain, nonatomic) CLSContext *mainAppContext; // @synthesize mainAppContext=_mainAppContext;
@property(nonatomic) __weak id <CLSDataStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)faultProcessor:(id)arg1 shouldFaultRelation:(id)arg2 fromObject:(struct NSObject *)arg3;
- (void)deregisterDataObserver:(id)arg1;
- (void)registerDataObserver:(id)arg1;
- (void)currentUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)reset;
- (void)developerModeChanged:(id)arg1;
- (void)setShouldSyncTeacherBrowsedContexts:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shouldSyncTeacherBrowsedContextsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchTransparencyMessageInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)triggerProgressTransparencyMessageIfNeeded;
- (_Bool)isAppClient;
@property(readonly, nonatomic) CLSActivity *runningActivity;
@property(readonly, nonatomic) CLSContext *activeContext;
- (id)dataServer:(CDUnknownBlockType)arg1;
- (void)contextsMatchingIdentifierPath:(id)arg1 parentContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)contextsMatchingIdentifierPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeContextWithObjectID:(id)arg1;
- (void)removeContext:(id)arg1;
- (_Bool)isRemovedObject:(id)arg1;
- (void)markObjectAsDeleted:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectWithObjectID:(id)arg1 class:(Class)arg2;
- (id)_addObject:(id)arg1;
- (id)addObject:(id)arg1;
- (void)saveObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (void)contextsMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contextsMatchingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)allContexts;
- (id)appIdentifier;
- (void)_refreshMainAppContext;
- (void)faultMainAppContext;
- (void)refreshMainAppContext;
- (void)_createMainAppContext;
- (id)cachedMainAppContext;
- (void)awaitExecuteQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeQuery:(id)arg1;
@property(retain, nonatomic) CLSCurrentUser *cachedCurrentUser;
- (void)_reconnect;
- (void)_reenableObservers;
- (void)_registerForDarwinNotifications;
- (void)_connectionConnected;
- (void)_connectionInterupted;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (id)init;
- (_Bool)isAllowedToInsertObject:(id)arg1;
- (_Bool)isDashboardAPIEnabled;
- (void)classesForPersonID:(id)arg1 role:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)personsInClassWithClassID:(id)arg1 role:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)instructedClassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_classesForCurrentUserWithRole:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeFavorite:(id)arg1;
- (void)addFavorite:(id)arg1;
- (void)handoutAttachmentForDocumentURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)publishHandout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeHandout:(id)arg1;
- (void)addHandout:(id)arg1;
- (void)enrolledClassesWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

