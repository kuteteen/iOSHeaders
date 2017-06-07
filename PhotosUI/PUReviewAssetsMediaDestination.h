//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUMediaDestination.h>

@class NSMutableDictionary, NSURL, PUEditableMediaProvider;

@interface PUReviewAssetsMediaDestination : PUMediaDestination
{
    NSURL *__desiredOutputDirectory;
    PUEditableMediaProvider *__mediaProvider;
    NSMutableDictionary *_pendingRequestsByRequestIdentifier;
}

@property(readonly, nonatomic, getter=_pendingRequestsByRequestIdentifier) NSMutableDictionary *pendingRequestsByRequestIdentifier; // @synthesize pendingRequestsByRequestIdentifier=_pendingRequestsByRequestIdentifier;
@property(readonly, nonatomic) PUEditableMediaProvider *_mediaProvider; // @synthesize _mediaProvider=__mediaProvider;
@property(readonly, nonatomic) NSURL *_desiredOutputDirectory; // @synthesize _desiredOutputDirectory=__desiredOutputDirectory;
- (void).cxx_destruct;
- (id)initWithOutputDirectory:(id)arg1 mediaProvider:(id)arg2;
- (long long)_workImageVersionForContentEditingOutput:(id)arg1;
- (void)_requestDidFinish:(id)arg1;
- (id)_saveEditsWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)progressForRequestWithIdentifier:(int)arg1;
- (_Bool)supportsProgressForRequestWithIdentifier:(int)arg1;
- (void)ensureEditableCopyOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelRequestWithIdentifier:(int)arg1;
- (_Bool)isSavingRequestWithIdentifier:(int)arg1;
- (int)revertEditsForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)saveInternalEditsForAsset:(id)arg1 usingPhotoEditModel:(id)arg2 version:(long long)arg3 livePhotoEditModel:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)saveEditsByCopyingAsset:(id)arg1 withResourceURL:(id)arg2 usingContentEditingOutput:(id)arg3 livePhotoEditModel:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

