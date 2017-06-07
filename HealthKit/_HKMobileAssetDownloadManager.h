//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface _HKMobileAssetDownloadManager : NSObject
{
    NSMutableArray *_pendingOperations;
    NSMutableSet *_downloadedPredicateFormats;
    NSObject<OS_dispatch_queue> *_queue;
    _HKMobileAssetDownloadManager *_retainedSelf;
    _Bool _shouldQueryLocalAssetsFirst;
    _Bool _shouldAutoDownloadRemoteAssets;
    NSString *_mobileAssetTypeName;
    NSDictionary *_downloadOptions;
    CDUnknownBlockType _downloadCompletionHandler;
    CDUnknownBlockType _errorHandler;
}

@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletionHandler; // @synthesize downloadCompletionHandler=_downloadCompletionHandler;
@property(copy, nonatomic) NSDictionary *downloadOptions; // @synthesize downloadOptions=_downloadOptions;
@property(readonly, copy, nonatomic) NSString *mobileAssetTypeName; // @synthesize mobileAssetTypeName=_mobileAssetTypeName;
@property(nonatomic) _Bool shouldAutoDownloadRemoteAssets; // @synthesize shouldAutoDownloadRemoteAssets=_shouldAutoDownloadRemoteAssets;
@property(nonatomic) _Bool shouldQueryLocalAssetsFirst; // @synthesize shouldQueryLocalAssetsFirst=_shouldQueryLocalAssetsFirst;
- (void).cxx_destruct;
- (void)removeAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_downloadAssets:(id)arg1 completionOverride:(CDUnknownBlockType)arg2;
- (void)_queue_fetchAssetsWithPredicate:(id)arg1 onlyLocal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_fetchAssetsWithLocalInformation:(_Bool)arg1 shouldRequery:(_Bool)arg2 predicate:(id)arg3;
- (void)_callErrorHandlerWithError:(id)arg1;
- (void)_callDownloadCompletionHandlerWithAssets:(id)arg1;
- (void)downloadAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAssetsWithPredicate:(id)arg1 onlyLocal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadAssetsWithPredicate:(id)arg1;
- (void)dealloc;
- (id)initWithMobileAssetTypeName:(id)arg1;

@end

