//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSGraphVertex.h"
#import "CLSRelationable.h"
#import "NSSecureCoding.h"

@class CLSDataStore, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CLSObject : NSObject <CLSRelationable, CLSGraphVertex, NSSecureCoding>
{
    _Bool _deleted;
    _Bool _modified;
    CLSDataStore *_dataStore;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_childrenByID;
    CLSObject *_parent;
    _Bool _temporary;
    unsigned int _generation;
    NSDate *_dateCreated;
    NSDate *_dateLastModified;
    NSString *__appIdentifier;
    NSString *_objectID;
    NSString *__parentObjectID;
}

+ (id)dateFormatter;
+ (_Bool)supportsSecureCoding;
+ (id)relations;
@property(copy, nonatomic) NSString *_parentObjectID; // @synthesize _parentObjectID=__parentObjectID;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(copy, nonatomic) NSString *_appIdentifier; // @synthesize _appIdentifier=__appIdentifier;
@property unsigned int generation; // @synthesize generation=_generation;
@property(nonatomic, getter=isTemporary) _Bool temporary; // @synthesize temporary=_temporary;
@property(retain, nonatomic) NSDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
- (void).cxx_destruct;
- (void)sync;
- (id)dictionaryRepresentation;
- (void)removeMetaProperty:(id)arg1;
- (void)addMetaProperty:(id)arg1;
- (id)metaProperties;
- (_Bool)validateObject:(id *)arg1;
- (void)didSaveObject;
- (void)willSaveObject;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isModified) _Bool modified;
@property(nonatomic, getter=isDeleted) _Bool deleted;
- (void)enumerateTree:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *parentObjectID;
@property(copy, nonatomic) NSString *appIdentifier;
@property(nonatomic) __weak CLSObject *parent;
- (void)mergeWithObject:(id)arg1;
- (void)removeChild:(id)arg1 changedPropertyName:(id)arg2;
- (void)removeChild:(id)arg1;
- (void)_addChild:(id)arg1;
- (void)addChild:(id)arg1 changedPropertyName:(id)arg2;
- (void)addChild:(id)arg1;
- (void)enumerateChildren:(CDUnknownBlockType)arg1;
- (id)childrenPassingTest:(CDUnknownBlockType)arg1;
- (id)childrenOfClass:(Class)arg1;
@property(nonatomic) __weak CLSDataStore *dataStore;
@property(readonly, nonatomic) id vertexID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)init;
- (id)initWithDeletedObjectID:(id)arg1;
- (id)identity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

