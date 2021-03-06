//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface PKMobileAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_downloadOptionsWithUserInitiation:(_Bool)arg1;
- (void)_downloadAsset:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queryAssetsWithAssetType:(id)arg1 predicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_retrieveAssetWithAssetType:(id)arg1 userInitiated:(_Bool)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)sortDescriptorsForEducationVideoWithPeerPaymentCard:(_Bool)arg1;
- (id)predicateForEducationVideo;
- (void)fetchEducationVideoWithPeerPaymentCard:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchNeededAssetsForThisDeviceWithPeerPaymentCard:(_Bool)arg1;
- (id)init;

@end

