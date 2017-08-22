//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightDaemon/CSSearchableIndexInterface-Protocol.h>

@class CSSearchQueryContext, CSSearchableItem, CSUserAction, NSDate, NSString, SPCoreSpotlightTask;
@protocol CSIndexExtensionDelegate, CSSearchableIndexServiceInterface;

@protocol MDIndexer <CSSearchableIndexInterface>
- (void)runMigration;
- (double)lastUpdateTime;
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4;
- (void)clientDidCheckin:(NSString *)arg1 protectionClass:(NSString *)arg2 service:(id <CSSearchableIndexServiceInterface>)arg3 completionHandler:(void (^)(CSIndexJob *, NSError *))arg4;

@optional
@property __weak id <CSIndexExtensionDelegate> extensionDelegate;
- (void)deleteAllSearchableItemsWithBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2 shouldGC:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)recordEngagementForBundleID:(NSString *)arg1 uniqueIdentifier:(NSString *)arg2 protectionClass:(NSString *)arg3 userQuery:(NSString *)arg4 date:(NSDate *)arg5;
- (void)startQueryTask:(SPCoreSpotlightTask *)arg1;
- (SPCoreSpotlightTask *)taskForQueryWithQueryString:(NSString *)arg1 queryContext:(CSSearchQueryContext *)arg2 resultsHandler:(void (^)(int, unsigned long long, struct __MDStoreOIDArray *, struct __MDPlistBytes *, NSString *))arg3 completionHandler:(void (^)(NSError *))arg4;
- (SPCoreSpotlightTask *)startQueryWithQueryString:(NSString *)arg1 queryContext:(CSSearchQueryContext *)arg2 resultsHandler:(void (^)(int, unsigned long long, struct __MDStoreOIDArray *, struct __MDPlistBytes *, NSString *))arg3 completionHandler:(void (^)(NSError *))arg4;
- (SPCoreSpotlightTask *)startQuery:(NSString *)arg1 withContext:(CSSearchQueryContext *)arg2 handler:(void (^)(int, unsigned long long, struct __MDStoreOIDArray *, struct __MDPlistBytes *, NSString *))arg3;
@end

