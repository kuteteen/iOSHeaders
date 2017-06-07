//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/EKFrozenMeltedPair-Protocol.h>
#import <EventKit/EKProtocolMutableObject-Protocol.h>

@class EKChangeSet, EKEventStore, EKPersistentObject, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface EKObject : NSObject <EKFrozenMeltedPair, EKProtocolMutableObject>
{
    EKPersistentObject *_persistentObject;
    EKChangeSet *_changeSet;
    NSMutableDictionary *__cachedMeltedObjects;
    NSDictionary *_additionalFrozenProperties;
    NSMutableDictionary *__cachedValues;
}

+ (id)propertiesUnavailableForPartialObjects;
+ (Class)frozenClass;
+ (Class)meltedClass;
+ (_Bool)isMeltedAndNotWeakRelationshipObject:(id)arg1 forKey:(id)arg2;
+ (id)knownImmutableKeys;
+ (id)knownDerivedRelationshipKeys;
+ (id)knownRelationshipWeakKeys;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownDerivedAndSingleValueRelationshipKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (_Bool)isDerivedRelationship;
+ (_Bool)isWeakRelationship;
+ (unsigned long long)_numberOfSharedLocksForUnitTesting;
@property(retain, nonatomic) NSMutableDictionary *_cachedValues; // @synthesize _cachedValues=__cachedValues;
@property(retain, nonatomic) NSDictionary *additionalFrozenProperties; // @synthesize additionalFrozenProperties=_additionalFrozenProperties;
@property(retain, nonatomic) NSMutableDictionary *_cachedMeltedObjects; // @synthesize _cachedMeltedObjects=__cachedMeltedObjects;
@property(retain, nonatomic) EKChangeSet *changeSet; // @synthesize changeSet=_changeSet;
- (void).cxx_destruct;
- (void)deletePersistentObject;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (void)updatePersistentObject;
- (void)insertPersistentObjectIfNeeded;
- (void)didCommit;
- (id)_propertyValueForKey:(id)arg1;
- (void)_updatePersistentValueForKey:(id)arg1;
- (void)updatePersistentValueForKeyIfNeeded:(id)arg1;
- (void)_performBlockOnOwnedRelatedObjects:(CDUnknownBlockType)arg1;
- (void)markAsCommitted;
- (void)markAsSaved;
- (void)markAsUndeleted;
- (void)markAsDeleted;
- (void)markAsNotNew;
- (void)markAsNew;
- (id)committedValueForKey:(id)arg1;
- (_Bool)refresh;
- (_Bool)_reset;
- (void)reset;
- (void)rollback;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)existsInStore;
- (int)rowID;
- (id)objectID;
@property(retain, nonatomic) EKEventStore *eventStore;
- (void)rebaseSkippingRelationProperties:(id)arg1;
- (void)rebase;
@property(readonly, nonatomic) _Bool isPartialObject;
- (_Bool)isPropertyUnavailable:(id)arg1;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly, nonatomic) _Bool canBeConvertedToFullObject;
@property(readonly, nonatomic) _Bool isFrozen;
- (id)existingMeltedObject;
- (id)meltedObjectInStore:(id)arg1;
- (_Bool)isEqual:(id)arg1 ignoringProperties:(id)arg2;
- (_Bool)isCompletelyEqual:(id)arg1;
- (EKPersistentObject_556b3b22 *)frozenObject;
- (id)initWithObject:(id)arg1;
@property(readonly, nonatomic) _Bool hasChanges;
@property(readonly, nonatomic, getter=isNew) _Bool new;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (_Bool)_isPropertyUnavailable:(id)arg1 convertToFullObjectIfUnavailable:(_Bool)arg2;
- (void)setPersistentObject:(id)arg1;
- (id)persistentObject;
- (void)dealloc;
- (id)initWithPersistentObject:(id)arg1;
- (id)init;
- (void)_emptyMeltedCacheForKey:(id)arg1;
- (void)emptyMeltedCache;
- (void)_resetMeltedCache;
- (void)updatedMeltedCacheForChangeSet:(id)arg1;
- (unsigned long long)meltedAndCachedMultiRelationCountForKey:(id)arg1;
- (void)updateMeltedAndCachedMultiRelationObjects:(id)arg1 forKey:(id)arg2;
- (id)meltedAndCachedMultiRelationObjectsForKey:(id)arg1;
- (void)updateMeltedAndCachedSingleRelationObject:(id)arg1 forKey:(id)arg2 frozenClass:(Class)arg3;
- (id)meltedAndCachedSingleRelationObjectForKey:(id)arg1;
- (id)frozenOrMeltedCachedSingleRelationObjectForKey:(id)arg1;
- (id)cachedMeltedObjectForSingleValueKey:(id)arg1;
- (void)setCachedMeltedObject:(id)arg1 forSingleValueKey:(id)arg2;
- (id)cachedMeltedObjectsForMultiValueKey:(id)arg1;
- (void)setCachedMeltedObjects:(id)arg1 forMultiValueKey:(id)arg2;
- (void)_removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;
- (void)removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;
- (void)_addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;
- (void)addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;
- (void)_updateCachedMeltedObjectSetForMultiValueKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_cachedMeltedObjectsCount;
- (void)_applyKnownImmutableValuesFrom:(id)arg1;
- (void)_applyDefinedAfterFirstSaveFrom:(id)arg1;
- (void)_resetWithFrozenObject:(EKPersistentObject_556b3b22 *)arg1;
- (_Bool)revert;
- (void)refetch;
- (_Bool)_refreshCommon;
- (_Bool)_refreshable;
- (_Bool)_resetCommon;
- (void)_rollbackCommon;
- (id)changedKeys;
- (void)replaceMultiChangedObjectValuesWithObjectValues:(id)arg1 forKey:(id)arg2;
- (void)removeMultiChangedObjectValues:(id)arg1 forKey:(id)arg2;
- (void)removeMultiChangedObjectValue:(id)arg1 forKey:(id)arg2;
- (void)addMultiChangedObjectValues:(id)arg1 forKey:(id)arg2;
- (void)addMultiChangedObjectValue:(id)arg1 forKey:(id)arg2;
- (id)multiChangedObjectValuesForKey:(id)arg1;
- (void)setSingleChangedValue:(id)arg1 forKey:(id)arg2;
- (id)singleChangedValueForKey:(id)arg1;
- (void)applyChanges:(id)arg1;
- (void)addChanges:(id)arg1;
- (void)_addChangesFromObject:(id)arg1 except:(id)arg2 keep:(id)arg3;
- (void)addChangesFromObject:(id)arg1 keep:(id)arg2;
- (void)addChangesFromObject:(id)arg1 except:(id)arg2;
- (void)addChangesFromObject:(id)arg1;
- (id)_previousValueForKey:(id)arg1;
- (id)previouslySavedObject;
- (_Bool)_areOnlyChangedKeys:(id)arg1;
- (_Bool)_isOnlyChangedKey:(id)arg1;
- (_Bool)_hasChangesForKey:(id)arg1 checkUnsaved:(_Bool)arg2;
- (_Bool)_hasChangesForKey:(id)arg1;
- (id)_multiRelationshipKeysToCheckForChanges;
- (id)_singleRelationshipKeysToCheckForChanges;
- (_Bool)_hasChangeHelperInKeys:(id)arg1 ignoreKeys:(id)arg2 checkUnsaved:(_Bool)arg3;
- (_Bool)_hasUnsavedChangesInKeys:(id)arg1 ignoreKeys:(id)arg2;
- (_Bool)hasUnsavedChangesIgnoreKeys:(id)arg1;
- (_Bool)hasUnsavedChangesInKeys:(id)arg1;
- (_Bool)hasUnsavedChanges;
- (_Bool)_hasChanges;
- (_Bool)isSaved;
- (_Bool)isUndeleted;
- (_Bool)isDeleted;
- (_Bool)_isNew;
- (void)_markAsCommittedCommon;
- (void)_markAsSavedCommon;
- (void)_markAsUndeletedCommon;
- (void)_markAsDeletedCommon;
- (void)_markAsNotNewCommon;
- (void)_markAsNewCommon;
- (void)_initChangeSetIfNone;
- (_Bool)validateWithOwner:(id)arg1 error:(id *)arg2;
- (_Bool)validate:(id *)arg1;
- (id)cachedValueForKey:(id)arg1 expectingCachedValue:(id)arg2 forMasterKey:(id)arg3 relatedKeys:(id)arg4 populateBlock:(CDUnknownBlockType)arg5;
- (void)clearCachedValuesForKeys:(id)arg1;
- (void)clearCachedValueForKey:(id)arg1;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (id)cachedValueForKey:(id)arg1 populateBlock:(CDUnknownBlockType)arg2;
- (id)cachedValueForKey:(id)arg1;
- (void)_performWithWriteLock:(CDUnknownBlockType)arg1;
- (void)_performWithReadLock:(CDUnknownBlockType)arg1;
- (id)_readWriteLock;
- (void)_sharedInit;
- (void)setBackingObject:(id)arg1;
- (id)backingObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

