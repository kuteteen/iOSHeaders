//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDXPCServiceExportedInterface.h"

@class NSArray, NSString;

@protocol PDCloudStoreServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 completion:(void (^)(PKCloudRecordArray *, NSError *))arg2;
- (void)simulateCloudStorePushWithCompletion:(void (^)(PKCloudRecordArray *, NSArray *, NSError *))arg1;
- (void)resetContainerWithHandler:(void (^)(_Bool, NSError *))arg1;
- (void)allTransactionsAndStoreLocally:(_Bool)arg1 completion:(void (^)(PKCloudRecordArray *, NSError *))arg2;
- (void)removeTransactionsWithRecordNames:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateCloudStoreWithLocalItems:(NSArray *)arg1 recordSpecificKeys:(NSArray *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;

@optional
- (void)resetContainerWithCompletion:(void (^)(_Bool))arg1;
@end

