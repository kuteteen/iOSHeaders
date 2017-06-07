//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

#import <PhotosUI/ISChangeObserver-Protocol.h>

@class ISLivePhotoPlayer, ISWrappedAVPlayer, NSMutableSet, NSString, PHLivePhoto, PUMediaProvider;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUBrowsingIrisPlayer : PUViewModel <ISChangeObserver>
{
    struct {
        _Bool livePhoto;
        _Bool playerContent;
        _Bool playerLoadingTarget;
    } _isValid;
    _Bool _hasPendingVitalityHint;
    _Bool _isLivePhotoLoadingAllowed;
    _Bool _isLivePhotoPlaybackAllowed;
    int __livePhotoRequestID;
    ISLivePhotoPlayer *_player;
    id <PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    ISWrappedAVPlayer *_avPlayer;
    long long _loadingTarget;
    NSMutableSet *__livePhotoLoadingDisablingReasons;
    NSMutableSet *__livePhotoPlaybackDisablingReasons;
    long long __currentUnloadRequestId;
    PHLivePhoto *__livePhoto;
    long long __livePhotoRequestState;
}

@property(nonatomic, setter=_setLivePhotoRequestID:) int _livePhotoRequestID; // @synthesize _livePhotoRequestID=__livePhotoRequestID;
@property(nonatomic, setter=_setLivePhotoRequestState:) long long _livePhotoRequestState; // @synthesize _livePhotoRequestState=__livePhotoRequestState;
@property(retain, nonatomic, setter=_setLivePhoto:) PHLivePhoto *_livePhoto; // @synthesize _livePhoto=__livePhoto;
@property(nonatomic, setter=_setCurrentUnloadRequestId:) long long _currentUnloadRequestId; // @synthesize _currentUnloadRequestId=__currentUnloadRequestId;
@property(retain, nonatomic) NSMutableSet *_livePhotoPlaybackDisablingReasons; // @synthesize _livePhotoPlaybackDisablingReasons=__livePhotoPlaybackDisablingReasons;
@property(retain, nonatomic) NSMutableSet *_livePhotoLoadingDisablingReasons; // @synthesize _livePhotoLoadingDisablingReasons=__livePhotoLoadingDisablingReasons;
@property(readonly, nonatomic) _Bool isLivePhotoPlaybackAllowed; // @synthesize isLivePhotoPlaybackAllowed=_isLivePhotoPlaybackAllowed;
@property(readonly, nonatomic) _Bool isLivePhotoLoadingAllowed; // @synthesize isLivePhotoLoadingAllowed=_isLivePhotoLoadingAllowed;
@property(nonatomic) long long loadingTarget; // @synthesize loadingTarget=_loadingTarget;
@property(readonly, nonatomic) _Bool hasPendingVitalityHint; // @synthesize hasPendingVitalityHint=_hasPendingVitalityHint;
@property(readonly, nonatomic) ISWrappedAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_updatePlayerContentIfNeeded;
- (void)_invalidatePlayerContent;
- (void)_updateLivePhotoIfNeeded;
- (void)_invalidateLivePhoto;
- (void)unloadLivePhoto;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (_Bool)_isContentLoadingRequestInProgress;
- (void)_cancelAllRequests;
- (void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 requestID:(int)arg3;
- (long long)_contentMode;
- (struct CGSize)_targetSize;
- (id)playerCreateIfNeeded;
@property(readonly, nonatomic) ISLivePhotoPlayer *player; // @synthesize player=_player;
- (id)_playerCreateIfNeeded:(_Bool)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (id)currentChange;
- (id)newViewModelChange;
- (void)_setLivePhotoLoadingAllowed:(_Bool)arg1;
- (void)setLivePhotoLoadingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_setLivePhotoPlaybackAllowed:(_Bool)arg1;
- (void)setLivePhotoPlaybackDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)didPerformChanges;
- (void)didPlayVitalityHint;
- (void)playVitalityHint;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

