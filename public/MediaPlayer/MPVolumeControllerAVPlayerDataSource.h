//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPVolumeControllerSystemDataSource.h>

@class AVPlayer, MPKeyValueObserver;

@interface MPVolumeControllerAVPlayerDataSource : MPVolumeControllerSystemDataSource
{
    MPKeyValueObserver *_volumeObserver;
    MPKeyValueObserver *_mutedObserver;
    AVPlayer *_player;
}

@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_tearDown;
- (void)_setup;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)reload;
- (void)setMuted:(_Bool)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolumeAudioCategory:(id)arg1;
- (id)initWithAVPlayer:(id)arg1;

@end

