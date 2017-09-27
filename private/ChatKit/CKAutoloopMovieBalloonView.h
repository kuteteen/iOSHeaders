//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKImageBalloonView.h>

#import "ISChangeObserver.h"
#import "ISWrappedAVPlayerDelegate.h"

@class CKMovieMediaObject, ISVideoPlayerUIView, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSString, UIImageView, UIView;

@interface CKAutoloopMovieBalloonView : CKImageBalloonView <ISWrappedAVPlayerDelegate, ISChangeObserver>
{
    _Bool _isJellyfishVideo;
    _Bool _isMuted;
    CKMovieMediaObject *_mediaObject;
    ISVideoPlayerUIView *_videoPlayer;
    ISWrappedAVPlayer *_avPlayer;
    ISWrappedAVAudioSession *_audioSession;
    UIImageView *_muteButton;
    UIView *_snapshotView;
}

+ (id)_autoloopAVAudioSessionQueue;
+ (_Bool)isEnabled;
+ (Class)VideoPlayerUIViewClass;
+ (Class)AVPlayerClass;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(retain, nonatomic) UIImageView *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) ISWrappedAVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) ISWrappedAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) ISVideoPlayerUIView *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(nonatomic) _Bool isJellyfishVideo; // @synthesize isJellyfishVideo=_isJellyfishVideo;
@property(retain, nonatomic) CKMovieMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)avPlayerDidDeallocate;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (_Bool)_shouldPresentQuickLookOnTap;
- (_Bool)_shouldPauseInitialLooping;
- (void)_removeSnapshot;
- (_Bool)_applicationStateAcceptableForLooping;
- (void)_thermalStateDidChange:(id)arg1;
- (_Bool)_thermalStateAcceptableForLooping;
- (void)tapGestureRecognized:(id)arg1;
- (void)didMoveToWindow;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

