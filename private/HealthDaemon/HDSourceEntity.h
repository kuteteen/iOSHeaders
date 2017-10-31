//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSourceEntity : HDHealthEntity
{
}

+ (id)_firstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_firstSourceWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_sourcesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)orderedBundleIdentifiersFromSourceUUIDsData:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)bundleIdentifiersForSourcesWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)sourcesWithPredicate:(id)arg1 orderingProperties:(id)arg2 orderingDirections:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)sourcesWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)sourcesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)firstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)firstSourceWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)sourceForLocalDeviceWithDatabase:(id)arg1 error:(id *)arg2;
+ (id)_insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(_Bool)arg5 productType:(id)arg6 deleted:(_Bool)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 database:(id)arg10 error:(id *)arg11;
+ (id)insertCodableSource:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(_Bool)arg5 productType:(id)arg6 modificationDate:(id)arg7 provenance:(long long)arg8 profile:(id)arg9 error:(id *)arg10;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (long long)protectionClass;
+ (id)indices;
+ (id)columnsDefinition;
+ (id)databaseTable;
- (_Bool)deleteSourceWithDatabase:(id)arg1 error:(id *)arg2;
- (id)sourceBundleIdentifierInDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)_updateValues:(id)arg1 forProperties:(id)arg2 profile:(id)arg3 didUpdate:(_Bool *)arg4 error:(id *)arg5;
- (_Bool)setBundleIdentifier:(id)arg1 UUID:(id)arg2 profile:(id)arg3 error:(id *)arg4;
- (_Bool)setOptions:(unsigned long long)arg1 profile:(id)arg2 didUpdate:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)setName:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (id)sourceUUIDWithProfile:(id)arg1 error:(id *)arg2;
- (id)sourceUUIDWithHealthDatabase:(id)arg1 error:(id *)arg2;
- (id)codableSourceWithEncoder:(id)arg1 error:(id *)arg2;
- (id)codableSourceWithProfile:(id)arg1 error:(id *)arg2;
- (id)sourceWithProfile:(id)arg1 error:(id *)arg2;

@end

