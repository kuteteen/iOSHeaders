//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAsset, AVPlayerItem, AVQueuePlayer, NSURL, NSValue, _CLKPlayerView;
@protocol CLKVideoPlayerViewDelegate;

@interface CLKVideoPlayerView : UIView
{
    _CLKPlayerView *_playerView;
    AVQueuePlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerItem *_observedItem;
    AVPlayerItem *_queuedItem;
    NSURL *_assetURL;
    AVAsset *_asset;
    id _periodicTimeObserver;
    CDStruct_1b6d18a9 _willBeginPlayingTime;
    UIView *_pausedView;
    unsigned long long _servicingRequest;
    NSValue *_seekRequested;
    CDStruct_1b6d18a9 _seekWithTolerance;
    unsigned int _playRequested:1;
    unsigned int _prerollRequested:1;
    unsigned int _isExpectingPreroll:1;
    _Bool _pausedViewEnabled;
    _Bool _playing;
    id <CLKVideoPlayerViewDelegate> _delegate;
}

+ (void)_prewarm;
@property(readonly, nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool pausedViewEnabled; // @synthesize pausedViewEnabled=_pausedViewEnabled;
@property(nonatomic) __weak id <CLKVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)queueVideo:(id)arg1;
- (void)play;
- (void)_play;
- (void)preroll;
- (void)expectPreroll;
- (void)_preroll;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 tolerance:(CDStruct_1b6d18a9)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)_pause;
- (void)loadVideo:(id)arg1;
- (id)_createPlayerItemForVideoURL:(id)arg1;
- (void)_hidePausedView;
- (void)_showPausedView;
- (void)_performNextRequest;
- (_Bool)_readyToPerformRequest;
- (void)_resetRequestState;
- (_Bool)isPlaybackReady;
- (void)_periodicTimeObserverChanged:(CDStruct_1b6d18a9)arg1;
- (void)_handleDidPlayToEndTime:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingPlayerItem;
- (void)_observePlayerItem:(id)arg1;
@property(readonly, nonatomic) AVQueuePlayer *player;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

