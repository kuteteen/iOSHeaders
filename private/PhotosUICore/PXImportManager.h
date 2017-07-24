//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSProgress;

@interface PXImportManager : NSObject
{
    NSMapTable *_progressToProvidersMapping;
    NSMapTable *_progressToCompletionHandlerMapping;
    NSMapTable *_progressToSharedSourcesCompletionHandlerMapping;
    NSMapTable *_progressToErrorsMapping;
    NSMapTable *_providersToImportedResultObjectMapping;
    NSProgress *_progress;
}

+ (id)supportedTypeIdentifiers;
+ (id)defaultManager;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)fetchAssetsFromDrop:(id)arg1 importIfNeeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_sourcesForItemProviders:(id)arg1;
- (id)_assetsForImportedItemProviders:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_addProgress:(id)arg1 forItemProviders:(id)arg2;
- (void)_addProgress:(id)arg1 forItemProviders:(id)arg2 assetCreationCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_addProgress:(id)arg1 forItemProviders:(id)arg2 sharedSourceCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_handleCompletionOfImportForItemProvider:(id)arg1 resultObject:(id)arg2 progress:(id)arg3 error:(id)arg4;
- (id)importSharedSourcesForDragItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)importDragItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
