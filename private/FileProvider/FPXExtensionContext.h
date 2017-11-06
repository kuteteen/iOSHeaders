//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "FPXVendor.h"

@class FPXDomainContext, NSHashTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface FPXExtensionContext : NSExtensionContext <FPXVendor>
{
    NSMutableSet *_listenerDelegates;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_actionsQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_runningEnumerators;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSMutableDictionary *_contextByDomainID;
    NSMutableDictionary *_domainContextByURL;
    _Bool _isBeingDeallocated;
    FPXDomainContext *_defaultDomainContext;
    NSString *_providerIdentifier;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(retain, nonatomic) FPXDomainContext *defaultDomainContext; // @synthesize defaultDomainContext=_defaultDomainContext;
- (void).cxx_destruct;
- (void)startOperation:(id)arg1 toFetchDefaultContainerForBundleIdentifier:(id)arg2 englishName:(id)arg3 inDomainIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)startOperation:(id)arg1 toFetchItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toFetchParentForItem:(id)arg2 recursively:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startOperation:(id)arg1 toCreateFolderWithName:(id)arg2 underParent:(id)arg3 bounceOnCollision:(_Bool)arg4 bounceIndex:(unsigned long long)arg5 reply:(CDUnknownBlockType)arg6;
- (void)startOperation:(id)arg1 toCreateFolderWithName:(id)arg2 underParent:(id)arg3 bounceOnCollision:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
- (void)startOperation:(id)arg1 toDeleteItems:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toRenameItem:(id)arg2 toNewName:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startOperation:(id)arg1 toReparentItems:(id)arg2 underParent:(id)arg3 shouldBounce:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
- (void)_reparentItem:(id)arg1 underParent:(id)arg2 withNewName:(id)arg3 shouldBounce:(_Bool)arg4 bounceIndex:(unsigned long long)arg5 reply:(CDUnknownBlockType)arg6;
- (void)startOperation:(id)arg1 toImportDocumentsAtURLs:(id)arg2 withSandboxExtensions:(id)arg3 lastUsedDates:(id)arg4 intoFolderWithIdentifier:(id)arg5 bounceOnCollision:(_Bool)arg6 reply:(CDUnknownBlockType)arg7;
- (void)_importDocumentAtURL:(id)arg1 intoFolderWithIdentifier:(id)arg2 bounceOnCollision:(_Bool)arg3 originalName:(id)arg4 bounceIndex:(unsigned long long)arg5 reply:(CDUnknownBlockType)arg6;
- (id)_bounceURL:(id)arg1 originalName:(id)arg2 bounceIndex:(unsigned long long)arg3 error:(id *)arg4;
- (id)_servicesForServiceNames:(id)arg1 itemID:(id)arg2;
- (void)fetchSupportedServicesForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSupportedServicesForDocumentAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_proxyWithCancellationHandler:(id)arg1 forClientOperation:(id)arg2;
- (void)fetchRemoteFileProviderEndpointForProtocolName:(id)arg1 service:(id)arg2 itemURL:(id)arg3 needsItemURL:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)removeListenerDelegate:(id)arg1;
- (void)addListenerDelegate:(id)arg1;
- (void)enumeratorWasInvalidated:(id)arg1;
- (void)_startObservingCollectionWithProperties:(id)arg1 observer:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 allowIdentifiers:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)privilegedValuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)directValuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toFetchThumbnailsForItemIdentifiers:(id)arg2 size:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)trashItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_persistedDocumentURLForURL:(id)arg1 itemID:(id)arg2 extension:(id)arg3 shouldCreatePlaceholder:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)itemForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)identifierForItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)alternateContentsURLForItemID:(id)arg1;
- (void)providePlaceholderAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setFavoriteRanks:(id)arg1 forItemIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTagsData:(id)arg1 forItemIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLastUsedDate:(id)arg1 forItemIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)untrashItemsWithIdentifiers:(id)arg1 toDirectoryWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)trashItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dumpIndexStateForDomain:(id)arg1 toFileHandler:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dropIndexForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)indexOneBatchInDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)itemChangedAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTrashedItemsOlderThanDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)refreshInstalledAppsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)defaultInstance;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)evictItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didChangeItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateDomains:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_deleteIndexInDomainContexts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)instanceForItemIDs:(id)arg1;
- (id)domainContextForItemIDs:(id)arg1;
- (id)domainContextForItemID:(id)arg1;
- (id)instanceForItemID:(id)arg1;
- (id)instanceForURL:(id)arg1;
- (id)domainContextForURL:(id)arg1;
- (id)instanceForDomainIdentifier:(id)arg1;
- (id)domainContextForIdentifier:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (void)_setTransaction:(id)arg1;
- (void)startWithPrincipalInstance:(id)arg1 domains:(id)arg2 alternateContentsDictionary:(id)arg3;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end

