//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DCService, NSMutableDictionary, NSOperationQueue, NSString, NSURL;

@interface DCCachedItemManager : NSObject
{
    NSMutableDictionary *_items;
    NSOperationQueue *_operationQueue;
    NSString *_purposeIdentifier;
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    DCService *_service;
}

+ (id)thumbnailForUnderlyingItem:(id)arg1;
+ (id)fileAtRelativePath:(id)arg1;
+ (id)directoryAtRelativePath:(id)arg1;
+ (id)itemWithDocumentIdentifier:(id)arg1 parent:(id)arg2;
+ (id)itemsWithDocumentIdentifier:(id)arg1 forService:(id)arg2;
+ (id)itemAtRelativePath:(id)arg1;
+ (id)fileResourceTypeAtRelativePath:(id)arg1;
+ (void)removeCachedItemManagerForService:(id)arg1;
+ (id)cachedItemManagerForService:(id)arg1;
@property(retain, nonatomic) DCService *service; // @synthesize service=_service;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
- (void).cxx_destruct;
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 byAccessor:(CDUnknownBlockType)arg4;
- (void)coordinateReadingForUploadingItem:(id)arg1 error:(id *)arg2 byAccessor:(CDUnknownBlockType)arg3;
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 byAccessor:(CDUnknownBlockType)arg4;
- (id)_fileCoordinator;
- (void)evictItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)moveItem:(id)arg1 withDocumentIdentifier:(id)arg2 versionIdentifier:(id)arg3 toRelativePath:(id)arg4;
- (id)_parentFromChildRelativePath:(id)arg1;
- (id)parentOfItem:(id)arg1;
- (id)root;
- (id)_itemAtRelativePath:(id)arg1 itemClass:(Class)arg2 itemType:(id)arg3;
- (id)_fileResourceTypeAtRelativePath:(id)arg1;
- (void)setPurposeIdentifier:(id)arg1;
- (id)_initWithService:(id)arg1;
- (id)fileForUploadTaskIdentifier:(id)arg1 sessionIdentifier:(id)arg2;
- (id)_thumbnailForUnderlyingItem:(id)arg1;

@end

