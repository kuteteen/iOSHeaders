//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPOperation.h>

@class FPItemManager, FPOperationStitcher, NSDictionary, NSString;

@interface FPActionOperation : FPOperation
{
    NSDictionary *_itemsByProviderAndDomain;
    NSString *_providerIdentifier;
    _Bool _multiProviders;
    CDUnknownBlockType _closeRemoteService;
    unsigned long long *_logSection;
    CDUnknownBlockType _actionCompletionBlock;
    FPItemManager *_itemManager;
    FPOperationStitcher *_stitcher;
}

@property(copy, nonatomic) FPOperationStitcher *stitcher; // @synthesize stitcher=_stitcher;
@property(copy, nonatomic) FPItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(copy, nonatomic) CDUnknownBlockType actionCompletionBlock; // @synthesize actionCompletionBlock=_actionCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)presendNotifications;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)main;
- (void)_dispatchToSubOperations;
- (id)replicateForItems:(id)arg1;
- (id)initWithItemsOfDifferentProviders:(id)arg1;
- (id)initWithProvider:(id)arg1;

@end

