//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class NSArray, NSFileCoordinator, NSMutableSet, NSObject<OS_dispatch_source>;

@interface FPDownloadOperation : FPActionOperation
{
    NSArray *_items;
    NSMutableSet *_itemsPendingCoordination;
    NSObject<OS_dispatch_source> *_stitchingTimer;
    NSFileCoordinator *_fileCoordinator;
    CDUnknownBlockType _downloadCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
- (void).cxx_destruct;
- (void)presendNotifications;
- (void)showItemsAsDownloadingEvenIfDownloaded:(_Bool)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (oneway void)cancel;
- (void)main;
- (id)initWithItems:(id)arg1;

@end

