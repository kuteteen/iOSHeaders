//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSKeyedUnarchiverDelegate.h"

@class NSData, NSDictionary, NSString, NSURL;

@interface SCNSceneSource : NSObject <NSKeyedUnarchiverDelegate>
{
    struct __C3DSceneSource *_sceneSource;
    struct __C3DScene *_lastLoadedScene;
    NSDictionary *_lastOptions;
    _Bool _sceneLoaded;
    NSDictionary *_sceneSourceOptions;
}

+ (id)sceneFileTypes;
+ (id)sceneTypes;
+ (id)sceneSourceWithData:(id)arg1 options:(id)arg2;
+ (id)sceneSourceWithURL:(id)arg1 options:(id)arg2;
+ (void)_removeCachedSceneSourceIfNeededForURL:(id)arg1;
+ (void)_cacheSceneSource:(id)arg1 forURL:(id)arg2 options:(id)arg3;
+ (id)_cachedSceneSourceForURL:(id)arg1 options:(id)arg2;
+ (_Bool)_shouldCacheWithOptions:(id)arg1;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (id)performConsistencyCheck;
- (_Bool)canExportToColladaWithNoDataLoss;
- (long long)sourceStatus;
- (id)IDsOfEntriesWithClass:(Class)arg1;
- (id)entryWithID:(id)arg1 withClass:(Class)arg2;
- (id)entriesPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)_appendToEntries:(id)arg1 entriesWithType:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3 entryObjectConstructor:(CDUnknownBlockType)arg4;
- (id)identifiersOfEntriesWithClass:(Class)arg1;
- (id)entryWithIdentifier:(id)arg1 withClass:(Class)arg2;
- (struct __C3DLibrary *)library;
- (struct __C3DSceneSource *)sceneSourceRef;
- (id)propertyForKey:(id)arg1;
- (id)copyPropertiesAtIndex:(long long)arg1 options:(id)arg2;
- (id)sceneWithOptions:(id)arg1 error:(id *)arg2;
- (id)sceneWithClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)sceneWithOptions:(id)arg1 statusHandler:(CDUnknownBlockType)arg2;
- (id)sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(CDUnknownBlockType)arg3;
- (id)_sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(CDUnknownBlockType)arg3;
- (struct __C3DScene *)_createSceneRefWithOptions:(id)arg1 statusHandler:(CDUnknownBlockType)arg2;
- (id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2;
@property(readonly, copy) NSString *description;
- (long long)sceneCount;
- (long long)countOfScenes;
@property(readonly) NSData *data;
@property(readonly) NSURL *url;
- (void)dealloc;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)sceneSourceOptions;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

