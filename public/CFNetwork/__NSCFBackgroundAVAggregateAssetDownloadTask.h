//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

#import <CFNetwork/AVAssetDownloadDelegate-Protocol.h>

@class AVURLAsset, NSArray, NSData, NSDictionary, NSObject, NSString, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSCFBackgroundAVAggregateAssetDownloadTask : __NSCFBackgroundSessionTask <AVAssetDownloadDelegate>
{
    _Bool _sentWillDownloadToURL;
    _Bool _sentWillBeginDelayedRequest;
    NSObject<OS_dispatch_queue> *_sessionWorkQueue;
    unsigned long long _AVAssetDownloadToken;
    AVURLAsset *_URLAsset;
    NSArray *_mediaSelections;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    NSDictionary *_options;
    NSString *_childAssetDownloadTasksSessionIdentifier;
    NSURLSession *_childAssetDownloadSession;
    NSArray *_childAssetDownloadTasks;
}

+ (id)childSessionConfigurationWithClientConfiguration:(id)arg1 identifier:(id)arg2;
@property(readonly) NSArray *childAssetDownloadTasks; // @synthesize childAssetDownloadTasks=_childAssetDownloadTasks;
@property(readonly) NSURLSession *childAssetDownloadSession; // @synthesize childAssetDownloadSession=_childAssetDownloadSession;
@property(readonly) NSString *childAssetDownloadTasksSessionIdentifier; // @synthesize childAssetDownloadTasksSessionIdentifier=_childAssetDownloadTasksSessionIdentifier;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSData *assetArtworkData; // @synthesize assetArtworkData=_assetArtworkData;
@property(copy) NSString *assetTitle; // @synthesize assetTitle=_assetTitle;
@property(retain) NSArray *mediaSelections; // @synthesize mediaSelections=_mediaSelections;
@property(retain) AVURLAsset *URLAsset; // @synthesize URLAsset=_URLAsset;
@property unsigned long long AVAssetDownloadToken; // @synthesize AVAssetDownloadToken=_AVAssetDownloadToken;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (void)_onqueue_childTask:(id)arg1 didLoadTimeRange:(CDStruct_3c1748cc)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg4;
- (void)_onqueue_childTask:(id)arg1 willDownloadToURL:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_onqueue_childTask:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_childTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)_onqueue_cancel;
- (void)_onqueue_suspend;
- (void)_onqueue_resume;
- (_Bool)_isAVAssetTask;
- (id)response;
- (id)currentRequest;
- (id)originalRequest;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned long long)arg4;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 URLAsset:(id)arg3 mediaSelections:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 ident:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

