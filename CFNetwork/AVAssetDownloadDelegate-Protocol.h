//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class AVAggregateAssetDownloadTask, AVAssetDownloadTask, AVMediaSelection, NSArray, NSURL, NSURLSession;

@protocol AVAssetDownloadDelegate <NSURLSessionTaskDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 aggregateDownloadTask:(AVAggregateAssetDownloadTask *)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(NSArray *)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5 forMediaSelection:(AVMediaSelection *)arg6;
- (void)URLSession:(NSURLSession *)arg1 aggregateAssetDownloadTask:(AVAggregateAssetDownloadTask *)arg2 didCompleteForMediaSelection:(AVMediaSelection *)arg3;
- (void)URLSession:(NSURLSession *)arg1 aggregateAssetDownloadTask:(AVAggregateAssetDownloadTask *)arg2 willDownloadToURL:(NSURL *)arg3;
- (void)URLSession:(NSURLSession *)arg1 assetDownloadTask:(AVAssetDownloadTask *)arg2 didResolveMediaSelection:(AVMediaSelection *)arg3;
- (void)URLSession:(NSURLSession *)arg1 assetDownloadTask:(AVAssetDownloadTask *)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(NSArray *)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5;
- (void)URLSession:(NSURLSession *)arg1 assetDownloadTask:(AVAssetDownloadTask *)arg2 didFinishDownloadingToURL:(NSURL *)arg3;
@end

