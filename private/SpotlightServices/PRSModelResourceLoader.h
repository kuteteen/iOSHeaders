//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface PRSModelResourceLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_pendingUpdates;
}

+ (id)resourceDirectoryPathForType:(unsigned long long)arg1 forUpdate:(_Bool)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)moveNewlyPackagedResources:(id)arg1;
- (void)markResourcesAsRemovable:(unsigned long long)arg1;
- (void)markResourcesAsRemovable:(unsigned long long)arg1 group:(id)arg2;
- (void)unpackageModelResources:(id)arg1 type:(unsigned long long)arg2 intoDirectory:(id)arg3 group:(id)arg4;
- (void)unpackageModelResources:(id)arg1 type:(unsigned long long)arg2 group:(id)arg3;
- (void)unpackageModelResources:(id)arg1 type:(unsigned long long)arg2;
- (void)removeDeprecatedResources;
- (id)metadataForResourceType:(unsigned long long)arg1;
- (void)removeResourcesForType:(unsigned long long)arg1;
- (void)removeResourcesForType:(unsigned long long)arg1 group:(id)arg2;
- (_Bool)_loadArchivedResources:(id)arg1 parentPath:(id)arg2;
- (int)checkHeader:(struct prs_model_resource_header *)arg1;
- (int)unpackageLZMATarData:(void *)arg1 size:(unsigned long long)arg2 parentDir:(const char *)arg3;
- (_Bool)hasPendingUpdates;
- (id)init;

@end

