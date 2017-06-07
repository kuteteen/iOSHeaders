//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetEditOperationPerformer.h>

#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PHAsset;

__attribute__((visibility("hidden")))
@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer <PXChangeObserver>
{
    CDUnknownBlockType _completionHandler;
    _Bool _didSave;
}

- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_completeWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_performSaveIfReady;
- (void)performEditOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PHAsset *asset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

