//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibrary/PLUIImageViewController.h>

#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, NSURL, PHAsset, PHLivePhotoView, PUBrowsingIrisPlayer;

__attribute__((visibility("hidden")))
@interface PUUIImageViewController : PLUIImageViewController <UIGestureRecognizerDelegate>
{
    _Bool _isIris;
    _Bool _wantsLivePhotoResult;
    _Bool _wantsVideoURLResult;
    PHAsset *_asset;
    int __imageManagerVideoRequestID;
    PUBrowsingIrisPlayer *__irisPlayer;
    PHLivePhotoView *__livePhotoView;
    NSString *__videoAssetURL;
    NSURL *__assetURL;
}

@property(setter=_setImageManagerVideoRequestID:) int _imageManagerVideoRequestID; // @synthesize _imageManagerVideoRequestID=__imageManagerVideoRequestID;
@property(retain, nonatomic, setter=_setAssetURL:) NSURL *_assetURL; // @synthesize _assetURL=__assetURL;
@property(retain, nonatomic, setter=_setVideoAssetURL:) NSString *_videoAssetURL; // @synthesize _videoAssetURL=__videoAssetURL;
@property(retain, nonatomic, setter=_setLivePhotoView:) PHLivePhotoView *_livePhotoView; // @synthesize _livePhotoView=__livePhotoView;
@property(retain, nonatomic) PUBrowsingIrisPlayer *_irisPlayer; // @synthesize _irisPlayer=__irisPlayer;
- (void).cxx_destruct;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)_fetchLivePhotoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleLivePhotoRequestResult:(id)arg1 info:(id)arg2;
- (void)_loadLivePhoto;
- (id)irisPlayerViewViewHostingGestureRecognizers:(id)arg1;
- (id)irisPlayerView:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setIrisPlayer:(id)arg1;
- (void)loadView;
- (id)initWithPhoto:(id)arg1 imagePickerProperties:(id)arg2 expectsLivePhoto:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

