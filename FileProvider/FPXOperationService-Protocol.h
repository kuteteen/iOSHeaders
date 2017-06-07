//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FPItemID, NSArray, NSDate, NSString;
@protocol FPOperationClient;

@protocol FPXOperationService
- (void)setFavoriteRanks:(NSArray *)arg1 forItemIdentifiers:(NSArray *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)setTagsData:(NSArray *)arg1 forItemIdentifiers:(NSArray *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)setLastUsedDate:(NSDate *)arg1 forItemIDs:(NSArray *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)untrashItemsWithIdentifiers:(NSArray *)arg1 toDirectoryWithIdentifier:(FPItemID *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)trashItemsWithIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)startOperation:(id <FPOperationClient>)arg1 toFetchItemID:(FPItemID *)arg2 reply:(void (^)(FPItem *, NSError *))arg3;
- (void)startOperation:(id <FPOperationClient>)arg1 toFetchDefaultContainerForBundleIdentifier:(NSString *)arg2 englishName:(NSString *)arg3 inDomainIdentifier:(NSString *)arg4 reply:(void (^)(FPItem *, NSError *))arg5;
- (void)startOperation:(id <FPOperationClient>)arg1 toFetchParentForItem:(FPItemID *)arg2 reply:(void (^)(FPItem *, NSError *))arg3;
- (void)startOperation:(id <FPOperationClient>)arg1 toCreateFolderWithName:(NSString *)arg2 underParent:(FPItemID *)arg3 reply:(void (^)(FPItem *, NSError *))arg4;
- (void)startOperation:(id <FPOperationClient>)arg1 toDeleteItems:(NSArray *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(id <FPOperationClient>)arg1 toRenameItem:(FPItemID *)arg2 toNewName:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)startOperation:(id <FPOperationClient>)arg1 toReparentItems:(NSArray *)arg2 underParent:(FPItemID *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)startOperation:(id <FPOperationClient>)arg1 toImportDocumentsAtURLs:(NSArray *)arg2 withSandboxExtensions:(NSArray *)arg3 lastUsedDates:(NSArray *)arg4 intoFolderWithIdentifier:(FPItemID *)arg5 bounceOnCollision:(_Bool)arg6 reply:(void (^)(NSDictionary *, NSError *))arg7;
- (void)startOperation:(id <FPOperationClient>)arg1 toFetchThumbnailsForItemIdentifiers:(NSArray *)arg2 size:(struct CGSize)arg3 completionHandler:(void (^)(NSError *))arg4;
@end
