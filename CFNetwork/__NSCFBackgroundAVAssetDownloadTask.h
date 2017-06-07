//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@class AVMediaSelection, AVURLAsset, NSArray, NSData, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask
{
    unsigned long long _downloadToken;
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSURL *_destinationURL;
    NSURL *_temporaryDestinationURL;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    AVURLAsset *_URLAsset;
    NSDictionary *_options;
    NSArray *_loadedTimeRanges;
    AVMediaSelection *_resolvedMediaSelection;
}

@property(copy) AVMediaSelection *resolvedMediaSelection; // @synthesize resolvedMediaSelection=_resolvedMediaSelection;
@property(copy) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(retain) AVURLAsset *URLAsset; // @synthesize URLAsset=_URLAsset;
@property(copy) NSData *assetArtworkData; // @synthesize assetArtworkData=_assetArtworkData;
@property(copy) NSString *assetTitle; // @synthesize assetTitle=_assetTitle;
@property(copy) NSURL *temporaryDestinationURL; // @synthesize temporaryDestinationURL=_temporaryDestinationURL;
@property(copy) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
@property unsigned long long AVAssetDownloadToken; // @synthesize AVAssetDownloadToken=_AVAssetDownloadToken;
- (id)response;
- (id)currentRequest;
- (id)originalRequest;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_willDownloadToURL:(id)arg1;
- (void)_onqueue_didFinishDownloadingToURL:(id)arg1;
- (void)_onqueue_didResolveMediaSelectionPropertyList:(id)arg1;
- (void)_onqueue_didLoadTimeRange:(id)arg1 totalTimeRangesLoaded:(id)arg2 timeRangeExpectedToLoad:(id)arg3;
- (void)_onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)dealloc;
- (id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned long long)arg4;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 URLAsset:(id)arg3 URL:(id)arg4 destinationURL:(id)arg5 temporaryDestinationURL:(id)arg6 assetTitle:(id)arg7 assetArtworkData:(id)arg8 ident:(unsigned long long)arg9;

@end

