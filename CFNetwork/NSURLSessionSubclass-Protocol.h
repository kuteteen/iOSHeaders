//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class AVURLAsset, NSArray, NSData, NSDictionary, NSString, NSURL, NSURLRequest, NSURLSessionAVAggregateAssetDownloadTask, NSURLSessionAVAssetDownloadTask, NSURLSessionDataTask, NSURLSessionDownloadTask, NSURLSessionUploadTask;

@protocol NSURLSessionSubclass <NSObject>
- (void)_onqueue_getTasksWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)_onqueue_resetStorageWithCompletionHandler:(void (^)(void))arg1;
- (void)_onqueue_completeInvalidation:(_Bool)arg1;
- (void)_onqueue_flushWithCompletionHandler:(void (^)(void))arg1;
- (NSURLSessionAVAggregateAssetDownloadTask *)AVAggregateAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 mediaSelections:(NSArray *)arg2 assetTitle:(NSString *)arg3 assetArtworkData:(NSData *)arg4 options:(NSDictionary *)arg5;
- (NSURLSessionAVAssetDownloadTask *)AVAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 assetTitle:(NSString *)arg2 assetArtworkData:(NSData *)arg3 options:(NSDictionary *)arg4;
- (NSURLSessionAVAssetDownloadTask *)AVAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (NSURLSessionAVAssetDownloadTask *)_AVAssetDownloadTaskForURL:(NSURL *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (NSURLSessionDownloadTask *)downloadTaskForRequest:(NSURLRequest *)arg1 downloadFilePath:(NSString *)arg2 resumeData:(NSData *)arg3 completion:(void (^)(NSURL *, NSURLResponse *, NSError *))arg4;
- (NSURLSessionUploadTask *)uploadTaskForRequest:(NSURLRequest *)arg1 uploadFile:(NSURL *)arg2 bodyData:(NSData *)arg3 completion:(void (^)(NSData *, NSURLResponse *, NSError *))arg4;
- (NSURLSessionDataTask *)dataTaskForRequest:(NSURLRequest *)arg1 completion:(void (^)(NSData *, NSURLResponse *, NSError *))arg2;
@end

